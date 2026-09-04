#ifndef GT2_GTFS_H
#define GT2_GTFS_H
#include <stdint.h>
#include <stddef.h>

typedef struct {
    void *userdata;
    int (*read_sectors)(void *userdata, uint32_t lba, uint32_t count, void *dst);
    uint32_t sector_size;
} GT2SectorSource;

typedef struct {
    GT2SectorSource source;
    uint32_t volume_start_lba;
    uint32_t volume_size_sectors;
} GT2Volume;

int gt2_gtfs_init(GT2Volume *vol, const GT2SectorSource *source,
                  uint32_t start_lba, uint32_t size_sectors);
int gt2_gtfs_read(GT2Volume *vol, uint32_t lba, uint32_t count, void *dst);
#endif
