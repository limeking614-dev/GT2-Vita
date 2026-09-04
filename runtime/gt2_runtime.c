#include "gt2_api.h"
#include "gt2_bin.h"
#include "ps1_compat/ps1_compat.h"

static GT2Bin g_gt2_bin;

int gt2_runtime_init(void)
{
    g_gt2_bin.data = NULL;
    g_gt2_bin.size = 0;

    /*
     * Load the user's GT2 BIN image.
     */
    if (gt2_bin_load(&g_gt2_bin) != 0)
        return -1;

    if (gt2_ps1_cd_init() != 0)
        goto fail_cd;

    if (gt2_ps1_pad_init() != 0)
        goto fail_pad;

    if (gt2_ps1_card_init() != 0)
        goto fail_card;

    if (gt2_ps1_gpu_init() != 0)
        goto fail_gpu;

    if (gt2_ps1_audio_init() != 0)
        goto fail_audio;

    if (gt2_ps1_timer_init() != 0)
        goto fail_timer;

    return 0;

fail_timer:
    gt2_ps1_audio_shutdown();

fail_audio:
    gt2_ps1_gpu_shutdown();

fail_gpu:
    gt2_ps1_card_shutdown();

fail_card:
    gt2_ps1_pad_shutdown();

fail_pad:
    gt2_ps1_cd_shutdown();

fail_cd:
    gt2_bin_unload(&g_gt2_bin);
    return -1;
}

void gt2_runtime_frame(void)
{
    /*
     * TODO:
     *
     * Connect the actual GT2-DECOMP game loop here.
     *
     * The BIN is currently loaded and available through
     * g_gt2_bin.data / g_gt2_bin.size.
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

    gt2_bin_unload(&g_gt2_bin);
}
