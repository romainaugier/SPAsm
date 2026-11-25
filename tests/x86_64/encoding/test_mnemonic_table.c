/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "spasm/x86_64.h"
#include "spasm/error.h"

#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    uint8_t* covered = (uint8_t*)calloc(spasm_x86_64_forms_count, 1);
    size_t total = 0;

    for(size_t i = 0; i < spasm_x86_64_mnemonics_count(); i++)
    {
        const char* name;
        const Spasm_x86_64_MnemonicKeyword* keyword = spasm_x86_64_mnemonic_at(i, &name);
        const size_t name_sz = strlen(name);

        SPASM_ASSERT(spasm_x86_64_mnemonic_lookup(name, name_sz) == keyword, "mnemonic lookup mismatch");

        char upper[32];
        SPASM_ASSERT(name_sz < sizeof(upper), "mnemonic too long");

        for(size_t c = 0; c <= name_sz; c++)
            upper[c] = (char)toupper((unsigned char)name[c]);

        SPASM_ASSERT(spasm_x86_64_mnemonic_lookup(upper, name_sz) == keyword, "case-insensitive lookup mismatch");

        SPASM_ASSERT(keyword->count > 0, "mnemonic without forms");
        SPASM_ASSERT((size_t)keyword->first + keyword->count <= spasm_x86_64_forms_count, "range out of the table");

        for(uint32_t f = keyword->first; f < (uint32_t)(keyword->first + keyword->count); f++)
        {
            SPASM_ASSERT(covered[f] == 0, "overlapping mnemonic ranges");
            covered[f] = 1;
        }

        total += keyword->count;
    }

    SPASM_ASSERT(total == spasm_x86_64_forms_count, "mnemonic ranges do not cover the forms table");

    SPASM_ASSERT(spasm_x86_64_mnemonic_lookup("notaninstruction", 16) == NULL, "unknown mnemonic found");

    free(covered);

    return 0;
}
