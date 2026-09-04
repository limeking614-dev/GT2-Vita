#ifndef GT2_SAVE_H
#define GT2_SAVE_H
#include <stddef.h>
int gt2_save_read(const char *slot, void *dst, size_t capacity, size_t *out_size);
int gt2_save_write(const char *slot, const void *src, size_t size);
#endif
