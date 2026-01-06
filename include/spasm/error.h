/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#pragma once

#if !defined(__SPASM_ERROR)
#define __SPASM_ERROR

#include "spasm/common.h"

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

#if !defined(SPASM_ERROR_BUFFER_MAX_SZ)
#define SPASM_ERROR_BUFFER_MAX_SZ 4096
#endif /* !defined(SPASM_ERROR_BUFFER_MAX_SZ) */

static void spasm_error(const char* format, ...)
{
    va_list val;

    va_start(val, format);
    int format_size = vsnprintf(NULL, 0, format, val);
    va_end(val);

    if(format_size < 0 || format_size >= SPASM_ERROR_BUFFER_MAX_SZ)
    {
        fprintf(stderr, "FATAL: spasm: Cannot format error message, exiting");
        exit(1);
    }

    char buffer[SPASM_ERROR_BUFFER_MAX_SZ];

    va_start(val, format);
    vsnprintf(buffer, SPASM_ERROR_BUFFER_MAX_SZ, format, val);
    va_end(val);

    fprintf(stderr, "ERROR: spasm: %s\n", buffer);
}

#endif /* !defined(__SPASM_ERROR) */
