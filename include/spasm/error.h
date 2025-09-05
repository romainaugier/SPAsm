/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#pragma once

#if !defined(__SPASM_ERROR)
#define __SPASM_ERROR

#include "spasm/common.h"

#define spasm_error(str, ...) fprintf(stderr, "spasm ERROR: " str "\n", __VA_ARGS__)

#endif /* !defined(__SPASM_ERROR) */