/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "spasm/data.h"

#include "libromano/hashmap.h"
#include "libromano/hash.h"

#include <string.h>

SpasmData spasm_data_new(void)
{
    SpasmData data;
    data.rodata = hashmap_new(16);
    data.data = hashmap_new(16);
    data.bss = hashmap_new(16);

    return data;
}

SpasmDataId spasm_data_id_from_string(const char* name, uint32_t name_sz)
{
    return hash_murmur3(name, (size_t)name_sz, 0x12345678);
}

SpasmDataId spasm_data_add_bytes(SpasmData* data,
                                 const char* data_name,
                                 uint8_t* bytes,
                                 size_t data_sz,
                                 SpasmDataType type)
{
    uint32_t data_name_sz = (uint32_t)strlen(data_name);

    switch(type)
    {
        case SpasmDataType_Data:
            hashmap_insert(data->data, data_name, data_name_sz, (void*)bytes, (uint32_t)data_sz);
            return spasm_data_id_from_string(data_name, data_name_sz);
        case SpasmDataType_ROData:
            hashmap_insert(data->rodata, data_name, data_name_sz, (void*)bytes, (uint32_t)data_sz);
            return spasm_data_id_from_string(data_name, data_name_sz);
        default:
            return SPASM_INVALID_DATA_ID;
    }
}

void spasm_data_destroy(SpasmData* data)
{
    hashmap_free(data->rodata);
    hashmap_free(data->data);
    hashmap_free(data->bss);
}
