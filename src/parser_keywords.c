/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: gperf -m 100 --output-file=parser_keywords.c parser_keywords.gperf  */
/* Computed positions: -k'1-2,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 1 "parser_keywords.gperf"

/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

/*
    gperf source of the assembly syntax keywords, regenerate parser_keywords.c with:
    python scripts/gperf.py src/parser_keywords.gperf
*/

#include "spasm/parser_keywords.h"
#include "spasm/operand.h"

#include <string.h>

#define SPASM_PARSER_KEYWORD_TOTAL_KEYWORDS 53
#define SPASM_PARSER_KEYWORD_MIN_WORD_LENGTH 1
#define SPASM_PARSER_KEYWORD_MAX_WORD_LENGTH 13
#define SPASM_PARSER_KEYWORD_MIN_HASH_VALUE 5
#define SPASM_PARSER_KEYWORD_MAX_HASH_VALUE 73
/* maximum key range = 69, duplicates = 0 */

#ifndef GPERF_DOWNCASE
#define GPERF_DOWNCASE 1
static unsigned char gperf_downcase[256] =
  {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,
     15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,
     30,  31,  32,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,
     45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,
     60,  61,  62,  63,  64,  97,  98,  99, 100, 101, 102, 103, 104, 105, 106,
    107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
    122,  91,  92,  93,  94,  95,  96,  97,  98,  99, 100, 101, 102, 103, 104,
    105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119,
    120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134,
    135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149,
    150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164,
    165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179,
    180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194,
    195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209,
    210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224,
    225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
    240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254,
    255
  };
#endif

#ifndef GPERF_CASE_STRNCMP
#define GPERF_CASE_STRNCMP 1
static int
gperf_case_strncmp (register const char *s1, register const char *s2, register size_t n)
{
  for (; n > 0;)
    {
      unsigned char c1 = gperf_downcase[(unsigned char)*s1++];
      unsigned char c2 = gperf_downcase[(unsigned char)*s2++];
      if (c1 != 0 && c1 == c2)
        {
          n--;
          continue;
        }
      return (int)c1 - (int)c2;
    }
  return 0;
}
#endif

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
spasm_parser_keyword_hash (register const char *str, register size_t len)
{
  static const unsigned char asso_values[] =
    {
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 10, 74, 74,  0,
       6, 74, 51, 74,  0, 74, 50, 74, 74, 74,
      74, 74, 74, 74, 74,  1, 33, 74, 11,  3,
      74,  6, 74, 28, 74, 74, 18, 16,  0, 18,
      28,  7,  4,  0,  0, 40, 74,  3, 22, 18,
      15, 74, 74, 74, 74, 74, 74,  1, 33, 74,
      11,  3, 74,  6, 74, 28, 74, 74, 18, 16,
       0, 18, 28,  7,  4,  0,  0, 40, 74,  3,
      22, 18, 15, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
      74, 74, 74, 74, 74, 74
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[1]];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

struct spasm_parser_keyword_strings_t
  {
    char spasm_parser_keyword_strings_str5[sizeof("1to16")];
    char spasm_parser_keyword_strings_str7[sizeof("sae")];
    char spasm_parser_keyword_strings_str10[sizeof("1to2")];
    char spasm_parser_keyword_strings_str11[sizeof("1to32")];
    char spasm_parser_keyword_strings_str13[sizeof("rn-sae")];
    char spasm_parser_keyword_strings_str14[sizeof(".set")];
    char spasm_parser_keyword_strings_str15[sizeof(".text")];
    char spasm_parser_keyword_strings_str16[sizeof(".short")];
    char spasm_parser_keyword_strings_str17[sizeof(".align")];
    char spasm_parser_keyword_strings_str18[sizeof(".section")];
    char spasm_parser_keyword_strings_str19[sizeof(".space")];
    char spasm_parser_keyword_strings_str20[sizeof(".extern")];
    char spasm_parser_keyword_strings_str21[sizeof(".rdata")];
    char spasm_parser_keyword_strings_str22[sizeof(".rodata")];
    char spasm_parser_keyword_strings_str23[sizeof(".string")];
    char spasm_parser_keyword_strings_str24[sizeof("rd-sae")];
    char spasm_parser_keyword_strings_str25[sizeof(".2byte")];
    char spasm_parser_keyword_strings_str26[sizeof("qword")];
    char spasm_parser_keyword_strings_str27[sizeof(".data")];
    char spasm_parser_keyword_strings_str28[sizeof("rz-sae")];
    char spasm_parser_keyword_strings_str29[sizeof(".word")];
    char spasm_parser_keyword_strings_str30[sizeof("dword")];
    char spasm_parser_keyword_strings_str31[sizeof("z")];
    char spasm_parser_keyword_strings_str32[sizeof(".asciz")];
    char spasm_parser_keyword_strings_str33[sizeof(".quad")];
    char spasm_parser_keyword_strings_str34[sizeof(".qword")];
    char spasm_parser_keyword_strings_str35[sizeof("ptr")];
    char spasm_parser_keyword_strings_str36[sizeof("word")];
    char spasm_parser_keyword_strings_str37[sizeof("oword")];
    char spasm_parser_keyword_strings_str38[sizeof(".dword")];
    char spasm_parser_keyword_strings_str39[sizeof(".long")];
    char spasm_parser_keyword_strings_str40[sizeof(".globl")];
    char spasm_parser_keyword_strings_str41[sizeof(".global")];
    char spasm_parser_keyword_strings_str42[sizeof(".int")];
    char spasm_parser_keyword_strings_str43[sizeof(".skip")];
    char spasm_parser_keyword_strings_str44[sizeof(".att_syntax")];
    char spasm_parser_keyword_strings_str45[sizeof(".ascii")];
    char spasm_parser_keyword_strings_str46[sizeof(".p2align")];
    char spasm_parser_keyword_strings_str47[sizeof(".bss")];
    char spasm_parser_keyword_strings_str48[sizeof(".zero")];
    char spasm_parser_keyword_strings_str49[sizeof("zmmword")];
    char spasm_parser_keyword_strings_str50[sizeof(".balign")];
    char spasm_parser_keyword_strings_str51[sizeof(".byte")];
    char spasm_parser_keyword_strings_str52[sizeof("ymmword")];
    char spasm_parser_keyword_strings_str53[sizeof("ru-sae")];
    char spasm_parser_keyword_strings_str54[sizeof("1to8")];
    char spasm_parser_keyword_strings_str55[sizeof("1to4")];
    char spasm_parser_keyword_strings_str56[sizeof("xmmword")];
    char spasm_parser_keyword_strings_str57[sizeof(".equ")];
    char spasm_parser_keyword_strings_str58[sizeof("byte")];
    char spasm_parser_keyword_strings_str69[sizeof(".8byte")];
    char spasm_parser_keyword_strings_str70[sizeof(".4byte")];
    char spasm_parser_keyword_strings_str73[sizeof(".intel_syntax")];
  };
static const struct spasm_parser_keyword_strings_t spasm_parser_keyword_strings_contents =
  {
    "1to16",
    "sae",
    "1to2",
    "1to32",
    "rn-sae",
    ".set",
    ".text",
    ".short",
    ".align",
    ".section",
    ".space",
    ".extern",
    ".rdata",
    ".rodata",
    ".string",
    "rd-sae",
    ".2byte",
    "qword",
    ".data",
    "rz-sae",
    ".word",
    "dword",
    "z",
    ".asciz",
    ".quad",
    ".qword",
    "ptr",
    "word",
    "oword",
    ".dword",
    ".long",
    ".globl",
    ".global",
    ".int",
    ".skip",
    ".att_syntax",
    ".ascii",
    ".p2align",
    ".bss",
    ".zero",
    "zmmword",
    ".balign",
    ".byte",
    "ymmword",
    "ru-sae",
    "1to8",
    "1to4",
    "xmmword",
    ".equ",
    "byte",
    ".8byte",
    ".4byte",
    ".intel_syntax"
  };
#define spasm_parser_keyword_strings ((const char *) &spasm_parser_keyword_strings_contents)

static const struct SpasmParserKeyword spasm_parser_keyword_words[] =
  {
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 82 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str5, SpasmParserKeywordKind_Broadcast, 16},
    {-1},
#line 77 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str7, SpasmParserKeywordKind_Rounding, SpasmRounding_SAE},
    {-1}, {-1},
#line 79 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str10, SpasmParserKeywordKind_Broadcast, 2},
#line 83 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str11, SpasmParserKeywordKind_Broadcast, 32},
    {-1},
#line 73 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str13, SpasmParserKeywordKind_Rounding, SpasmRounding_Nearest},
#line 61 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str14, SpasmParserKeywordKind_Directive, SpasmParserDirective_Equ},
#line 31 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str15, SpasmParserKeywordKind_Directive, SpasmParserDirective_Text},
#line 42 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str16, SpasmParserKeywordKind_Directive, SpasmParserDirective_Word},
#line 57 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str17, SpasmParserKeywordKind_Directive, SpasmParserDirective_Align},
#line 36 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str18, SpasmParserKeywordKind_Directive, SpasmParserDirective_Section},
#line 56 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str19, SpasmParserKeywordKind_Directive, SpasmParserDirective_Zero},
#line 39 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str20, SpasmParserKeywordKind_Directive, SpasmParserDirective_Extern},
#line 34 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str21, SpasmParserKeywordKind_Directive, SpasmParserDirective_RoData},
#line 33 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str22, SpasmParserKeywordKind_Directive, SpasmParserDirective_RoData},
#line 53 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str23, SpasmParserKeywordKind_Directive, SpasmParserDirective_Asciz},
#line 74 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str24, SpasmParserKeywordKind_Rounding, SpasmRounding_Down},
#line 43 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str25, SpasmParserKeywordKind_Directive, SpasmParserDirective_Word},
#line 67 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str26, SpasmParserKeywordKind_Size, 8},
#line 32 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str27, SpasmParserKeywordKind_Directive, SpasmParserDirective_Data},
#line 76 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str28, SpasmParserKeywordKind_Rounding, SpasmRounding_Zero},
#line 41 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str29, SpasmParserKeywordKind_Directive, SpasmParserDirective_Word},
#line 66 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str30, SpasmParserKeywordKind_Size, 4},
#line 78 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str31, SpasmParserKeywordKind_Zeroing, 0},
#line 52 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str32, SpasmParserKeywordKind_Directive, SpasmParserDirective_Asciz},
#line 49 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str33, SpasmParserKeywordKind_Directive, SpasmParserDirective_Qword},
#line 48 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str34, SpasmParserKeywordKind_Directive, SpasmParserDirective_Qword},
#line 72 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str35, SpasmParserKeywordKind_Ptr, 0},
#line 65 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str36, SpasmParserKeywordKind_Size, 2},
#line 69 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str37, SpasmParserKeywordKind_Size, 16},
#line 44 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str38, SpasmParserKeywordKind_Directive, SpasmParserDirective_Dword},
#line 45 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str39, SpasmParserKeywordKind_Directive, SpasmParserDirective_Dword},
#line 38 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str40, SpasmParserKeywordKind_Directive, SpasmParserDirective_Global},
#line 37 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str41, SpasmParserKeywordKind_Directive, SpasmParserDirective_Global},
#line 46 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str42, SpasmParserKeywordKind_Directive, SpasmParserDirective_Dword},
#line 55 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str43, SpasmParserKeywordKind_Directive, SpasmParserDirective_Zero},
#line 63 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str44, SpasmParserKeywordKind_Directive, SpasmParserDirective_AttSyntax},
#line 51 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str45, SpasmParserKeywordKind_Directive, SpasmParserDirective_Ascii},
#line 59 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str46, SpasmParserKeywordKind_Directive, SpasmParserDirective_P2Align},
#line 35 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str47, SpasmParserKeywordKind_Directive, SpasmParserDirective_Bss},
#line 54 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str48, SpasmParserKeywordKind_Directive, SpasmParserDirective_Zero},
#line 71 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str49, SpasmParserKeywordKind_Size, 64},
#line 58 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str50, SpasmParserKeywordKind_Directive, SpasmParserDirective_Align},
#line 40 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str51, SpasmParserKeywordKind_Directive, SpasmParserDirective_Byte},
#line 70 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str52, SpasmParserKeywordKind_Size, 32},
#line 75 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str53, SpasmParserKeywordKind_Rounding, SpasmRounding_Up},
#line 81 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str54, SpasmParserKeywordKind_Broadcast, 8},
#line 80 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str55, SpasmParserKeywordKind_Broadcast, 4},
#line 68 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str56, SpasmParserKeywordKind_Size, 16},
#line 60 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str57, SpasmParserKeywordKind_Directive, SpasmParserDirective_Equ},
#line 64 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str58, SpasmParserKeywordKind_Size, 1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 50 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str69, SpasmParserKeywordKind_Directive, SpasmParserDirective_Qword},
#line 47 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str70, SpasmParserKeywordKind_Directive, SpasmParserDirective_Dword},
    {-1}, {-1},
#line 62 "parser_keywords.gperf"
    {(int)(size_t)&((struct spasm_parser_keyword_strings_t *)0)->spasm_parser_keyword_strings_str73, SpasmParserKeywordKind_Directive, SpasmParserDirective_IntelSyntax}
  };

const struct SpasmParserKeyword *
spasm_parser_keyword_lookup (register const char *str, register size_t len)
{
  if (len <= SPASM_PARSER_KEYWORD_MAX_WORD_LENGTH && len >= SPASM_PARSER_KEYWORD_MIN_WORD_LENGTH)
    {
      register unsigned int key = spasm_parser_keyword_hash (str, len);

      if (key <= SPASM_PARSER_KEYWORD_MAX_HASH_VALUE)
        {
          register int o = spasm_parser_keyword_words[key].name;
          if (o >= 0)
            {
              register const char *s = o + spasm_parser_keyword_strings;

              if ((((unsigned char)*str ^ (unsigned char)*s) & ~32) == 0 && !gperf_case_strncmp (str, s, len) && s[len] == '\0')
                return &spasm_parser_keyword_words[key];
            }
        }
    }
  return 0;
}
#line 84 "parser_keywords.gperf"

