#include "gt2_overlay.h"
/* These weak symbols let the bridge compile before every overlay has been
 * migrated. Replace with the real entrypoints as they become available. */
extern void gt2_ovr0_entry(void) __attribute__((weak));
extern void gt2_ovr1_entry(void) __attribute__((weak));
extern void gt2_ovr2_entry(void) __attribute__((weak));
extern void gt2_ovr3_entry(void) __attribute__((weak));
extern void gt2_ovr4_entry(void) __attribute__((weak));
extern void gt2_ovr5_entry(void) __attribute__((weak));
extern void gt2_ovr6_entry(void) __attribute__((weak));

GT2OverlayEntry gt2_overlay_entry(uint32_t id) {
    switch (id) {
        case 0: return gt2_ovr0_entry;
        case 1: return gt2_ovr1_entry;
        case 2: return gt2_ovr2_entry;
        case 3: return gt2_ovr3_entry;
        case 4: return gt2_ovr4_entry;
        case 5: return gt2_ovr5_entry;
        case 6: return gt2_ovr6_entry;
        default: return 0;
    }
}
