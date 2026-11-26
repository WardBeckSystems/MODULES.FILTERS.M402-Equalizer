// Copyright (c) 2026 Ward-Beck Systems (Ward-Beck.com - Ward-Beck.ca). All rights reserved.
// M402: its part of 2030.env/vst/clap_wrapper/ClapModuleRegistry.cpp (suite index 1).

// --- descriptor ---
static const clap_plugin_descriptor_t s_desc_m402 = {
    CLAP_VERSION,
    "ca.wbsps.m402_stepped_eq",
    "Ward-Beck M402 Stepped Equalizer",
    "Ward-Beck Systems Preservation Society",
    "https://wbsps.ca",
    "",
    "https://wbsps.ca/contact",
    "1.0.0",
    "Stepped inductor-based console equalizer with Daven fluted knobs and hum notch",
    kEqFeatures
};

// --- parameters ---
std::vector<ParameterInfo> buildM402Params() {
    std::vector<ParameterInfo> p;
    p.push_back({
        0, "LF Frequency Step", "Low Band", 0.0, 2.0, 1.0,
        CLAP_PARAM_IS_AUTOMATABLE | CLAP_PARAM_IS_STEPPED,
        [](engine::SharedPluginFrame* f, double val) { static_cast<m402::M402PluginProcessor*>(f)->setLfFrequencyStep(static_cast<int>(val)); },
        nullptr,
        [](double v) {
            int idx = std::clamp(static_cast<int>(v), 0, 2);
            const char* names[] = { "50 Hz", "100 Hz", "200 Hz" };
            return std::string(names[idx]);
        },
        nullptr
    });
    p.push_back({
        1, "LF Gain", "Low Band", -12.0, 12.0, 0.0,
        CLAP_PARAM_IS_AUTOMATABLE,
        [](engine::SharedPluginFrame* f, double val) { static_cast<m402::M402PluginProcessor*>(f)->setLfGainDb(static_cast<float>(val)); },
        nullptr,
        [](double v) { char buf[32]; std::snprintf(buf, sizeof(buf), "%+.1f dB", v); return std::string(buf); },
        nullptr
    });
    p.push_back({
        2, "Mid Frequency Step", "Mid Band", 0.0, 4.0, 2.0,
        CLAP_PARAM_IS_AUTOMATABLE | CLAP_PARAM_IS_STEPPED,
        [](engine::SharedPluginFrame* f, double val) { static_cast<m402::M402PluginProcessor*>(f)->setMidFrequencyStep(static_cast<int>(val)); },
        nullptr,
        [](double v) {
            int idx = std::clamp(static_cast<int>(v), 0, 4);
            const char* names[] = { "700 Hz", "1000 Hz", "1500 Hz", "3000 Hz", "5000 Hz" };
            return std::string(names[idx]);
        },
        nullptr
    });
    p.push_back({
        3, "Mid Gain", "Mid Band", -12.0, 12.0, 0.0,
        CLAP_PARAM_IS_AUTOMATABLE,
        [](engine::SharedPluginFrame* f, double val) { static_cast<m402::M402PluginProcessor*>(f)->setMidGainDb(static_cast<float>(val)); },
        nullptr,
        [](double v) { char buf[32]; std::snprintf(buf, sizeof(buf), "%+.1f dB", v); return std::string(buf); },
        nullptr
    });
    p.push_back({
        4, "HF Frequency Step", "High Band", 0.0, 2.0, 1.0,
        CLAP_PARAM_IS_AUTOMATABLE | CLAP_PARAM_IS_STEPPED,
        [](engine::SharedPluginFrame* f, double val) { static_cast<m402::M402PluginProcessor*>(f)->setHfFrequencyStep(static_cast<int>(val)); },
        nullptr,
        [](double v) {
            int idx = std::clamp(static_cast<int>(v), 0, 2);
            const char* names[] = { "7 kHz", "10 kHz", "15 kHz" };
            return std::string(names[idx]);
        },
        nullptr
    });
    p.push_back({
        5, "HF Gain", "High Band", -12.0, 12.0, 0.0,
        CLAP_PARAM_IS_AUTOMATABLE,
        [](engine::SharedPluginFrame* f, double val) { static_cast<m402::M402PluginProcessor*>(f)->setHfGainDb(static_cast<float>(val)); },
        nullptr,
        [](double v) { char buf[32]; std::snprintf(buf, sizeof(buf), "%+.1f dB", v); return std::string(buf); },
        nullptr
    });
    p.push_back({
        6, "Hum Notch Filter", "Notch", 0.0, 2.0, 0.0,
        CLAP_PARAM_IS_AUTOMATABLE | CLAP_PARAM_IS_STEPPED,
        [](engine::SharedPluginFrame* f, double val) {
            int idx = std::clamp(static_cast<int>(val), 0, 2);
            static_cast<m402::M402PluginProcessor*>(f)->setHumNotch(static_cast<m402::HumNotchMode>(idx));
        },
        nullptr,
        [](double v) {
            int idx = std::clamp(static_cast<int>(v), 0, 2);
            const char* names[] = { "Off", "60 Hz Notch", "120 Hz Notch" };
            return std::string(names[idx]);
        },
        nullptr
    });
    p.push_back({
        7, "Inductor Saturation", "Core", 0.0, 100.0, 25.0,
        CLAP_PARAM_IS_AUTOMATABLE,
        [](engine::SharedPluginFrame* f, double val) { static_cast<m402::M402PluginProcessor*>(f)->setInductorSaturation(static_cast<float>(val)); },
        nullptr,
        [](double v) { char buf[32]; std::snprintf(buf, sizeof(buf), "%.1f %%", v); return std::string(buf); },
        nullptr
    });
    return p;
}

// --- instance ---
        case 1:
            inst = new ClapPluginInstance(
                &s_desc_m402, host,
                []() { return std::make_unique<m402::M402PluginProcessor>(); },
                buildM402Params(),
                1
            );
            break;

