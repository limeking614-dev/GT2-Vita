#ifndef GT2_PS1_COMPAT_H
#define GT2_PS1_COMPAT_H

/*
 * PlayStation 1 compatibility interface for GT2-Vita.
 *
 * This layer provides Vita-safe replacements for systems
 * that the original Gran Turismo 2 code expected from the
 * PlayStation 1 hardware/runtime.
 *
 * Implementations will be added incrementally.
 */

/* CD / game data */
int gt2_ps1_cd_init(void);
void gt2_ps1_cd_shutdown(void);

/* Controller */
int gt2_ps1_pad_init(void);
void gt2_ps1_pad_shutdown(void);

/* Memory card / save system */
int gt2_ps1_card_init(void);
void gt2_ps1_card_shutdown(void);

/* Graphics */
int gt2_ps1_gpu_init(void);
void gt2_ps1_gpu_shutdown(void);

/* Audio */
int gt2_ps1_audio_init(void);
void gt2_ps1_audio_shutdown(void);

/* Timing / vertical synchronization */
int gt2_ps1_timer_init(void);
void gt2_ps1_timer_shutdown(void);

#endif /* GT2_PS1_COMPAT_H */
