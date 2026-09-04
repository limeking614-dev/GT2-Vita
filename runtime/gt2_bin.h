#ifndef GT2_BIN_H
#define GT2_BIN_H

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Runtime location of the user's GT2 BIN image.
 */
#define GT2_BIN_PATH "ux0:data/gt2vita/assets/gt2.bin"

/*
 * Loaded GT2 game image.
 */
typedef struct
{
    void *data;
    size_t size;
} GT2Bin;

/*
 * Load the user's GT2 BIN image.
 *
 * Returns 0 on success.
 */
int gt2_bin_load(GT2Bin *bin);

/*
 * Release the loaded GT2 BIN image.
 */
void gt2_bin_unload(GT2Bin *bin);

#ifdef __cplusplus
}
#endif

#endif /* GT2_BIN_H */
