#ifndef GT2_VITA_PLATFORM_H
#define GT2_VITA_PLATFORM_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Initialize the Vita-side platform layer.
 *
 * This will eventually initialize:
 * - filesystem/storage
 * - controller input
 * - graphics
 * - audio
 * - timing
 */
int gt2_vita_platform_init(void);

/*
 * Shut down the Vita-side platform layer.
 */
void gt2_vita_platform_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* GT2_VITA_PLATFORM_H */
