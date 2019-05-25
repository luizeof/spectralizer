/**
 * This file is part of spectralizer
 * which is licensed under the GPL v2.0
 * See LICENSE or http://www.gnu.org/licenses
 * github.com/univrsal/spectralizer
 */

#pragma once

#include "audio_visualizer.hpp"

namespace audio
{

    class spectrum_visualizer : public audio_visualizer
    {
    public:
        explicit spectrum_visualizer(source::config* cfg);

        void update() override;

        void tick(float seconds) override;

        void render(gs_effect_t* effect) override;
    };

}
