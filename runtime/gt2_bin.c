#include "gt2_bin.h"

#include <stdio.h>
#include <stdlib.h>

int gt2_bin_load(GT2Bin *bin)
{
    FILE *file;
    long size;

    if (bin == NULL)
        return -1;

    bin->data = NULL;
    bin->size = 0;

    file = fopen(GT2_BIN_PATH, "rb");
    if (file == NULL)
        return -1;

    if (fseek(file, 0, SEEK_END) != 0)
    {
        fclose(file);
        return -1;
    }

    size = ftell(file);
    if (size <= 0)
    {
        fclose(file);
        return -1;
    }

    if (fseek(file, 0, SEEK_SET) != 0)
    {
        fclose(file);
        return -1;
    }

    bin->data = malloc((size_t)size);
    if (bin->data == NULL)
    {
        fclose(file);
        return -1;
    }

    if (fread(bin->data, 1, (size_t)size, file) != (size_t)size)
    {
        free(bin->data);
        bin->data = NULL;
        fclose(file);
        return -1;
    }

    fclose(file);

    bin->size = (size_t)size;

    return 0;
}

void gt2_bin_unload(GT2Bin *bin)
{
    if (bin == NULL)
        return;

    free(bin->data);

    bin->data = NULL;
    bin->size = 0;
}
