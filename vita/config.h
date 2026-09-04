#ifndef GT2_VITA_CONFIG_H
#define GT2_VITA_CONFIG_H

/*
 * GT2-Vita runtime configuration.
 *
 * The original GT2 game image is supplied separately by the user.
 * It is NOT included in the VPK or repository.
 */

#define GT2_VITA_DATA_DIR "ux0:data/gt2vita"
#define GT2_VITA_ASSET_DIR "ux0:data/gt2vita/assets"
#define GT2_VITA_BIN_PATH "ux0:data/gt2vita/assets/gt2.bin"

/*
 * Initial display target.
 *
 * We are deliberately keeping the original PS1 4:3 presentation.
 */
#define GT2_VITA_SCREEN_WIDTH  960
#define GT2_VITA_SCREEN_HEIGHT 544

#define GT2_VITA_USE_WIDESCREEN 0

#endif /* GT2_VITA_CONFIG_H */
