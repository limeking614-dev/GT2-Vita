#include "ps1_compat.h"

/*
 * GT2 memory-card compatibility layer.
 *
 * The original GT2 uses the PlayStation memory-card system.
 * On Vita, saves will eventually be stored through the Vita
 * filesystem instead.
 *
 * This first implementation only establishes the interface.
 */

int gt2_ps1_card_init(void)
{
    /*
     * TODO:
     * Initialize the Vita save backend.
     */
    return 0;
}

void gt2_ps1_card_shutdown(void)
{
    /*
     * TODO:
     * Shut down the Vita save backend.
     */
}
