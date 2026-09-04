#include "ps1_compat.h"

/*
 * GT2 audio compatibility layer.
 *
 * The original game uses PlayStation audio/SPU services.
 * The eventual Vita implementation will translate those
 * operations to the Vita audio system.
 */

int gt2_ps1_audio_init(void)
{
    /*
     * TODO:
     * Initialize Vita audio.
     */
    return 0;
}

void gt2_ps1_audio_shutdown(void)
{
    /*
     * TODO:
     * Shut down Vita audio.
     */
}
