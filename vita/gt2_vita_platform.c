#include "gt2_vita_platform.h"
#include "config.h"

#include <stdio.h>

int gt2_vita_platform_init(void)
{
    printf("GT2-Vita platform initialization\n");
    printf("Data directory: %s\n", GT2_VITA_DATA_DIR);
    printf("BIN path: %s\n", GT2_VITA_BIN_PATH);

    /*
     * The actual Vita graphics, controller, audio and
     * filesystem initialization will be connected here.
     *
     * GT2 remains 4:3. Widescreen is intentionally disabled.
     */

    return 0;
}

void gt2_vita_platform_shutdown(void)
{
    /*
     * Vita platform shutdown will be implemented here.
     */
}
