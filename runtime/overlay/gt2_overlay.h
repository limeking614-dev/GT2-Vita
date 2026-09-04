#ifndef GT2_OVERLAY_H
#define GT2_OVERLAY_H
#include <stdint.h>

/* Vita bootstrap: overlays are linked statically. The table preserves the
 * logical overlay IDs used by GT2 without reproducing PS1 loader mechanics. */
typedef void (*GT2OverlayEntry)(void);
GT2OverlayEntry gt2_overlay_entry(uint32_t overlay_id);
#endif
