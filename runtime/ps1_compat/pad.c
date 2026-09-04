#include "ps1_compat.h"

/*
 * GT2 controller compatibility layer.
 *
 * The original GT2 uses the PlayStation controller API.
 * On Vita, controller input will eventually be translated
 * into the button/state format expected by the game.
 *
 * This first implementation only establishes the interface.
 */

int gt2_ps1_pad_init(void)
{
    /*
     * TODO:
     * Initialize the Vita controller backend.
     */
    return 0;
}

void gt2_ps1_pad_shutdown(void)
{
    /*
     * TODO:
     * Shut down the Vita controller backend.
     */
}
