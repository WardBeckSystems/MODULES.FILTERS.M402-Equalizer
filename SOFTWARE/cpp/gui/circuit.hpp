// M402: its block of 2030.env/vst/core/CircuitDiagramDefinitions.hpp.

        case 1: // M402 Stepped EQ
            d.modelCode = "M402";
            d.circuitTitle = "Ward-Beck M402 Stepped Inductor EQ Circuit";
            d.theoreticalExplanation =
                "Classic 1968 Rodger Beck discrete passive L-C tank equalizer. Precision tapped toroidal inductors "
                "provide stepped musical resonance, preceded by a Twin-T 60/120 Hz hum notch, terminating into a single-ended Class-A amp.";
            d.nodes = {
                { "IN",    "Line In",     "Transformer",   { 15, 20, 85, 48 }, true, Palette::CopperWire },
                { "NOTCH", "Hum Notch",   "60/120Hz Twin-T",{ 115, 20, 95, 48 }, true, Palette::CircuitBorder },
                { "LF",    "LF Inductor", "50/100/200Hz L-C",{ 225, 12, 105, 36 }, true, Palette::TextGold },
                { "MID",   "Mid Tank",    "0.7k-5k Ferrite", { 225, 52, 105, 36 }, true, Palette::TextGold },
                { "HF",    "HF Stepped",  "7k/10k/15k Shelf",{ 345, 20, 100, 48 }, true, Palette::TextGold },
                { "OUT",   "Class-A Out", "Daven Output",   { 465, 20, 100, 48 }, true, Palette::LedGreen }
            };
            d.wires = {
                { "IN", "NOTCH", "Balanced" },
                { "NOTCH", "LF", "Hum Reject" },
                { "NOTCH", "MID", "Parallel Tank" },
                { "LF", "HF", "Summed Bands" },
                { "MID", "HF", "Presence Feed" },
                { "HF", "OUT", "Class-A Amp" }
            };
            break;
