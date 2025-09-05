/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#pragma once

#if !defined(__SPASM_BYTE)
#define __SPASM_BYTE

#include "spasm/common.h"

#include "libromano/vector.h"

typedef uint8_t SpasmByte;

typedef struct
{
    Vector data;
} SpasmByteCode;

SPASM_API SpasmByteCode spasm_bytecode_new(void);

SPASM_API void spasm_bytecode_push_back(SpasmByteCode* bytecode, SpasmByte byte);

SPASM_API void spasm_bytecode_debug(SpasmByteCode* bytecode);

SPASM_API void spasm_bytecode_destroy(SpasmByteCode* bytecode);

#define BYTE(x) ((SpasmByte)x)

#endif /* !defined(__SPASM_BYTE) */
