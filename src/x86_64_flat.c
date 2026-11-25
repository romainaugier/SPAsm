/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#if defined(SPASM_ENABLE_X86_64)

#include "spasm/flat.h"
#include "spasm/x86_64.h"
#include "spasm/error.h"

#include "libromano/hashmap.h"
#include "libromano/memory.h"

#include <string.h>

#define SPASM_FLAT_SECTION_ALIGNMENT 16
#define SPASM_FLAT_NO_OPERAND 0xFF

/* Absolute references use 32-bit immediates while the image fits below 2GB */
#define SPASM_FLAT_IMM32_MAX_BASE 0x70000000ULL

typedef enum
{
    SpasmFlatSymbolKind_Label,
    SpasmFlatSymbolKind_Data,
} SpasmFlatSymbolKind;

typedef struct
{
    uint32_t kind;
    uint32_t index; /* Instruction index of the label or data definition index */
} SpasmFlatSymbol;

typedef enum
{
    SpasmFlatRefKind_None,
    SpasmFlatRefKind_Branch,   /* rel8/rel32 displacement to the symbol */
    SpasmFlatRefKind_Absolute, /* Immediate holding the address of the symbol */
    SpasmFlatRefKind_Memory,   /* Memory displacement to the symbol, rip/eip-relative or absolute */
} SpasmFlatRefKind;

typedef struct
{
    SpasmFlatSymbol target;
    uint32_t short_size; /* Size of the instruction, with rel8 for branches */
    uint32_t long_size;  /* Size with rel32 for branches */
    uint8_t operand;     /* Index of the operand referencing a symbol */
    uint8_t kind;        /* SpasmFlatRefKind */
    uint8_t imm_size;
    bool is_short;
    bool has_rel32;
} SpasmFlatInstruction;

typedef struct
{
    SpasmInstructions* instructions;
    SpasmData* data;
    uint64_t base_address;
    HashMap* symbols;
    SpasmFlatInstruction* infos;
    size_t* offsets;
    size_t* data_offsets;
    size_t code_size;
    size_t image_size;
} SpasmFlatAssembler;

static uint32_t spasm_x86_64_flat_size(const SpasmFlatInstruction* info)
{
    return info->kind == SpasmFlatRefKind_Branch && !info->is_short ? info->long_size : info->short_size;
}

static const char* spasm_x86_64_flat_symbol_name(const SpasmOperand* operand)
{
    return operand->type == SpasmOperandType_Symbol || operand->type == SpasmOperandType_Mem ?
           operand->symbol_name :
           NULL;
}

/* Encodes the instruction with the symbol operand replaced by value (displacement or address) */
static bool spasm_x86_64_flat_encode(const SpasmInstruction* instr,
                                     const SpasmFlatInstruction* info,
                                     int64_t value,
                                     SpasmByte* out,
                                     uint32_t* out_size)
{
    SpasmOperand operands[8];
    SpasmInstruction encoded = *instr;

    memcpy(operands, instr->operands, instr->num_operands * sizeof(SpasmOperand));
    encoded.operands = operands;

    if(info->operand != SPASM_FLAT_NO_OPERAND)
    {
        SpasmOperand* operand = &operands[info->operand];

        switch(info->kind)
        {
            case SpasmFlatRefKind_Branch:
                *operand = info->is_short ? SpasmOpImmFixed8(value) : SpasmOpImmFixed32(value);
                break;
            case SpasmFlatRefKind_Absolute:
                *operand = info->imm_size == 4 ? SpasmOpImmFixed32(value) : SpasmOpImmFixed64(value);
                break;
            case SpasmFlatRefKind_Memory:
                operand->symbol_name = NULL;
                operand->mem_disp32 = true;
                operand->mem_displacement = (int32_t)value;
                break;
            default:
                break;
        }
    }

    return spasm_x86_64_encode_instruction_to(&encoded, out, out_size);
}

static bool spasm_x86_64_flat_add_symbol(SpasmFlatAssembler* assembler,
                                         const char* name,
                                         uint32_t name_sz,
                                         SpasmFlatSymbol symbol,
                                         uint32_t line)
{
    if(hashmap_get(assembler->symbols, name, name_sz, NULL) != NULL)
    {
        spasm_error("line %u: symbol defined twice: %.*s", line, (int)name_sz, name);
        return false;
    }

    hashmap_insert(assembler->symbols, name, name_sz, &symbol, (uint32_t)sizeof(SpasmFlatSymbol));

    return true;
}

static bool spasm_x86_64_flat_collect_symbols(SpasmFlatAssembler* assembler)
{
    for(size_t i = 0; i < spasm_instructions_size(assembler->instructions); i++)
    {
        const SpasmInstruction* instr = spasm_instructions_at(assembler->instructions, i);

        if(instr->kind != SpasmInstructionKind_Label)
            continue;

        const SpasmFlatSymbol symbol = { SpasmFlatSymbolKind_Label, (uint32_t)i };

        if(!spasm_x86_64_flat_add_symbol(assembler, instr->mnemonic, instr->mnemonic_len, symbol, instr->line))
            return false;
    }

    for(size_t i = 0; i < spasm_data_num_definitions(assembler->data); i++)
    {
        const SpasmDataDefinition* definition = spasm_data_get_definition(assembler->data, i);
        const SpasmFlatSymbol symbol = { SpasmFlatSymbolKind_Data, (uint32_t)i };

        if(!spasm_x86_64_flat_add_symbol(assembler, definition->name, definition->name_sz, symbol, 0))
            return false;
    }

    return true;
}

static bool spasm_x86_64_flat_analyze(SpasmFlatAssembler* assembler, size_t index)
{
    const SpasmInstruction* instr = spasm_instructions_at(assembler->instructions, index);
    SpasmFlatInstruction* info = &assembler->infos[index];
    SpasmByte bytes[SPASM_X86_64_MAX_INSTRUCTION_SIZE];

    memset(info, 0, sizeof(SpasmFlatInstruction));
    info->operand = SPASM_FLAT_NO_OPERAND;

    if(instr->kind == SpasmInstructionKind_Label)
        return true;

    if(instr->num_operands > 8)
    {
        spasm_error("line %u: too many operands", instr->line);
        return false;
    }

    for(uint8_t i = 0; i < instr->num_operands; i++)
    {
        const char* name = spasm_x86_64_flat_symbol_name(&instr->operands[i]);

        if(name == NULL)
            continue;

        if(info->operand != SPASM_FLAT_NO_OPERAND)
        {
            spasm_error("line %u: only one operand can reference a symbol", instr->line);
            return false;
        }

        const SpasmFlatSymbol* symbol = (const SpasmFlatSymbol*)hashmap_get(assembler->symbols,
                                                                            name,
                                                                            (uint32_t)strlen(name),
                                                                            NULL);

        if(symbol == NULL)
        {
            spasm_error("line %u: undefined symbol: %s", instr->line, name);
            return false;
        }

        info->operand = i;
        info->target = *symbol;
    }

    if(info->operand == SPASM_FLAT_NO_OPERAND)
    {
        if(!spasm_x86_64_flat_encode(instr, info, 0, bytes, &info->short_size))
        {
            spasm_error("line %u: cannot encode the instruction", instr->line);
            return false;
        }

        return true;
    }

    bool has_rel8 = false;
    bool has_rel32 = false;

    if(instr->operands[info->operand].type == SpasmOperandType_Mem)
        info->kind = SpasmFlatRefKind_Memory;
    else if(spasm_x86_64_is_branch_mnemonic(instr->mnemonic, instr->mnemonic_len, &has_rel8, &has_rel32))
        info->kind = SpasmFlatRefKind_Branch;
    else
        info->kind = SpasmFlatRefKind_Absolute;

    info->imm_size = assembler->base_address < SPASM_FLAT_IMM32_MAX_BASE ? 4 : 8;

    if(info->kind == SpasmFlatRefKind_Branch)
    {
        info->has_rel32 = has_rel32;
        info->is_short = false;

        if(has_rel32 && !spasm_x86_64_flat_encode(instr, info, 0, bytes, &info->long_size))
        {
            spasm_error("line %u: cannot encode the branch", instr->line);
            return false;
        }

        info->is_short = has_rel8;

        if(has_rel8 && !spasm_x86_64_flat_encode(instr, info, 0, bytes, &info->short_size))
        {
            spasm_error("line %u: cannot encode the branch", instr->line);
            return false;
        }

        return true;
    }

    if(!spasm_x86_64_flat_encode(instr, info, 0, bytes, &info->short_size))
    {
        spasm_error("line %u: cannot encode the instruction", instr->line);
        return false;
    }

    return true;
}

static size_t spasm_x86_64_flat_align(size_t offset, size_t alignment)
{
    return (offset + alignment - 1) & ~(alignment - 1);
}

/* Places the code then the rodata, data and bss blocks */
static void spasm_x86_64_flat_layout(SpasmFlatAssembler* assembler)
{
    size_t offset = 0;
    const size_t num_instructions = spasm_instructions_size(assembler->instructions);

    for(size_t i = 0; i < num_instructions; i++)
    {
        assembler->offsets[i] = offset;
        offset += spasm_x86_64_flat_size(&assembler->infos[i]);
    }

    assembler->code_size = offset;

    static const SpasmDataType section_order[] = { SpasmDataType_ROData, SpasmDataType_Data, SpasmDataType_BSS };

    for(size_t s = 0; s < sizeof(section_order) / sizeof(section_order[0]); s++)
    {
        bool section_started = false;

        for(size_t i = 0; i < spasm_data_num_definitions(assembler->data); i++)
        {
            const SpasmDataDefinition* definition = spasm_data_get_definition(assembler->data, i);

            if(definition->type != section_order[s])
                continue;

            if(!section_started)
            {
                offset = spasm_x86_64_flat_align(offset, SPASM_FLAT_SECTION_ALIGNMENT);
                section_started = true;
            }

            offset = spasm_x86_64_flat_align(offset, definition->alignment);
            assembler->data_offsets[i] = offset;
            offset += definition->size;
        }
    }

    assembler->image_size = offset;
}

static size_t spasm_x86_64_flat_symbol_offset(const SpasmFlatAssembler* assembler, const SpasmFlatSymbol* symbol)
{
    return symbol->kind == SpasmFlatSymbolKind_Label ? assembler->offsets[symbol->index] :
                                                       assembler->data_offsets[symbol->index];
}

/*
    Branches start with rel8 and move to rel32 when their target is too far. Sizes only grow, so
    the loop ends, and the last layout is the one of the final encoding
*/
static void spasm_x86_64_flat_relax(SpasmFlatAssembler* assembler)
{
    const size_t num_instructions = spasm_instructions_size(assembler->instructions);
    bool changed = true;

    while(changed)
    {
        changed = false;

        spasm_x86_64_flat_layout(assembler);

        for(size_t i = 0; i < num_instructions; i++)
        {
            SpasmFlatInstruction* info = &assembler->infos[i];

            if(info->kind != SpasmFlatRefKind_Branch || !info->is_short || !info->has_rel32)
                continue;

            const int64_t displacement = (int64_t)spasm_x86_64_flat_symbol_offset(assembler, &info->target) -
                                         (int64_t)(assembler->offsets[i] + info->short_size);

            if(displacement < INT8_MIN || displacement > INT8_MAX)
            {
                info->is_short = false;
                changed = true;
            }
        }
    }
}

static bool spasm_x86_64_flat_emit_instruction(SpasmFlatAssembler* assembler, size_t index, SpasmByteCode* image)
{
    SpasmInstruction* instr = spasm_instructions_at(assembler->instructions, index);
    const SpasmFlatInstruction* info = &assembler->infos[index];
    const uint32_t size = spasm_x86_64_flat_size(info);
    const size_t next_offset = assembler->offsets[index] + size;

    int64_t value = 0;

    if(info->operand != SPASM_FLAT_NO_OPERAND)
    {
        const size_t target = spasm_x86_64_flat_symbol_offset(assembler, &info->target);
        const SpasmOperand* operand = &instr->operands[info->operand];

        switch(info->kind)
        {
            case SpasmFlatRefKind_Branch:
                value = (int64_t)target - (int64_t)next_offset;

                if(info->is_short ? (value < INT8_MIN || value > INT8_MAX) : (value < INT32_MIN || value > INT32_MAX))
                {
                    spasm_error("line %u: branch target out of range", instr->line);
                    return false;
                }

                break;
            case SpasmFlatRefKind_Absolute:
                value = (int64_t)(assembler->base_address + target) + operand->imm_value;
                break;
            case SpasmFlatRefKind_Memory:
                if(operand->mem_reg == SpasmRegister_x86_64_RIP || operand->mem_reg == SpasmRegister_x86_64_EIP)
                    value = (int64_t)target - (int64_t)next_offset + operand->mem_displacement;
                else
                    value = (int64_t)(assembler->base_address + target) + operand->mem_displacement;

                if(value < INT32_MIN || value > INT32_MAX)
                {
                    spasm_error("line %u: the address of %s does not fit a 32-bit displacement",
                                instr->line,
                                operand->symbol_name);
                    return false;
                }

                break;
            default:
                break;
        }
    }

    SpasmByte bytes[SPASM_X86_64_MAX_INSTRUCTION_SIZE];
    uint32_t encoded_size;

    if(!spasm_x86_64_flat_encode(instr, info, value, bytes, &encoded_size))
    {
        spasm_error("line %u: cannot encode the instruction", instr->line);
        return false;
    }

    SPASM_ASSERT(encoded_size == size, "the instruction size changed after the layout");

    spasm_bytecode_push_bytes(image, bytes, encoded_size);

    return true;
}

static void spasm_x86_64_flat_pad(SpasmByteCode* image, size_t size)
{
    while(spasm_bytecode_size(image) < size)
        spasm_bytecode_push_back(image, 0);
}

static bool spasm_x86_64_flat_emit(SpasmFlatAssembler* assembler, SpasmByteCode* image, SpasmFlatLayout* layout)
{
    const size_t image_start = spasm_bytecode_size(image);
    const size_t num_instructions = spasm_instructions_size(assembler->instructions);

    for(size_t i = 0; i < num_instructions; i++)
    {
        if(spasm_instructions_at(assembler->instructions, i)->kind == SpasmInstructionKind_Label)
            continue;

        if(!spasm_x86_64_flat_emit_instruction(assembler, i, image))
            return false;
    }

    static const SpasmDataType section_order[] = { SpasmDataType_ROData, SpasmDataType_Data, SpasmDataType_BSS };

    for(size_t s = 0; s < sizeof(section_order) / sizeof(section_order[0]); s++)
    {
        for(size_t i = 0; i < spasm_data_num_definitions(assembler->data); i++)
        {
            const SpasmDataDefinition* definition = spasm_data_get_definition(assembler->data, i);

            if(definition->type != section_order[s])
                continue;

            spasm_x86_64_flat_pad(image, image_start + assembler->data_offsets[i]);

            const uint8_t* bytes = spasm_data_get_bytes(assembler->data, definition);

            if(bytes != NULL)
                spasm_bytecode_push_bytes(image, bytes, definition->size);
            else
                spasm_x86_64_flat_pad(image, image_start + assembler->data_offsets[i] + definition->size);
        }
    }

    spasm_x86_64_flat_pad(image, image_start + assembler->image_size);

    if(layout != NULL)
    {
        for(size_t i = 0; i < num_instructions; i++)
        {
            const SpasmFlatRange range = { assembler->offsets[i], spasm_x86_64_flat_size(&assembler->infos[i]) };
            vector_push_back(&layout->instructions, (void*)&range);
        }

        for(size_t i = 0; i < spasm_data_num_definitions(assembler->data); i++)
        {
            const SpasmFlatRange range = { assembler->data_offsets[i],
                                           spasm_data_get_definition(assembler->data, i)->size };
            vector_push_back(&layout->definitions, (void*)&range);
        }

        layout->code_size = assembler->code_size;
    }

    return true;
}

bool spasm_x86_64_assemble_flat(SpasmInstructions* instructions,
                                SpasmData* data,
                                uint64_t base_address,
                                SpasmByteCode* image,
                                SpasmFlatLayout* layout)
{
    const size_t num_instructions = spasm_instructions_size(instructions);
    const size_t num_definitions = spasm_data_num_definitions(data);

    SpasmFlatAssembler assembler;
    assembler.instructions = instructions;
    assembler.data = data;
    assembler.base_address = base_address;
    assembler.symbols = hashmap_new(64);
    assembler.infos = (SpasmFlatInstruction*)romano_calloc(num_instructions + 1, sizeof(SpasmFlatInstruction));
    assembler.offsets = (size_t*)romano_calloc(num_instructions + 1, sizeof(size_t));
    assembler.data_offsets = (size_t*)romano_calloc(num_definitions + 1, sizeof(size_t));
    assembler.code_size = 0;
    assembler.image_size = 0;

    bool success = spasm_x86_64_flat_collect_symbols(&assembler);

    for(size_t i = 0; success && i < num_instructions; i++)
        success = spasm_x86_64_flat_analyze(&assembler, i);

    if(success)
    {
        spasm_x86_64_flat_relax(&assembler);
        success = spasm_x86_64_flat_emit(&assembler, image, layout);
    }

    hashmap_free(assembler.symbols);
    romano_free(assembler.infos);
    romano_free(assembler.offsets);
    romano_free(assembler.data_offsets);

    return success;
}

#endif /* defined(SPASM_ENABLE_X86_64) */
