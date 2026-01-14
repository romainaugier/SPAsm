/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "test_encoding_common.h"

int main(void)
{
    /* syscall => 0F 05 */
    const uint8_t expected[] = { 0x0F, 0x05 };

    assemble_and_expect_z("syscall",
                           expected,
                           sizeof(expected));
    return 0;
}
