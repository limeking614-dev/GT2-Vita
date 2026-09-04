#include <stdio.h>

#include "gt2_vita_platform.h"
#include "../runtime/gt2_api.h"

int main(void)
{
    printf("GT2-Vita starting...\n");

    if (gt2_vita_platform_init() != 0)
    {
        printf("GT2-Vita platform initialization failed.\n");
        return 1;
    }

    printf("Initializing GT2 runtime...\n");

    if (gt2_runtime_init() != 0)
    {
        printf("GT2 runtime initialization failed.\n");
        gt2_vita_platform_shutdown();
        return 1;
    }

    printf("GT2 runtime initialized.\n");

    /*
     * Temporary startup loop.
     *
     * The real Vita frame loop will replace this once
     * input, rendering, timing, and game logic are connected.
     */
    for (int frame = 0; frame < 1; ++frame)
    {
        gt2_runtime_frame();
    }

    gt2_runtime_shutdown();
    gt2_vita_platform_shutdown();

    return 0;
}
