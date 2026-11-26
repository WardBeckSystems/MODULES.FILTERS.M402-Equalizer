# Ward-Beck Systems M402 Stepped Inductor Equalizer VST/AU Plugin

**Hardware Unit:** Ward-Beck Systems M402 Program / Effects Equalizer (Drawing `402-01-001`, ca. 1968)  
**Format:** VST3, AU, AAX (C++20 / JUCE 7)  
**Core Shared Engine:** [`wbs_core`](file:///home/anthony/Documents/GitProjects/WBSps.ca/2030.env/vst/core/README.md)

---

## Technical Specifications
- **Mid Presence Inductor:** 5 switched center frequencies ($700\text{ Hz}, 1.0\text{ kHz}, 1.5\text{ kHz}, 3.0\text{ kHz}, 5.0\text{ kHz}$) with $\pm12\text{ dB}$ detented boost/cut.
- **Stepped Low Shelf:** $50\text{ Hz}, 100\text{ Hz}, 200\text{ Hz}$ in $2\text{ dB}$ steps.
- **Stepped High Shelf:** $7.0\text{ kHz}, 10.0\text{ kHz}, 15.0\text{ kHz}$ in $2\text{ dB}$ steps.
- **Hum Notch Filter:** High-$Q$ twin-T notch at $60\text{ Hz}$ or $120\text{ Hz}$ for power-line hum elimination.
- **Inductor Saturation:** Models dynamic permeability decay under high signal drive.
