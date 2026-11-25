/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "spasm/data.h"
#include "spasm/error.h"

#include <string.h>

int main(void)
{
    SpasmData data;
    SPASM_ASSERT(spasm_data_init(&data), "data init failed");

    const uint8_t message[] = { 'h', 'i', '\n' };
    const uint8_t table[] = { 1, 2, 3, 4, 5, 6, 7, 8 };

    SPASM_ASSERT(spasm_data_add(&data, "message", 7, message, sizeof(message), SpasmDataType_ROData, 1), "add failed");
    SPASM_ASSERT(spasm_data_add(&data, "table", 5, table, sizeof(table), SpasmDataType_Data, 8), "add failed");
    SPASM_ASSERT(spasm_data_add(&data, "buffer", 6, NULL, 4096, SpasmDataType_BSS, 64), "add failed");

    SPASM_ASSERT(!spasm_data_add(&data, "table", 5, table, sizeof(table), SpasmDataType_ROData, 1),
                 "duplicate name should be rejected");

    SPASM_ASSERT(spasm_data_num_definitions(&data) == 3, "wrong number of definitions");

    const char* expected_names[] = { "message", "table", "buffer" };

    for(size_t i = 0; i < 3; i++)
        SPASM_ASSERT(strcmp(spasm_data_get_definition(&data, i)->name, expected_names[i]) == 0,
                     "definitions are not in definition order");

    const SpasmDataDefinition* table_definition = spasm_data_find_definition(&data, "table", 5);
    SPASM_ASSERT(table_definition != NULL && table_definition->alignment == 8, "table lookup failed");
    SPASM_ASSERT(memcmp(spasm_data_get_bytes(&data, table_definition), table, sizeof(table)) == 0,
                 "table bytes mismatch");

    const SpasmDataDefinition* buffer_definition = spasm_data_find_definition(&data, "buffer", 6);
    SPASM_ASSERT(buffer_definition != NULL && buffer_definition->size == 4096, "buffer lookup failed");
    SPASM_ASSERT(spasm_data_get_bytes(&data, buffer_definition) == NULL, "bss has no bytes");

    SPASM_ASSERT(spasm_data_find_definition(&data, "missing", 7) == NULL, "missing found");

    spasm_data_release(&data);

    return 0;
}
