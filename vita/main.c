#include <stdio.h>

#include "gt2_vita_platform.h"

int main(void)
{
    printf("GT2-Vita starting...\n");

    if (gt2_vita_platform_init() != 0)
    {
        printf("GT2-Vita platform initialization failed.\n");
        return 1;
    }

    printf("GT2-Vita platform initialized.\n");

    gt2_vita_platform_shutdown();

    return 0;
}
