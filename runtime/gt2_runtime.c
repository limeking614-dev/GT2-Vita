#include "gt2_api.h"
#include "ps1_compat/ps1_compat.h"

/*
 * Portable GT2 runtime.
 *
 * This is the bridge between the decompiled GT2 game and
 * the platform compatibility layer.
 */

int gt2_runtime_init(void)
{
    if (gt2_ps1_cd_init() != 0)
        return -1;

    if (gt2_ps1_pad_init() != 0)
        return -1;

    if (gt2_ps1_card_init() != 0)
        return -1;

    if (gt2_ps1_gpu_init() != 0)
        return -1;

    if (gt2_ps1_audio_init() != 0)
        return -1;

    if (gt2_ps1_timer_init() != 0)
        return -1;

    return 0;
}

void gt2_runtime_frame(void)
{
    /*
     * TODO:
     *
     * 1. Read controller state.
     * 2. Run GT2 game logic.
     * 3. Update physics.
     * 4. Build the display list.
     * 5. Render.
     * 6. Mix audio.
     * 7. Synchronize the frame.
     */
}

void gt2_runtime_shutdown(void)
{
    gt2_ps1_timer_shutdown();
    gt2_ps1_audio_shutdown();
    gt2_ps1_gpu_shutdown();
    gt2_ps1_card_shutdown();
    gt2_ps1_pad_shutdown();
    gt2_ps1_cd_shutdown();
}
