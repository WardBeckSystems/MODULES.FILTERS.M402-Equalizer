#pragma once
#include "../core/SharedPluginFrame.hpp"
#include "../core/StateVariableCore.hpp"
#include "../core/NonLinearCore.hpp"

namespace wbs::m402 {

enum class HumNotchMode : uint8_t {
    Off = 0,
    Notch60Hz,
    Notch120Hz
};

class M402PluginProcessor : public engine::SharedPluginFrame {
public:
    M402PluginProcessor();
    ~M402PluginProcessor() override = default;

    void prepareModule(double hostRate, double oversampledRate, size_t maxBlockSize, size_t numChannels) override;
    void releaseModule() override;
    void updateParametersFromHost() noexcept override;
    void processModuleSlice(engine::AudioBlock& slice) noexcept override;
    void updateMeters(const engine::AudioBlock& audioBlock) noexcept override;

    // Parameter setters
    void setLfFrequencyStep(int stepIndex) noexcept;   // 0: 50Hz, 1: 100Hz, 2: 200Hz
    void setLfGainDb(float gainDb) noexcept;
    void setMidFrequencyStep(int stepIndex) noexcept;  // 0: 700, 1: 1k, 2: 1.5k, 3: 3k, 4: 5k
    void setMidGainDb(float gainDb) noexcept;
    void setHfFrequencyStep(int stepIndex) noexcept;   // 0: 7k, 1: 10k, 2: 15k
    void setHfGainDb(float gainDb) noexcept;
    void setHumNotch(HumNotchMode mode) noexcept;
    void setInductorSaturation(float percent) noexcept;

private:
    engine::StateVariableFilterCore lfFilter_[engine::kMaxChannels];
    engine::StateVariableFilterCore midTank_[engine::kMaxChannels];
    engine::StateVariableFilterCore hfFilter_[engine::kMaxChannels];
    engine::StateVariableFilterCore notchFilter_[engine::kMaxChannels];
    engine::NonLinearTransformerCore inductorIron_[engine::kMaxChannels];

    float lfFreq_{ 100.0f };
    float lfGain_{ 0.0f };
    float midFreq_{ 1500.0f };
    float midGain_{ 0.0f };
    float hfFreq_{ 10000.0f };
    float hfGain_{ 0.0f };
    HumNotchMode notchMode_{ HumNotchMode::Off };
    float ironSat_{ 0.25f };

    float vuMeter_[engine::kMaxChannels]{ 0.0f };
};

} // namespace wbs::m402
