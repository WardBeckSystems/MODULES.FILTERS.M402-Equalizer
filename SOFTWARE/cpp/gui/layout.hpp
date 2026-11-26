// M402: its block of 2030.env/vst/core/ModuleGuiLayouts.hpp (176 x 770 = the faceplate).

        case 1: { // M402 Stepped EQ (176 x 770, Discrete L-C console EQ)
            m.title = "M402 Stepped EQ";
            m.subtitle = "Discrete L-C Stepped Console EQ (Dual-Concentric Marconi Controls)";
            m.modelCode = "M402";

            // High Band: Outer Marconi Winged Gain + Inner Marconi Fluted Freq
            m.knobs.push_back({ 5, "HF GAIN", "dB", 88.0f, 125.0f, 26.0f, -15.0, 15.0, 0.0, false, KnobStyle::MarconiWingedFluted, Palette::PureBlackBakelite });
            m.knobs.push_back({ 4, "HF STEP", "step", 88.0f, 125.0f, 18.0f, 0.0, 2.0, 1.0, true, KnobStyle::MarconiInnerFluted, Palette::PureBlackBakelite });

            // Presence / Mid Band: Outer Marconi Winged Gain + Inner Marconi Fluted Freq
            m.knobs.push_back({ 3, "MID GAIN", "dB", 88.0f, 265.0f, 26.0f, -10.0, 10.0, 0.0, false, KnobStyle::MarconiWingedFluted, Palette::PureBlackBakelite });
            m.knobs.push_back({ 2, "MID STEP", "step", 88.0f, 265.0f, 18.0f, 0.0, 4.0, 2.0, true, KnobStyle::MarconiInnerFluted, Palette::PureBlackBakelite });

            // Low Band: Outer Marconi Winged Gain + Inner Marconi Fluted Freq/Cut
            m.knobs.push_back({ 1, "LF GAIN", "dB", 88.0f, 405.0f, 26.0f, -15.0, 15.0, 0.0, false, KnobStyle::MarconiWingedFluted, Palette::PureBlackBakelite });
            m.knobs.push_back({ 0, "LF STEP", "step", 88.0f, 405.0f, 18.0f, 0.0, 2.0, 1.0, true, KnobStyle::MarconiInnerFluted, Palette::PureBlackBakelite });

            // Saturation & Vintage Controls
            m.knobs.push_back({ 7, "IRON SAT", "%", 88.0f, 525.0f, 18.0f, 0.0, 100.0, 25.0, false, KnobStyle::MarconiInnerFluted, Palette::PureBlackBakelite });
            m.buttons.push_back({ 6, "60Hz NOTCH", { 68.0f, 580.0f, 40.0f, 28.0f }, false, ButtonStyle::ToggleSwitch, Palette::Chrome });
            m.buttons.push_back({ 8, "EQ IN", { 68.0f, 640.0f, 40.0f, 40.0f }, true, ButtonStyle::MomentaryPush, Palette::IvoryCream });

            m.themeToggleRect = { 25.0f, 726.0f, 126.0f, 22.0f };
            break;
        }
