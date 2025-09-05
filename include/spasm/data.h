/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#pragma once

#if !defined(__SPASM_DATA)
#define __SPASM_DATA

#include "spasm/common.h"

#include "libromano/hashmap.h"

typedef enum
{
    SpasmDataType_ROData,
    SpasmDataType_Data,
    SpasmDataType_BSS,
} SpasmDataType;

/*
    rodata: Initialized, read-only data (constants, string literals) 
            Placed in read-only memory pages

    data: Initialized, writable global or static variables
          Placed in the binrary file and writable at runtime

    bss: Uninitialized (or zero-initialized) global and static variables
         Does not occupy space in the binary, just a placeholder
         Loader zeroes the memory at runtime
*/

typedef struct 
{
    HashMap* rodata;
    HashMap* data;
    HashMap* bss;
} SpasmData;

SPASM_API SpasmData spasm_data_new(void);

SPASM_API void spasm_data_add_bytes(SpasmData* data,
                                    const char* data_name,
                                    uint8_t* bytes,
                                    size_t data_sz,
                                    SpasmDataType type);

/* 
    Returns the address as a 64 bits integer to the data.
    Should be used in JIT to pass data to the jitted program
*/
SPASM_API uint64_t spasm_data_get_address(const char* data_name);

SPASM_API void spasm_data_destroy(SpasmData* data);

#endif /* !defined(__SPASM_DATA) */