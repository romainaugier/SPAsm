/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "spasm/data.h"

#include "libromano/hashmap.h"

#include <stdint.h>
#include <string.h>

SpasmData spasm_data_new(void)
{
    SpasmData data;
    data.rodata = hashmap_new(16);
    data.data = hashmap_new(16);
    data.bss = hashmap_new(16);

    return data;
}

void spasm_data_add_bytes(SpasmData* data,
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
            break;
        case SpasmDataType_ROData:
            hashmap_insert(data->rodata, data_name, data_name_sz, (void*)bytes, (uint32_t)data_sz);
            break;
        default:
            break;
    }
}

uintptr_t spasm_data_get_jit_address(SpasmData* data, SpasmDataId data_name)
{
    uint32_t data_name_sz = (uint32_t)strlen(data_name);

    /* TODO: do it for ROData too */
    void* value = hashmap_get(data->data, data_name, data_name_sz, NULL);

    return (uintptr_t)value;
}

void spasm_data_destroy(SpasmData* data)
{
    hashmap_free(data->rodata);
    hashmap_free(data->data);
    hashmap_free(data->bss);
}
