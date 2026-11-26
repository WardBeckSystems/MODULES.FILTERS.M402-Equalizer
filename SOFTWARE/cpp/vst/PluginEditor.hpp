#pragma once
#include "PluginProcessor.hpp"

namespace wbs::m402 {

class M402PluginEditor {
public:
    explicit M402PluginEditor(M402PluginProcessor& processor)
        : processor_(processor) {}

    void paint() const noexcept;
    void resized() noexcept;

    int getWidth() const noexcept { return 420; }
    int getHeight() const noexcept { return 560; }

private:
    M402PluginProcessor& processor_;
};

} // namespace wbs::m402
