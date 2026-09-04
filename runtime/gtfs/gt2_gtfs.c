#include "gt2_gtfs.h"
int gt2_gtfs_init(GT2Volume *vol, const GT2SectorSource *source,
                  uint32_t start_lba, uint32_t size_sectors) {
    if (!vol || !source || !source->read_sectors || !source->sector_size) return -1;
    vol->source = *source;
    vol->volume_start_lba = start_lba;
    vol->volume_size_sectors = size_sectors;
    return 0;
}
int gt2_gtfs_read(GT2Volume *vol, uint32_t lba, uint32_t count, void *dst) {
    if (!vol || !dst || lba > vol->volume_size_sectors ||
        count > vol->volume_size_sectors - lba) return -1;
    return vol->source.read_sectors(vol->source.userdata,
                                    vol->volume_start_lba + lba, count, dst);
}
