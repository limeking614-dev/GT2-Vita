#include "ps1_compat.h"

/*
 * GT2 timing compatibility layer.
 *
 * The original game relies on PlayStation timing and
 * synchronization behavior. The Vita implementation will
 * provide the equivalent timing primitives.
 */

int gt2_ps1_timer_init(void)
{
    /*
     * TODO:
     * Initialize Vita timing.
     */
    return 0;
}

void gt2_ps1_timer_shutdown(void)
{
    /*
     * TODO:
     * Shut down Vita timing.
     */
}
