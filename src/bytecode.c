/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "spasm/bytecode.h"
#include "libromano/vector.h"

#include <stdio.h>

SpasmByteCode spasm_bytecode_new()
{
    SpasmByteCode bytecode;
    vector_init(&bytecode.data, 128, sizeof(SpasmByte));

    return bytecode;
}

void spasm_bytecode_push_back(SpasmByteCode* bytecode, SpasmByte byte)
{
    vector_push_back(&bytecode->data, &byte);
}

void spasm_bytecode_debug(SpasmByteCode* bytecode)
{
    for(size_t i = 0; i < vector_size(&bytecode->data); i++)
    {
        printf("%02x", *(SpasmByte*)vector_at(&bytecode->data, i));
    }

    printf("\n");

    fflush(stdout);
}

size_t spasm_bytecode_size(SpasmByteCode* bytecode)
{
    return vector_size(&bytecode->data);
}

SpasmByte* spasm_bytecode_get(SpasmByteCode* bytecode, size_t* size)
{
    SPASM_ASSERT(bytecode != NULL, "bytecode is NULL");

    *size = vector_size(&bytecode->data);

    return (SpasmByte*)vector_at(&bytecode->data, 0);
}

void spasm_bytecode_destroy(SpasmByteCode* bytecode)
{
    vector_release(&bytecode->data);
}
