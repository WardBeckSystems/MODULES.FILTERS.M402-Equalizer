# Ward-Beck Systems M402 Stepped Inductor Equalizer - VST/AU Plugin Build Plan

**Module Name:** WBS M402 Graphic/Effects Equalizer  
**Hardware Reference:** Ward-Beck Systems M402 Program Equalizer (Drawing `402-01-001`, ca. 1968–1972)  
**Target Architecture:** VST3 / AU / AAX (JUCE 7 / C++20)  
**Shared Engine Dependency:** [`wbs::SharedPluginFrame`](file:///home/anthony/Documents/GitProjects/WBSps.ca/2030.env/engine/SharedPluginFrame.hpp), [`wbs::NonLinearCore`](file:///home/anthony/Documents/GitProjects/WBSps.ca/2030.env/engine/NonLinearCore.hpp), [`wbs::OversamplingEngine`](file:///home/anthony/Documents/GitProjects/WBSps.ca/2030.env/engine/OversamplingEngine.hpp)

---

## 1. Hardware Architecture & Circuit Analysis

The M402 is Ward-Beck's classic 1968 passive/active hybrid stepped equalizer, designed prior to the widespread adoption of op-amp state-variable filters. It utilizes precision toroid inductors, custom tapped windings, and high-stability polystyrene/mica capacitors switched via heavy detented Daven-style rotary attenuators.

### Core Circuit Stages
1. **Input Stage:** Jensen JE-115K-E 1:1 input matching transformer with mumetal magnetic shielding.
2. **Stepped Low-Frequency Section (Shelving/Peak):**
   - 60 Hz Hum / Sub-sonic notch filter (switchable: Flat, 60 Hz Notch, 120 Hz Notch).
   - Low Boost/Cut: $\pm12\text{ dB}$ in discrete $2\text{ dB}$ steps ($50\text{ Hz}, 100\text{ Hz}, 200\text{ Hz}$).
3. **Mid Presence Inductor Section (LC Tank):**
   - Five stepped presence center frequencies: **$700\text{ Hz}, 1.0\text{ kHz}, 1.5\text{ kHz}, 3.0\text{ kHz}, 5.0\text{ kHz}$**.
   - Boost/Cut detents: $-12, -9, -6, -4, -2, 0, +2, +4, +6, +9, +12\text{ dB}$.
   - Inductor core saturation: Non-linear magnetic permeability ($\mu_r$) shifts the effective inductance $L(i) = \frac{L_0}{1 + (i / I_{sat})^2}$ under heavy signal current, causing proportional harmonic coloration in the presence band.
4. **Stepped High-Frequency Section:**
   - High Boost/Cut: $\pm12\text{ dB}$ in $2\text{ dB}$ steps ($7\text{ kHz}, 10\text{ kHz}, 15\text{ kHz}$).
5. **Make-up / Line Amplifier:**
   - Discrete bipolar junction transistor (BJT) class-A make-up stage delivering up to $+24\text{ dBm}$ into $600\,\Omega$.

---

## 2. DSP Mathematical Specification

### 2.1 Inductor Non-Linearity & Core Saturation
In the analog hardware, the inductor voltage is given by Faraday's Law:
$$v_L(t) = \frac{d\Phi(t)}{dt} = L(i) \frac{di(t)}{dt}$$
The saturation characteristic is modeled in discrete domain via instantaneous non-linear inductance:
$$L[n] = L_0 \cdot \left(1.0 - \alpha_L \tanh\left(\frac{i_L[n]}{I_{max}}\right)^2\right)$$
where $\alpha_L \approx 0.15$ accounts for the maximum flux saturation droop, and $i_L[n]$ is the circulating tank current.

### 2.2 60 Hz Notch Filter (Twin-T / Sallen-Key Active Null)
The 60 Hz hum elimination notch filter is implemented as a 2nd-order biquad notch with high $Q \ge 8.0$:
$$H_{notch}(s) = \frac{s^2 + \omega_0^2}{s^2 + \frac{\omega_0}{Q}s + \omega_0^2}, \quad \omega_0 = 2\pi \cdot 60.0$$
Bilinear transformed with pre-warping:
$$\omega_a = \frac{2}{T} \tan\left(\frac{2\pi \cdot 60.0 \cdot T}{2}\right)$$

### 2.3 Stepped Frequency Grid Implementation
Parameters are strictly mapped to discrete discrete step indices, interpolating internal coefficients through a clickless $5\text{ ms}$ cross-fade smoother to prevent zipper noise while retaining mechanical switch realism.

---

## 3. Parameter Mapping & State Architecture

| ID | Parameter Name | Range | Steps / Detents | Default | Unit |
|---|---|---|---|---|---|
| `m402_in_gain` | Input Attenuator | $-12.0$ to $+12.0$ | Continuous | $0.0$ | dB |
| `m402_lf_freq` | LF Frequency | 50, 100, 200 | 3 positions | 100 | Hz |
| `m402_lf_gain` | LF Boost/Cut | $-12$ to $+12$ | 11 steps ($\pm2\text{ dB}$) | 0 | dB |
| `m402_notch` | Hum Notch Mode | Off, 60 Hz, 120 Hz | 3 positions | Off | Enum |
| `m402_mid_freq` | Mid Presence Freq | 700, 1000, 1500, 3000, 5000 | 5 positions | 1500 | Hz |
| `m402_mid_gain` | Mid Presence Gain | $-12$ to $+12$ | 11 steps | 0 | dB |
| `m402_hf_freq` | HF Frequency | 7000, 10000, 15000 | 3 positions | 10000 | Hz |
| `m402_hf_gain` | HF Boost/Cut | $-12$ to $+12$ | 11 steps ($\pm2\text{ dB}$) | 0 | dB |
| `m402_iron_sat` | Inductor Core Sat | 0.0 to 100.0 | Continuous | 25.0 | % |
| `m402_out_gain` | Make-up Gain | $-12.0$ to $+12.0$ | Continuous | $0.0$ | dB |
| `m402_bypass` | Hardware Bypass | True / False | 2 positions | False | Bool |

---

## 4. C++ Plugin Scaffolding

```cpp
// M402EqualizerProcessor.hpp
#pragma once
#include "SharedPluginFrame.hpp"
#include "NonLinearCore.hpp"

namespace wbs {

class M402EqualizerProcessor : public SharedPluginFrame {
public:
    M402EqualizerProcessor();
    ~M402EqualizerProcessor() override = default;

    const char* getPluginIdentifier() const noexcept override { return "WBS_M402_Stepped_EQ"; }
    uint32_t getPluginVersion() const noexcept override { return 0x010000; }

    void prepareHardwareState(double sampleRate, uint32_t maxBlockSize) override;
    void resetHardwareState() override;
    void processAudioCore(AudioBlock<float>& block) override;

private:
    struct InductorTank {
        float x1 = 0.0f, x2 = 0.0f;
        float y1 = 0.0f, y2 = 0.0f;
        float b0 = 1.0f, b1 = 0.0f, b2 = 0.0f;
        float a1 = 0.0f, a2 = 0.0f;
        float current = 0.0f;
    };

    InductorTank lfSection_[2];
    InductorTank midTank_[2];
    InductorTank hfSection_[2];
    InductorTank notchFilter_[2];

    NonLinearCore outputStageSat_;

    void calculateBiquad(float gainDb, float freqHz, float q, InductorTank& filter);
    void updateNotch(uint32_t mode, InductorTank& filter);
};

} // namespace wbs
```

---

## 5. UI/UX Specification

- **Panel Styling:** Brushed 1970 Ward-Beck studio grey enamel `#5A5D64` with silk-screened white labeling and black engraved detents.
- **Rotary Knobs:** Heavy Daven-style fluted bakelite knobs with silver center caps, snap-to-angle mechanical feedback, and subtle clicking audio cues on switch movement.
- **Meter:** Backlit VU meter monitoring output make-up drive relative to $+4\text{ dBu}$ ($0\text{ VU} = 1.228\text{ V}_{RMS}$).

---

## 6. Verification & Test Plan

1. **Notch Rejection Test:** Feed $60.0\text{ Hz}$ sine wave; verify attenuation $> 55\text{ dB}$ at notch center.
2. **Frequency Accuracy:** Measure frequency response curves at each of the 5 presence positions ($700\text{ Hz}, 1\text{ kHz}, 1.5\text{ kHz}, 3\text{ kHz}, 5\text{ kHz}$); error must be $< 0.15\text{ dB}$.
3. **Core Saturation:** Exceed $+18\text{ dBu}$ input drive; inspect 3rd harmonic ($3f_0$) generation in mid band using FFT spectrum analysis.
