/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "spasm/flat.h"
#include "spasm/error.h"

#include <string.h>

#define REG(r) SpasmOpReg(SpasmRegister_x86_64_##r)
#define R(r) SpasmRegister_x86_64_##r

static void push(SpasmInstructions* instructions, const char* mnemonic, const SpasmOperand* ops, uint8_t num_ops)
{
    SPASM_ASSERT(spasm_instructions_push(instructions, mnemonic, strlen(mnemonic), ops, num_ops, 0) != NULL,
                 "push failed");
}

static void push_label(SpasmInstructions* instructions, const char* name)
{
    SPASM_ASSERT(spasm_instructions_push_label(instructions, name, strlen(name), 0) != NULL, "push label failed");
}

static SpasmOperand symbol_memory(SpasmRegister base, const char* symbol, uint8_t size)
{
    SpasmOperand operand = SpasmOpMemorySized(base, R(NONE), 0, 1, size);
    operand.symbol_name = symbol;

    return operand;
}

static void expect_image(SpasmInstructions* instructions,
                         SpasmData* data,
                         uint64_t base_address,
                         const uint8_t* expected,
                         size_t expected_size)
{
    SpasmByteCode image = spasm_bytecode_new();

    SPASM_ASSERT(spasm_assemble_flat(SpasmABI_LinuxX64, instructions, data, base_address, &image, NULL),
                 "flat assembly failed");

    size_t size;
    const SpasmByte* bytes = spasm_bytecode_get(&image, &size);

    if(size != expected_size || memcmp(bytes, expected, expected_size) != 0)
    {
        spasm_bytecode_debug(&image);
        SPASM_ASSERT(0, "image mismatch");
    }

    spasm_bytecode_destroy(&image);
}

static void expect_failure(SpasmInstructions* instructions, SpasmData* data)
{
    SpasmByteCode image = spasm_bytecode_new();

    SPASM_ASSERT(!spasm_assemble_flat(SpasmABI_LinuxX64, instructions, data, 0, &image, NULL),
                 "flat assembly should have failed");

    spasm_bytecode_destroy(&image);
}

/* Short/long branches and calls to labels, bytes from llvm-mc */
static void test_branches(void)
{
    SpasmInstructions instructions = spasm_instructions_new();
    SpasmData data;
    SPASM_ASSERT(spasm_data_init(&data), "data init failed");

    const SpasmOperand xor_eax[] = { REG(EAX), REG(EAX) };
    const SpasmOperand inc_eax[] = { REG(EAX) };
    const SpasmOperand cmp_eax[] = { REG(EAX), SpasmOpImm8(10) };
    const SpasmOperand to_start[] = { SpasmOpSymbol("start") };
    const SpasmOperand to_loop[] = { SpasmOpSymbol("loop") };
    const SpasmOperand to_done[] = { SpasmOpSymbol("done") };
    const SpasmOperand to_func[] = { SpasmOpSymbol("func") };
    const SpasmOperand add_rax[] = { REG(RAX), SpasmOpImm32(0x12345) };

    push_label(&instructions, "start");
    push(&instructions, "xor", xor_eax, 2);
    push_label(&instructions, "loop");
    push(&instructions, "inc", inc_eax, 1);
    push(&instructions, "cmp", cmp_eax, 2);
    push(&instructions, "jne", to_loop, 1);
    push(&instructions, "jmp", to_done, 1);

    for(int i = 0; i < 22; i++)
        push(&instructions, "add", add_rax, 2);

    push_label(&instructions, "done");
    push(&instructions, "call", to_func, 1);
    push(&instructions, "jrcxz", to_func, 1);
    push(&instructions, "ret", NULL, 0);
    push_label(&instructions, "func");
    push(&instructions, "ret", NULL, 0);

    uint8_t expected[155];
    const uint8_t head[] = { 0x31, 0xC0, 0xFF, 0xC0, 0x83, 0xF8, 0x0A, 0x75, 0xF9, 0xE9, 0x84, 0x00, 0x00, 0x00 };
    const uint8_t add[] = { 0x48, 0x05, 0x45, 0x23, 0x01, 0x00 };
    const uint8_t tail[] = { 0xE8, 0x03, 0x00, 0x00, 0x00, 0xE3, 0x01, 0xC3, 0xC3 };

    memcpy(expected, head, sizeof(head));

    for(int i = 0; i < 22; i++)
        memcpy(expected + sizeof(head) + i * sizeof(add), add, sizeof(add));

    memcpy(expected + sizeof(head) + 22 * sizeof(add), tail, sizeof(tail));

    expect_image(&instructions, &data, 0, expected, sizeof(expected));

    /* jrcxz only has a rel8 form */
    push(&instructions, "jrcxz", to_start, 1);
    expect_failure(&instructions, &data);

    spasm_data_release(&data);
    spasm_instructions_destroy(&instructions);
}

/* j1 only goes out of rel8 range once j2 has grown, bytes from llvm-mc */
static void test_relaxation_cascade(void)
{
    SpasmInstructions instructions = spasm_instructions_new();
    SpasmData data;
    SPASM_ASSERT(spasm_data_init(&data), "data init failed");

    const SpasmOperand to_l1[] = { SpasmOpSymbol("l1") };
    const SpasmOperand to_l2[] = { SpasmOpSymbol("l2") };

    push(&instructions, "jmp", to_l1, 1);
    push(&instructions, "jmp", to_l2, 1);

    for(int i = 0; i < 125; i++)
        push(&instructions, "nop", NULL, 0);

    push_label(&instructions, "l1");

    for(int i = 0; i < 130; i++)
        push(&instructions, "nop", NULL, 0);

    push_label(&instructions, "l2");

    uint8_t expected[265];
    const uint8_t jumps[] = { 0xE9, 0x82, 0x00, 0x00, 0x00, 0xE9, 0xFF, 0x00, 0x00, 0x00 };

    memcpy(expected, jumps, sizeof(jumps));
    memset(expected + sizeof(jumps), 0x90, 255);

    expect_image(&instructions, &data, 0, expected, sizeof(expected));

    spasm_data_release(&data);
    spasm_instructions_destroy(&instructions);
}

/* rip-relative and absolute references to data, sections placed after the code */
static void test_data(void)
{
    SpasmInstructions instructions = spasm_instructions_new();
    SpasmData data;
    SPASM_ASSERT(spasm_data_init(&data), "data init failed");

    const uint8_t message[] = { 'h', 'i', '\n' };
    const uint8_t counter[] = { 1, 2, 3, 4 };

    SPASM_ASSERT(spasm_data_add(&data, "buffer", 6, NULL, 64, SpasmDataType_BSS, 32), "add failed");
    SPASM_ASSERT(spasm_data_add(&data, "counter", 7, counter, sizeof(counter), SpasmDataType_Data, 4), "add failed");
    SPASM_ASSERT(spasm_data_add(&data, "msg", 3, message, sizeof(message), SpasmDataType_ROData, 1), "add failed");

    const SpasmOperand lea_msg[] = { REG(RSI), symbol_memory(R(RIP), "msg", 0) };
    const SpasmOperand mov_counter_address[] = { REG(RAX), SpasmOpSymbol("counter") };
    const SpasmOperand mov_counter[] = { REG(ECX), symbol_memory(R(NONE), "counter", 4) };

    push(&instructions, "lea", lea_msg, 2);
    push(&instructions, "mov", mov_counter_address, 2);
    push(&instructions, "mov", mov_counter, 2);
    push(&instructions, "ret", NULL, 0);

    /* code: 22 bytes, rodata msg at 32, data counter at 48, bss buffer at 64 (128 bytes in all) */
    uint8_t expected[128];
    memset(expected, 0, sizeof(expected));

    const uint8_t code[] = {
        0x48, 0x8D, 0x35, 0x19, 0x00, 0x00, 0x00,
        0x48, 0xC7, 0xC0, 0x30, 0x00, 0x40, 0x00,
        0x8B, 0x0C, 0x25, 0x30, 0x00, 0x40, 0x00,
        0xC3,
    };

    memcpy(expected, code, sizeof(code));
    memcpy(expected + 32, message, sizeof(message));
    memcpy(expected + 48, counter, sizeof(counter));

    SpasmFlatLayout layout;
    spasm_flat_layout_init(&layout);

    SpasmByteCode image = spasm_bytecode_new();
    SPASM_ASSERT(spasm_assemble_flat(SpasmABI_LinuxX64, &instructions, &data, 0x400000, &image, &layout),
                 "flat assembly failed");

    size_t size;
    const SpasmByte* bytes = spasm_bytecode_get(&image, &size);
    SPASM_ASSERT(size == sizeof(expected) && memcmp(bytes, expected, size) == 0, "image mismatch");

    SPASM_ASSERT(layout.code_size == 22, "code size mismatch");
    SPASM_ASSERT(((SpasmFlatRange*)vector_at(&layout.instructions, 1))->offset == 7, "instruction offset mismatch");
    SPASM_ASSERT(((SpasmFlatRange*)vector_at(&layout.definitions, 0))->offset == 64, "bss offset mismatch");
    SPASM_ASSERT(((SpasmFlatRange*)vector_at(&layout.definitions, 2))->offset == 32, "rodata offset mismatch");

    spasm_flat_layout_release(&layout);
    spasm_bytecode_destroy(&image);
    spasm_data_release(&data);
    spasm_instructions_destroy(&instructions);
}

/* mov rax, table + 8 */
static void test_symbol_offset(void)
{
    SpasmInstructions instructions = spasm_instructions_new();
    SpasmData data;
    SPASM_ASSERT(spasm_data_init(&data), "data init failed");

    const uint8_t table[16] = { 0 };
    SPASM_ASSERT(spasm_data_add(&data, "table", 5, table, sizeof(table), SpasmDataType_ROData, 8), "add failed");

    const SpasmOperand mov_table[] = { REG(RAX), SpasmOpSymbolOffset("table", 8) };

    push(&instructions, "mov", mov_table, 2);
    push(&instructions, "ret", NULL, 0);

    const uint8_t expected[32] = { 0x48, 0xC7, 0xC0, 0x18, 0x00, 0x40, 0x00, 0xC3 };

    expect_image(&instructions, &data, 0x400000, expected, sizeof(expected));

    spasm_data_release(&data);
    spasm_instructions_destroy(&instructions);
}

static void test_errors(void)
{
    SpasmData data;
    SPASM_ASSERT(spasm_data_init(&data), "data init failed");

    const SpasmOperand to_nowhere[] = { SpasmOpSymbol("nowhere") };

    SpasmInstructions undefined = spasm_instructions_new();
    push(&undefined, "jmp", to_nowhere, 1);
    expect_failure(&undefined, &data);
    spasm_instructions_destroy(&undefined);

    SpasmInstructions duplicated = spasm_instructions_new();
    push_label(&duplicated, "twice");
    push(&duplicated, "ret", NULL, 0);
    push_label(&duplicated, "twice");
    expect_failure(&duplicated, &data);
    spasm_instructions_destroy(&duplicated);

    spasm_data_release(&data);
}

int main(void)
{
    test_branches();
    test_relaxation_cascade();
    test_data();
    test_symbol_offset();
    test_errors();

    return 0;
}
