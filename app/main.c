/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

#include "spasm/parser.h"
#include "spasm/flat.h"

#include "libromano/cli.h"
#include "libromano/error.h"
#include "libromano/filesystem.h"
#include "libromano/memory.h"

#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SPASM_LISTING_BYTES_WIDTH 44 /* 15 bytes, the longest x86_64 instruction */
#define SPASM_LISTING_DATA_ROW 8

typedef enum
{
    SpasmOutputFormat_Bin,
    SpasmOutputFormat_Hex,
} SpasmOutputFormat;

static const char* spasm_cli_get_str(CLIParser* cli, const char* name)
{
    return cli_parser_has_arg(cli, name, 0) ? cli_parser_arg_get_str(cli, name, 0, NULL) : NULL;
}

static void spasm_listing_row(FILE* out, uint64_t address, const uint8_t* bytes, size_t count, const char* text, size_t text_sz)
{
    char hex[SPASM_LISTING_BYTES_WIDTH + 1];
    size_t hex_sz = 0;

    for(size_t i = 0; i < count && hex_sz + 3 <= sizeof(hex); i++)
        hex_sz += (size_t)snprintf(hex + hex_sz, sizeof(hex) - hex_sz, i == 0 ? "%02x" : " %02x", bytes[i]);

    hex[hex_sz] = '\0';

    if(text_sz == 0)
        fprintf(out, "%08" PRIx64 "  %s\n", address, hex);
    else
        fprintf(out, "%08" PRIx64 "  %-*s  %.*s\n", address, SPASM_LISTING_BYTES_WIDTH, hex, (int)text_sz, text);
}

/* Moves *line_start to the start of the line number line (lines only go forward) */
static void spasm_listing_seek_line(const FileContent* source, uint32_t line, uint32_t* current_line, size_t* line_start)
{
    while(*current_line < line && *line_start < source->content_sz)
    {
        if(source->content[*line_start] == '\n')
            (*current_line)++;

        (*line_start)++;
    }
}

static size_t spasm_listing_line_text(const FileContent* source, size_t line_start, const char** text)
{
    while(line_start < source->content_sz && (source->content[line_start] == ' ' || source->content[line_start] == '\t'))
        line_start++;

    size_t line_end = line_start;

    while(line_end < source->content_sz && source->content[line_end] != '\n' && source->content[line_end] != '\r')
        line_end++;

    *text = source->content + line_start;

    return line_end - line_start;
}

/* address, bytes and source line of every instruction, then the data blocks */
static void spasm_write_listing(FILE* out,
                                const FileContent* source,
                                SpasmInstructions* instructions,
                                SpasmData* data,
                                const SpasmFlatLayout* layout,
                                const uint8_t* image,
                                uint64_t base_address)
{
    uint32_t current_line = 1;
    size_t line_start = 0;

    for(size_t i = 0; i < spasm_instructions_size(instructions); i++)
    {
        const SpasmInstruction* instr = spasm_instructions_at(instructions, i);
        const SpasmFlatRange* range = (const SpasmFlatRange*)vector_at((Vector*)&layout->instructions, i);

        if(instr->kind == SpasmInstructionKind_Label)
        {
            fprintf(out, "%08" PRIx64 "  %-*s  %.*s:\n", base_address + range->offset, SPASM_LISTING_BYTES_WIDTH, "", (int)instr->mnemonic_len, instr->mnemonic);
            continue;
        }

        spasm_listing_seek_line(source, instr->line, &current_line, &line_start);

        const char* text;
        const size_t text_sz = spasm_listing_line_text(source, line_start, &text);

        spasm_listing_row(out, base_address + range->offset, image + range->offset, range->size, text, text_sz);
    }

    for(size_t i = 0; i < spasm_data_num_definitions(data); i++)
    {
        const SpasmDataDefinition* definition = spasm_data_get_definition(data, i);
        const SpasmFlatRange* range = (const SpasmFlatRange*)vector_at((Vector*)&layout->definitions, i);

        fprintf(out, "%08" PRIx64 "  %-*s  %.*s:\n", base_address + range->offset, SPASM_LISTING_BYTES_WIDTH, "", (int)definition->name_sz, definition->name);

        if(definition->type == SpasmDataType_BSS)
        {
            char text[64];
            const int text_sz = snprintf(text, sizeof(text), ".zero %zu", definition->size);
            spasm_listing_row(out, base_address + range->offset, NULL, 0, text, (size_t)text_sz);
            continue;
        }

        for(size_t offset = 0; offset < range->size; offset += SPASM_LISTING_DATA_ROW)
            spasm_listing_row(out,
                              base_address + range->offset + offset,
                              image + range->offset + offset,
                              SPASM_MIN(SPASM_LISTING_DATA_ROW, range->size - offset),
                              NULL,
                              0);
    }
}

/* input.s -> input.bin */
static char* spasm_default_output(const char* input)
{
    const size_t input_sz = strlen(input);
    size_t stem_sz = input_sz;

    for(size_t i = input_sz; i > 0; i--)
    {
        const char c = input[i - 1];

        if(c == '/' || c == '\\')
            break;

        if(c == '.')
        {
            stem_sz = i - 1;
            break;
        }
    }

    char* output = (char*)romano_malloc(stem_sz + 5);

    if(output == NULL)
        return NULL;

    memcpy(output, input, stem_sz);
    memcpy(output + stem_sz, ".bin", 5);

    return output;
}

static int spasm_assemble_file(const char* input,
                               const char* output,
                               SpasmOutputFormat format,
                               uint64_t base_address)
{
    FileContent source;

    if(!fs_file_content_init(&source, input, true))
    {
        fprintf(stderr, "spasm: error: cannot read %s\n", input);
        return 1;
    }

    SpasmInstructions instructions = spasm_instructions_new();
    SpasmData data;
    SpasmByteCode image = spasm_bytecode_new();
    SpasmFlatLayout layout;
    int result = 1;

    spasm_flat_layout_init(&layout);

    if(!spasm_data_init(&data))
    {
        fprintf(stderr, "spasm: error: out of memory\n");
        goto release;
    }

    if(!spasm_parse(source.content, source.content_sz, input, &data, &instructions))
        goto release_data;

    if(!spasm_assemble_flat(spasm_get_current_abi(), &instructions, &data, base_address, &image, &layout))
    {
        fprintf(stderr, "spasm: error: cannot assemble %s\n", input);
        goto release_data;
    }

    size_t image_size;
    const uint8_t* bytes = spasm_bytecode_get(&image, &image_size);

    if(format == SpasmOutputFormat_Bin)
    {
        if(!fs_write_file(output, bytes, image_size, false))
        {
            fprintf(stderr, "spasm: error: cannot write %s\n", output);
            goto release_data;
        }
    }
    else
    {
        FILE* out = output != NULL ? fopen(output, "w") : stdout;

        if(out == NULL)
        {
            fprintf(stderr, "spasm: error: cannot write %s\n", output);
            goto release_data;
        }

        spasm_write_listing(out, &source, &instructions, &data, &layout, bytes, base_address);

        if(out != stdout)
            fclose(out);
    }

    result = 0;

release_data:
    spasm_data_release(&data);

release:
    spasm_flat_layout_release(&layout);
    spasm_bytecode_destroy(&image);
    spasm_instructions_destroy(&instructions);
    fs_file_content_release(&source);

    return result;
}

static bool spasm_cli_init(CLIParser* cli)
{
    if(!cli_parser_init(cli))
        return false;

    cli_parser_set_program_info(cli, "spasm", "Assembles Intel syntax x86_64 assembly into a flat binary image");

    return cli_parser_add_arg(cli, "input", 0, CLI_NO_SHORT_NAME, CLIArgMode_Positional, CLIArgType_Str, CLIArgAction_Store,
                              "Assembly file") &&
           cli_parser_add_arg(cli, "output", 0, 'o', CLIArgMode_Optional, CLIArgType_Str, CLIArgAction_Store,
                              "Output file (default: the input with a .bin extension, stdout for hex)") &&
           cli_parser_add_arg(cli, "format", 0, 'f', CLIArgMode_Optional, CLIArgType_Str, CLIArgAction_Store,
                              "bin (raw image, default) or hex (listing of the addresses, bytes and source lines)") &&
           cli_parser_add_arg(cli, "base", 0, 'b', CLIArgMode_Optional, CLIArgType_Str, CLIArgAction_Store,
                              "Address of the first byte of the image (default: 0, 0x prefix for hexadecimal)");
}

int main(int argc, char** argv)
{
    CLIParser cli;

    if(!spasm_cli_init(&cli))
    {
        fprintf(stderr, "spasm: error: cannot initialize the command line parser\n");
        return 2;
    }

    for(int i = 1; i < argc; i++)
    {
        if(strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0)
        {
            cli_parser_print_help(&cli);
            cli_parser_release(&cli);
            return 0;
        }
    }

    if(argc == 1 || !cli_parser_parse(&cli, argc, argv))
    {
        if(argc > 1)
            fprintf(stderr, "spasm: error: invalid arguments (%s)\n\n", error_str_get_last());

        cli_parser_print_help(&cli);
        cli_parser_release(&cli);
        return 2;
    }

    const char* input = spasm_cli_get_str(&cli, "input");
    const char* output = spasm_cli_get_str(&cli, "output");
    const char* format_str = spasm_cli_get_str(&cli, "format");
    const char* base_str = spasm_cli_get_str(&cli, "base");

    SpasmOutputFormat format = SpasmOutputFormat_Bin;
    uint64_t base_address = 0;
    char* default_output = NULL;
    int result = 2;

    if(format_str != NULL && strcmp(format_str, "hex") == 0)
        format = SpasmOutputFormat_Hex;
    else if(format_str != NULL && strcmp(format_str, "bin") != 0)
    {
        fprintf(stderr, "spasm: error: unknown format %s (bin or hex)\n", format_str);
        goto release;
    }

    if(base_str != NULL)
    {
        char* end;
        base_address = (uint64_t)strtoull(base_str, &end, 0);

        if(*end != '\0' || *base_str == '-')
        {
            fprintf(stderr, "spasm: error: invalid base address %s\n", base_str);
            goto release;
        }
    }

    if(output == NULL && format == SpasmOutputFormat_Bin)
    {
        default_output = spasm_default_output(input);
        output = default_output;
    }

    result = output != NULL || format == SpasmOutputFormat_Hex ? spasm_assemble_file(input, output, format, base_address) : 1;

release:
    if(default_output != NULL)
        romano_free(default_output);

    cli_parser_release(&cli);

    return result;
}
