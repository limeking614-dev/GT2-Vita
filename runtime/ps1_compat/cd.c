#include "ps1_compat.h"

/*
 * GT2 CD/game-data compatibility layer.
 *
 * Original GT2 expects PlayStation CD-ROM services.
 * On Vita, game data will eventually be supplied through
 * the Vita filesystem instead.
 *
 * This first implementation only establishes the interface.
 * Actual GT2.VOL/GTFS loading will be added separately.
 */

int gt2_ps1_cd_init(void)
{
    /*
     * TODO:
     * Initialize the Vita game-data backend.
     */
    return 0;
}

void gt2_ps1_cd_shutdown(void)
{
    /*
     * TODO:
     * Shut down the Vita game-data backend.
     */
}
