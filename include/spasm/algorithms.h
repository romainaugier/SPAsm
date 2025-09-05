/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#pragma once

#if !defined(__SPASM_ALGORITHMS)
#define __SPASM_ALGORITHMS

#include "spasm/common.h"
#include "spasm/args_count.h"

/* Max */
#define _SPASM_MAX2(a, b) (a > b) ? a : b

#define _SPASM_MAX1(a) (a)
#define _SPASM_MAX3(a, b, c) _SPASM_MAX2(_SPASM_MAX2(a, b), c)
#define _SPASM_MAX4(a, b, c, d) _SPASM_MAX2(_SPASM_MAX3(a, b, c), d)
#define _SPASM_MAX5(a, b, c, d, e) _SPASM_MAX2(_SPASM_MAX4(a, b, c, d), e)
#define _SPASM_MAX6(a, b, c, d, e, f) _SPASM_MAX2(_SPASM_MAX5(a, b, c, d, e), f)
#define _SPASM_MAX7(a, b, c, d, e, f, g) _SPASM_MAX2(_SPASM_MAX6(a, b, c, d, e, f), g)
#define _SPASM_MAX8(a, b, c, d, e, f, g, h) _SPASM_MAX2(_SPASM_MAX7(a, b, c, d, e, f, g), h)
#define _SPASM_MAX9(a, b, c, d, e, f, g, h, i) _SPASM_MAX2(_SPASM_MAX8(a, b, c, d, e, f, g, h), i)
#define _SPASM_MAX10(a, b, c, d, e, f, g, h, i, j) _SPASM_MAX2(_SPASM_MAX9(a, b, c, d, e, f, g, h, i), j)
#define _SPASM_MAX11(a, b, c, d, e, f, g, h, i, j, k) _SPASM_MAX2(_SPASM_MAX10(a, b, c, d, e, f, g, h, i, j), k)
#define _SPASM_MAX12(a, b, c, d, e, f, g, h, i, j, k, l) _SPASM_MAX2(_SPASM_MAX11(a, b, c, d, e, f, g, h, i, j, k), l)
#define _SPASM_MAX13(a, b, c, d, e, f, g, h, i, j, k, l, m) _SPASM_MAX2(_SPASM_MAX12(a, b, c, d, e, f, g, h, i, j, k, l), m)
#define _SPASM_MAX14(a, b, c, d, e, f, g, h, i, j, k, l, m, n) _SPASM_MAX2(_SPASM_MAX13(a, b, c, d, e, f, g, h, i, j, k, l, m), n)
#define _SPASM_MAX15(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o) _SPASM_MAX2(_SPASM_MAX14(a, b, c, d, e, f, g, h, i, j, k, l, m, n), o)
#define _SPASM_MAX16(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p) _SPASM_MAX2(_SPASM_MAX15(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o), p)

#define SPASM_MAX(...) SPASM_CONCAT(_SPASM_MAX, SPASM_NARG(__VA_ARGS__))(__VA_ARGS__)

/* Min */
#define _SPASM_MIN2(a, b) (a < b) ? a : b

#define _SPASM_MIN1(a) (a)
#define _SPASM_MIN3(a, b, c) _SPASM_MIN2(_SPASM_MIN2(a, b), c)
#define _SPASM_MIN4(a, b, c, d) _SPASM_MIN2(_SPASM_MIN3(a, b, c), d)
#define _SPASM_MIN5(a, b, c, d, e) _SPASM_MIN2(_SPASM_MIN4(a, b, c, d), e)
#define _SPASM_MIN6(a, b, c, d, e, f) _SPASM_MIN2(_SPASM_MIN5(a, b, c, d, e), f)
#define _SPASM_MIN7(a, b, c, d, e, f, g) _SPASM_MIN2(_SPASM_MIN6(a, b, c, d, e, f), g)
#define _SPASM_MIN8(a, b, c, d, e, f, g, h) _SPASM_MIN2(_SPASM_MIN7(a, b, c, d, e, f, g), h)
#define _SPASM_MIN9(a, b, c, d, e, f, g, h, i) _SPASM_MIN2(_SPASM_MIN8(a, b, c, d, e, f, g, h), i)
#define _SPASM_MIN10(a, b, c, d, e, f, g, h, i, j) _SPASM_MIN2(_SPASM_MIN9(a, b, c, d, e, f, g, h, i), j)
#define _SPASM_MIN11(a, b, c, d, e, f, g, h, i, j, k) _SPASM_MIN2(_SPASM_MIN10(a, b, c, d, e, f, g, h, i, j), k)
#define _SPASM_MIN12(a, b, c, d, e, f, g, h, i, j, k, l) _SPASM_MIN2(_SPASM_MIN11(a, b, c, d, e, f, g, h, i, j, k), l)
#define _SPASM_MIN13(a, b, c, d, e, f, g, h, i, j, k, l, m) _SPASM_MIN2(_SPASM_MIN12(a, b, c, d, e, f, g, h, i, j, k, l), m)
#define _SPASM_MIN14(a, b, c, d, e, f, g, h, i, j, k, l, m, n) _SPASM_MIN2(_SPASM_MIN13(a, b, c, d, e, f, g, h, i, j, k, l, m), n)
#define _SPASM_MIN15(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o) _SPASM_MIN2(_SPASM_MIN14(a, b, c, d, e, f, g, h, i, j, k, l, m, n), o)
#define _SPASM_MIN16(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p) _SPASM_MIN2(_SPASM_MIN15(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o), p)

#define SPASM_MIN(...) SPASM_CONCAT(_SPASM_MIN, SPASM_NARG(__VA_ARGS__))(__VA_ARGS__)

#endif /* !defined(__SPASM_ALGORITHMS) */