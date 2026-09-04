#ifndef GT2_PS1_COMPAT_H
#define GT2_PS1_COMPAT_H

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PS1 service boundary. These are intentionally small and portable.
 * Implementations live in the platform backend, not in GT2 game logic. */

int gt2_ps1_cd_init(void);
int gt2_ps1_cd_sync(int mode);
int gt2_ps1_cd_read(uint32_t sector, uint32_t sectors, void *dst);

int gt2_ps1_pad_init(void);
uint32_t gt2_ps1_pad_read(int port);

int gt2_ps1_card_init(void);
int gt2_ps1_card_read(const char *name, void *dst, size_t size);
int gt2_ps1_card_write(const char *name, const void *src, size_t size);

void gt2_ps1_dct_reset(void);
void gt2_ps1_spu_init(void);
void gt2_ps1_gpu_init(void);
void gt2_ps1_gte_init(void);
void gt2_ps1_vsync_wait(void);

#ifdef __cplusplus
}
#endif
#endif
