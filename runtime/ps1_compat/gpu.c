#include "ps1_compat.h"

/*
 * GT2 graphics compatibility layer.
 *
 * The original GT2 uses PlayStation GPU services.
 * On Vita, rendering will eventually be handled by the
 * Vita graphics backend.
 *
 * This first implementation only establishes the interface.
 */

int gt2_ps1_gpu_init(void)
{
    /*
     * TODO:
     * Initialize the Vita graphics backend.
     */
    return 0;
}

void gt2_ps1_gpu_shutdown(void)
{
    /*
     * TODO:
     * Shut down the Vita graphics backend.
     */
}
