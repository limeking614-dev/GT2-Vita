#ifndef GT2_API_H
#define GT2_API_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Portable GT2 runtime interface.
 *
 * The original GT2 code was written for the PlayStation 1.
 * This interface gives the decompiled game code a platform-
 * independent way to start and shut down the game.
 */

/*
 * Initialize the GT2 runtime.
 *
 * Returns 0 on success.
 */
int gt2_runtime_init(void);

/*
 * Run one frame of GT2.
 *
 * This will eventually drive:
 * - game logic
 * - input
 * - rendering
 * - audio
 * - timing
 */
void gt2_runtime_frame(void);

/*
 * Shut down the GT2 runtime.
 */
void gt2_runtime_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* GT2_API_H */
