#include "PluginProcessor.hpp"
#include <cmath>

namespace wbs::m402 {

M402PluginProcessor::M402PluginProcessor()
    : engine::SharedPluginFrame("Ward-Beck M402 Stepped Equalizer", "M402") {
    defaultOversampling_ = engine::OversamplingRate::TwoX;
}

void M402PluginProcessor::prepareModule(double hostRate, double oversampledRate, size_t maxBlockSize, size_t numChannels) {
    for (size_t ch = 0; ch < numChannels; ++ch) {
        inductorIron_[ch].prepare(hostRate);
        lfFilter_[ch].prepare(oversampledRate);
        midTank_[ch].prepare(oversampledRate);
        hfFilter_[ch].prepare(oversampledRate);
        notchFilter_[ch].prepare(oversampledRate);
    }
    updateParametersFromHost();
}

void M402PluginProcessor::releaseModule() {
    for (size_t ch = 0; ch < numChannels_; ++ch) {
        inductorIron_[ch].reset();
        lfFilter_[ch].reset();
        midTank_[ch].reset();
        hfFilter_[ch].reset();
        notchFilter_[ch].reset();
    }
}

void M402PluginProcessor::updateParametersFromHost() noexcept {
    for (size_t ch = 0; ch < numChannels_; ++ch) {
        lfFilter_[ch].update(lfFreq_, 0.707, lfGain_, engine::FilterType::LowShelf);
        midTank_[ch].update(midFreq_, 1.5, midGain_, engine::FilterType::PeakingBell);
        hfFilter_[ch].update(hfFreq_, 0.707, hfGain_, engine::FilterType::HighShelf);

        if (notchMode_ == HumNotchMode::Notch60Hz) {
            notchFilter_[ch].update(60.0, 10.0, -40.0, engine::FilterType::Notch60Hz);
        } else if (notchMode_ == HumNotchMode::Notch120Hz) {
            notchFilter_[ch].update(120.0, 10.0, -40.0, engine::FilterType::Notch60Hz);
        }
    }
}

void M402PluginProcessor::processModuleSlice(engine::AudioBlock& slice) noexcept {
    for (size_t ch = 0; ch < slice.numChannels; ++ch) {
        float* channelData = slice.getChannelPointer(ch);

        for (size_t i = 0; i < slice.numSamples; ++i) {
            float s = channelData[i];

            // 1. Hum Notch Filter
            if (notchMode_ != HumNotchMode::Off) {
                s = notchFilter_[ch].processSample(s);
            }

            // 2. LF Stepped Shelf
            s = lfFilter_[ch].processSample(s);

            // 3. Mid LC Toroid Tank with Saturation
            s = midTank_[ch].processSample(s);
            s = inductorIron_[ch].processSample(s, 1.0f, ironSat_);

            // 4. HF Stepped Shelf
            s = hfFilter_[ch].processSample(s);

            channelData[i] = s;
        }
    }
}

void M402PluginProcessor::updateMeters(const engine::AudioBlock& audioBlock) noexcept {
    for (size_t ch = 0; ch < audioBlock.numChannels; ++ch) {
        const float* data = audioBlock.getChannelPointer(ch);
        float peak = 0.0f;
        for (size_t i = 0; i < audioBlock.numSamples; ++i) {
            peak = std::max(peak, std::abs(data[i]));
        }
        vuMeter_[ch] = (vuMeter_[ch] * 0.92f) + (peak * 0.08f);
    }
}

void M402PluginProcessor::setLfFrequencyStep(int stepIndex) noexcept {
    constexpr float freqs[] = { 50.0f, 100.0f, 200.0f };
    lfFreq_ = freqs[std::clamp(stepIndex, 0, 2)];
}

void M402PluginProcessor::setLfGainDb(float gainDb) noexcept {
    lfGain_ = std::clamp(gainDb, -12.0f, 12.0f);
}

void M402PluginProcessor::setMidFrequencyStep(int stepIndex) noexcept {
    constexpr float freqs[] = { 700.0f, 1000.0f, 1500.0f, 3000.0f, 5000.0f };
    midFreq_ = freqs[std::clamp(stepIndex, 0, 4)];
}

void M402PluginProcessor::setMidGainDb(float gainDb) noexcept {
    midGain_ = std::clamp(gainDb, -12.0f, 12.0f);
}

void M402PluginProcessor::setHfFrequencyStep(int stepIndex) noexcept {
    constexpr float freqs[] = { 7000.0f, 10000.0f, 15000.0f };
    hfFreq_ = freqs[std::clamp(stepIndex, 0, 2)];
}

void M402PluginProcessor::setHfGainDb(float gainDb) noexcept {
    hfGain_ = std::clamp(gainDb, -12.0f, 12.0f);
}

void M402PluginProcessor::setHumNotch(HumNotchMode mode) noexcept {
    notchMode_ = mode;
}

void M402PluginProcessor::setInductorSaturation(float percent) noexcept {
    ironSat_ = std::clamp(percent / 100.0f, 0.0f, 1.0f);
}

} // namespace wbs::m402
