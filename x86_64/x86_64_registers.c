/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: gperf -m 100 --output-file=x86_64_registers.c x86_64_registers.gperf  */
/* Computed positions: -k'1-3,$' */

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

#line 1 "x86_64_registers.gperf"

/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

/*
    gperf source of the x86_64 register lookup, regenerate x86_64_registers.c with:
    python x86_64/generate.py --gperf-only
*/

#include "spasm/register.h"

#include <string.h>
#line 27 "x86_64_registers.gperf"
struct Spasm_x86_64_RegisterKeyword { int name; uint8_t reg; };

#define SPASM_X86_64_REGISTER_TOTAL_KEYWORDS 168
#define SPASM_X86_64_REGISTER_MIN_WORD_LENGTH 2
#define SPASM_X86_64_REGISTER_MAX_WORD_LENGTH 6
#define SPASM_X86_64_REGISTER_MIN_HASH_VALUE 51
#define SPASM_X86_64_REGISTER_MAX_HASH_VALUE 359
/* maximum key range = 309, duplicates = 0 */

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
spasm_x86_64_register_hash (register const char *str, register size_t len)
{
  static const unsigned short asso_values[] =
    {
      360, 360, 360, 360, 360, 360, 360, 360, 360, 360,
      360, 360, 360, 360, 360, 360, 360, 360, 360, 360,
      360, 360, 360, 360, 360, 360, 360, 360, 360, 360,
      360, 360, 360, 360, 360, 360, 360, 360, 360, 360,
      360, 360, 360, 360, 360, 360, 360, 360,  84,  18,
       36,  22,  20,  16, 135, 132,  89,  79, 360, 360,
      360, 360, 360, 360, 360,  19, 111,  16,  29, 156,
       32,  18, 360,  76, 360,  17,  99,  28, 360, 360,
       25, 360,  25,  17,  55, 360, 360, 121,  28,  62,
       54, 360, 360, 360, 360, 360, 360,  19, 111,  16,
       29, 156,  32,  18, 360,  76, 360,  17,  99,  28,
      360, 360,  25, 360,  25,  17,  55, 360, 360, 121,
       28,  62,  54, 360, 360, 360, 360, 360, 360, 360,
      360, 360, 360, 360, 360, 360, 360, 360, 360, 360,
      360, 360, 360, 360, 360, 360, 360, 360, 360, 360,
      360, 360, 360, 360, 360, 360, 360, 360, 360, 360,
      360, 360, 360, 360, 360, 360, 360, 360, 360, 360,
      360, 360, 360, 360, 360, 360, 360, 360, 360, 360,
      360, 360, 360, 360, 360, 360, 360, 360, 360, 360,
      360, 360, 360, 360, 360, 360, 360, 360, 360, 360,
      360, 360, 360, 360, 360, 360, 360, 360, 360, 360,
      360, 360, 360, 360, 360, 360, 360, 360, 360, 360,
      360, 360, 360, 360, 360, 360, 360, 360, 360, 360,
      360, 360, 360, 360, 360, 360, 360, 360, 360, 360,
      360, 360, 360, 360, 360, 360, 360, 360, 360, 360,
      360, 360, 360, 360, 360, 360
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

struct spasm_x86_64_register_strings_t
  {
    char spasm_x86_64_register_strings_str51[sizeof("k5")];
    char spasm_x86_64_register_strings_str52[sizeof("cs")];
    char spasm_x86_64_register_strings_str53[sizeof("ss")];
    char spasm_x86_64_register_strings_str54[sizeof("gs")];
    char spasm_x86_64_register_strings_str55[sizeof("k1")];
    char spasm_x86_64_register_strings_str59[sizeof("k4")];
    char spasm_x86_64_register_strings_str63[sizeof("k3")];
    char spasm_x86_64_register_strings_str65[sizeof("ds")];
    char spasm_x86_64_register_strings_str68[sizeof("fs")];
    char spasm_x86_64_register_strings_str69[sizeof("sp")];
    char spasm_x86_64_register_strings_str74[sizeof("cx")];
    char spasm_x86_64_register_strings_str76[sizeof("cr5")];
    char spasm_x86_64_register_strings_str77[sizeof("ax")];
    char spasm_x86_64_register_strings_str78[sizeof("r15")];
    char spasm_x86_64_register_strings_str79[sizeof("cr15")];
    char spasm_x86_64_register_strings_str80[sizeof("cr1")];
    char spasm_x86_64_register_strings_str81[sizeof("cr11")];
    char spasm_x86_64_register_strings_str82[sizeof("r11")];
    char spasm_x86_64_register_strings_str83[sizeof("cr14")];
    char spasm_x86_64_register_strings_str84[sizeof("cr4")];
    char spasm_x86_64_register_strings_str85[sizeof("cr13")];
    char spasm_x86_64_register_strings_str86[sizeof("r14")];
    char spasm_x86_64_register_strings_str87[sizeof("dx")];
    char spasm_x86_64_register_strings_str88[sizeof("cr3")];
    char spasm_x86_64_register_strings_str89[sizeof("dr5")];
    char spasm_x86_64_register_strings_str90[sizeof("r13")];
    char spasm_x86_64_register_strings_str91[sizeof("k2")];
    char spasm_x86_64_register_strings_str92[sizeof("r15d")];
    char spasm_x86_64_register_strings_str93[sizeof("dr1")];
    char spasm_x86_64_register_strings_str94[sizeof("r11d")];
    char spasm_x86_64_register_strings_str95[sizeof("rsp")];
    char spasm_x86_64_register_strings_str96[sizeof("r14d")];
    char spasm_x86_64_register_strings_str97[sizeof("dr4")];
    char spasm_x86_64_register_strings_str98[sizeof("r13d")];
    char spasm_x86_64_register_strings_str99[sizeof("cr12")];
    char spasm_x86_64_register_strings_str100[sizeof("rcx")];
    char spasm_x86_64_register_strings_str101[sizeof("dr3")];
    char spasm_x86_64_register_strings_str103[sizeof("rax")];
    char spasm_x86_64_register_strings_str104[sizeof("xmm5")];
    char spasm_x86_64_register_strings_str105[sizeof("xmm15")];
    char spasm_x86_64_register_strings_str106[sizeof("xmm1")];
    char spasm_x86_64_register_strings_str107[sizeof("xmm11")];
    char spasm_x86_64_register_strings_str108[sizeof("xmm4")];
    char spasm_x86_64_register_strings_str109[sizeof("xmm14")];
    char spasm_x86_64_register_strings_str110[sizeof("xmm3")];
    char spasm_x86_64_register_strings_str111[sizeof("xmm13")];
    char spasm_x86_64_register_strings_str112[sizeof("r12d")];
    char spasm_x86_64_register_strings_str113[sizeof("rdx")];
    char spasm_x86_64_register_strings_str115[sizeof("tr5")];
    char spasm_x86_64_register_strings_str116[sizeof("cr2")];
    char spasm_x86_64_register_strings_str118[sizeof("r12")];
    char spasm_x86_64_register_strings_str119[sizeof("tr1")];
    char spasm_x86_64_register_strings_str123[sizeof("tr4")];
    char spasm_x86_64_register_strings_str124[sizeof("xmm2")];
    char spasm_x86_64_register_strings_str125[sizeof("xmm12")];
    char spasm_x86_64_register_strings_str127[sizeof("tr3")];
    char spasm_x86_64_register_strings_str129[sizeof("dr2")];
    char spasm_x86_64_register_strings_str130[sizeof("zmm5")];
    char spasm_x86_64_register_strings_str131[sizeof("zmm15")];
    char spasm_x86_64_register_strings_str132[sizeof("zmm1")];
    char spasm_x86_64_register_strings_str133[sizeof("zmm11")];
    char spasm_x86_64_register_strings_str134[sizeof("zmm4")];
    char spasm_x86_64_register_strings_str135[sizeof("zmm14")];
    char spasm_x86_64_register_strings_str136[sizeof("zmm3")];
    char spasm_x86_64_register_strings_str137[sizeof("zmm13")];
    char spasm_x86_64_register_strings_str138[sizeof("ymm5")];
    char spasm_x86_64_register_strings_str139[sizeof("ymm15")];
    char spasm_x86_64_register_strings_str140[sizeof("ymm1")];
    char spasm_x86_64_register_strings_str141[sizeof("ymm11")];
    char spasm_x86_64_register_strings_str142[sizeof("ymm4")];
    char spasm_x86_64_register_strings_str143[sizeof("ymm14")];
    char spasm_x86_64_register_strings_str144[sizeof("ymm3")];
    char spasm_x86_64_register_strings_str145[sizeof("ymm13")];
    char spasm_x86_64_register_strings_str147[sizeof("cr10")];
    char spasm_x86_64_register_strings_str150[sizeof("zmm2")];
    char spasm_x86_64_register_strings_str151[sizeof("zmm12")];
    char spasm_x86_64_register_strings_str154[sizeof("rip")];
    char spasm_x86_64_register_strings_str155[sizeof("tr2")];
    char spasm_x86_64_register_strings_str158[sizeof("ymm2")];
    char spasm_x86_64_register_strings_str159[sizeof("ymm12")];
    char spasm_x86_64_register_strings_str160[sizeof("r10d")];
    char spasm_x86_64_register_strings_str162[sizeof("r15l")];
    char spasm_x86_64_register_strings_str163[sizeof("bp")];
    char spasm_x86_64_register_strings_str164[sizeof("r11l")];
    char spasm_x86_64_register_strings_str165[sizeof("r9d")];
    char spasm_x86_64_register_strings_str166[sizeof("r14l")];
    char spasm_x86_64_register_strings_str167[sizeof("xmm9")];
    char spasm_x86_64_register_strings_str168[sizeof("r13l")];
    char spasm_x86_64_register_strings_str169[sizeof("bx")];
    char spasm_x86_64_register_strings_str171[sizeof("si")];
    char spasm_x86_64_register_strings_str172[sizeof("xmm0")];
    char spasm_x86_64_register_strings_str173[sizeof("xmm10")];
    char spasm_x86_64_register_strings_str174[sizeof("r15b")];
    char spasm_x86_64_register_strings_str175[sizeof("r8d")];
    char spasm_x86_64_register_strings_str176[sizeof("r11b")];
    char spasm_x86_64_register_strings_str177[sizeof("xmm8")];
    char spasm_x86_64_register_strings_str178[sizeof("r14b")];
    char spasm_x86_64_register_strings_str179[sizeof("rflags")];
    char spasm_x86_64_register_strings_str180[sizeof("r13b")];
    char spasm_x86_64_register_strings_str182[sizeof("r12l")];
    char spasm_x86_64_register_strings_str183[sizeof("di")];
    char spasm_x86_64_register_strings_str184[sizeof("r15w")];
    char spasm_x86_64_register_strings_str185[sizeof("r9")];
    char spasm_x86_64_register_strings_str186[sizeof("r11w")];
    char spasm_x86_64_register_strings_str187[sizeof("k0")];
    char spasm_x86_64_register_strings_str188[sizeof("r14w")];
    char spasm_x86_64_register_strings_str189[sizeof("rbp")];
    char spasm_x86_64_register_strings_str190[sizeof("r13w")];
    char spasm_x86_64_register_strings_str192[sizeof("es")];
    char spasm_x86_64_register_strings_str193[sizeof("zmm9")];
    char spasm_x86_64_register_strings_str194[sizeof("r12b")];
    char spasm_x86_64_register_strings_str195[sizeof("rbx")];
    char spasm_x86_64_register_strings_str197[sizeof("rsi")];
    char spasm_x86_64_register_strings_str198[sizeof("zmm0")];
    char spasm_x86_64_register_strings_str199[sizeof("zmm10")];
    char spasm_x86_64_register_strings_str201[sizeof("ymm9")];
    char spasm_x86_64_register_strings_str202[sizeof("cr9")];
    char spasm_x86_64_register_strings_str203[sizeof("zmm8")];
    char spasm_x86_64_register_strings_str204[sizeof("r12w")];
    char spasm_x86_64_register_strings_str205[sizeof("r8")];
    char spasm_x86_64_register_strings_str206[sizeof("ymm0")];
    char spasm_x86_64_register_strings_str207[sizeof("ymm10")];
    char spasm_x86_64_register_strings_str209[sizeof("rdi")];
    char spasm_x86_64_register_strings_str211[sizeof("ymm8")];
    char spasm_x86_64_register_strings_str212[sizeof("cr0")];
    char spasm_x86_64_register_strings_str214[sizeof("r10")];
    char spasm_x86_64_register_strings_str216[sizeof("cl")];
    char spasm_x86_64_register_strings_str219[sizeof("al")];
    char spasm_x86_64_register_strings_str220[sizeof("xmm7")];
    char spasm_x86_64_register_strings_str222[sizeof("cr8")];
    char spasm_x86_64_register_strings_str223[sizeof("xmm6")];
    char spasm_x86_64_register_strings_str225[sizeof("dr0")];
    char spasm_x86_64_register_strings_str226[sizeof("esp")];
    char spasm_x86_64_register_strings_str229[sizeof("dl")];
    char spasm_x86_64_register_strings_str230[sizeof("r10l")];
    char spasm_x86_64_register_strings_str231[sizeof("ecx")];
    char spasm_x86_64_register_strings_str234[sizeof("eax")];
    char spasm_x86_64_register_strings_str242[sizeof("r10b")];
    char spasm_x86_64_register_strings_str243[sizeof("spl")];
    char spasm_x86_64_register_strings_str244[sizeof("edx")];
    char spasm_x86_64_register_strings_str246[sizeof("zmm7")];
    char spasm_x86_64_register_strings_str249[sizeof("zmm6")];
    char spasm_x86_64_register_strings_str251[sizeof("tr0")];
    char spasm_x86_64_register_strings_str252[sizeof("r10w")];
    char spasm_x86_64_register_strings_str254[sizeof("ymm7")];
    char spasm_x86_64_register_strings_str257[sizeof("ymm6")];
    char spasm_x86_64_register_strings_str283[sizeof("k7")];
    char spasm_x86_64_register_strings_str289[sizeof("k6")];
    char spasm_x86_64_register_strings_str294[sizeof("sil")];
    char spasm_x86_64_register_strings_str305[sizeof("r9l")];
    char spasm_x86_64_register_strings_str306[sizeof("dil")];
    char spasm_x86_64_register_strings_str308[sizeof("cr7")];
    char spasm_x86_64_register_strings_str311[sizeof("bl")];
    char spasm_x86_64_register_strings_str314[sizeof("cr6")];
    char spasm_x86_64_register_strings_str315[sizeof("r8l")];
    char spasm_x86_64_register_strings_str320[sizeof("ebp")];
    char spasm_x86_64_register_strings_str321[sizeof("dr7")];
    char spasm_x86_64_register_strings_str326[sizeof("ebx")];
    char spasm_x86_64_register_strings_str327[sizeof("dr6")];
    char spasm_x86_64_register_strings_str328[sizeof("esi")];
    char spasm_x86_64_register_strings_str329[sizeof("r9b")];
    char spasm_x86_64_register_strings_str337[sizeof("bpl")];
    char spasm_x86_64_register_strings_str339[sizeof("r8b")];
    char spasm_x86_64_register_strings_str340[sizeof("edi")];
    char spasm_x86_64_register_strings_str347[sizeof("tr7")];
    char spasm_x86_64_register_strings_str349[sizeof("r9w")];
    char spasm_x86_64_register_strings_str353[sizeof("tr6")];
    char spasm_x86_64_register_strings_str359[sizeof("r8w")];
  };
static const struct spasm_x86_64_register_strings_t spasm_x86_64_register_strings_contents =
  {
    "k5",
    "cs",
    "ss",
    "gs",
    "k1",
    "k4",
    "k3",
    "ds",
    "fs",
    "sp",
    "cx",
    "cr5",
    "ax",
    "r15",
    "cr15",
    "cr1",
    "cr11",
    "r11",
    "cr14",
    "cr4",
    "cr13",
    "r14",
    "dx",
    "cr3",
    "dr5",
    "r13",
    "k2",
    "r15d",
    "dr1",
    "r11d",
    "rsp",
    "r14d",
    "dr4",
    "r13d",
    "cr12",
    "rcx",
    "dr3",
    "rax",
    "xmm5",
    "xmm15",
    "xmm1",
    "xmm11",
    "xmm4",
    "xmm14",
    "xmm3",
    "xmm13",
    "r12d",
    "rdx",
    "tr5",
    "cr2",
    "r12",
    "tr1",
    "tr4",
    "xmm2",
    "xmm12",
    "tr3",
    "dr2",
    "zmm5",
    "zmm15",
    "zmm1",
    "zmm11",
    "zmm4",
    "zmm14",
    "zmm3",
    "zmm13",
    "ymm5",
    "ymm15",
    "ymm1",
    "ymm11",
    "ymm4",
    "ymm14",
    "ymm3",
    "ymm13",
    "cr10",
    "zmm2",
    "zmm12",
    "rip",
    "tr2",
    "ymm2",
    "ymm12",
    "r10d",
    "r15l",
    "bp",
    "r11l",
    "r9d",
    "r14l",
    "xmm9",
    "r13l",
    "bx",
    "si",
    "xmm0",
    "xmm10",
    "r15b",
    "r8d",
    "r11b",
    "xmm8",
    "r14b",
    "rflags",
    "r13b",
    "r12l",
    "di",
    "r15w",
    "r9",
    "r11w",
    "k0",
    "r14w",
    "rbp",
    "r13w",
    "es",
    "zmm9",
    "r12b",
    "rbx",
    "rsi",
    "zmm0",
    "zmm10",
    "ymm9",
    "cr9",
    "zmm8",
    "r12w",
    "r8",
    "ymm0",
    "ymm10",
    "rdi",
    "ymm8",
    "cr0",
    "r10",
    "cl",
    "al",
    "xmm7",
    "cr8",
    "xmm6",
    "dr0",
    "esp",
    "dl",
    "r10l",
    "ecx",
    "eax",
    "r10b",
    "spl",
    "edx",
    "zmm7",
    "zmm6",
    "tr0",
    "r10w",
    "ymm7",
    "ymm6",
    "k7",
    "k6",
    "sil",
    "r9l",
    "dil",
    "cr7",
    "bl",
    "cr6",
    "r8l",
    "ebp",
    "dr7",
    "ebx",
    "dr6",
    "esi",
    "r9b",
    "bpl",
    "r8b",
    "edi",
    "tr7",
    "r9w",
    "tr6",
    "r8w"
  };
#define spasm_x86_64_register_strings ((const char *) &spasm_x86_64_register_strings_contents)

static const struct Spasm_x86_64_RegisterKeyword spasm_x86_64_register_words[] =
  {
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 154 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str51, SpasmRegister_x86_64_K5},
#line 158 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str52, SpasmRegister_x86_64_CS},
#line 160 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str53, SpasmRegister_x86_64_SS},
#line 163 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str54, SpasmRegister_x86_64_GS},
#line 150 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str55, SpasmRegister_x86_64_K1},
    {-1}, {-1}, {-1},
#line 153 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str59, SpasmRegister_x86_64_K4},
    {-1}, {-1}, {-1},
#line 152 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str63, SpasmRegister_x86_64_K3},
    {-1},
#line 159 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str65, SpasmRegister_x86_64_DS},
    {-1}, {-1},
#line 162 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str68, SpasmRegister_x86_64_FS},
#line 65 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str69, SpasmRegister_x86_64_SP},
    {-1}, {-1}, {-1}, {-1},
#line 62 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str74, SpasmRegister_x86_64_CX},
    {-1},
#line 170 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str76, SpasmRegister_x86_64_CR5},
#line 61 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str77, SpasmRegister_x86_64_AX},
#line 44 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str78, SpasmRegister_x86_64_R15},
#line 180 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str79, SpasmRegister_x86_64_CR15},
#line 166 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str80, SpasmRegister_x86_64_CR1},
#line 176 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str81, SpasmRegister_x86_64_CR11},
#line 40 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str82, SpasmRegister_x86_64_R11},
#line 179 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str83, SpasmRegister_x86_64_CR14},
#line 169 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str84, SpasmRegister_x86_64_CR4},
#line 178 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str85, SpasmRegister_x86_64_CR13},
#line 43 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str86, SpasmRegister_x86_64_R14},
#line 63 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str87, SpasmRegister_x86_64_DX},
#line 168 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str88, SpasmRegister_x86_64_CR3},
#line 186 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str89, SpasmRegister_x86_64_DR5},
#line 42 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str90, SpasmRegister_x86_64_R13},
#line 151 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str91, SpasmRegister_x86_64_K2},
#line 60 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str92, SpasmRegister_x86_64_R15D},
#line 182 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str93, SpasmRegister_x86_64_DR1},
#line 56 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str94, SpasmRegister_x86_64_R11D},
#line 33 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str95, SpasmRegister_x86_64_RSP},
#line 59 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str96, SpasmRegister_x86_64_R14D},
#line 185 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str97, SpasmRegister_x86_64_DR4},
#line 58 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str98, SpasmRegister_x86_64_R13D},
#line 177 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str99, SpasmRegister_x86_64_CR12},
#line 30 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str100, SpasmRegister_x86_64_RCX},
#line 184 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str101, SpasmRegister_x86_64_DR3},
    {-1},
#line 29 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str103, SpasmRegister_x86_64_RAX},
#line 106 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str104, SpasmRegister_x86_64_XMM5},
#line 116 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str105, SpasmRegister_x86_64_XMM15},
#line 102 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str106, SpasmRegister_x86_64_XMM1},
#line 112 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str107, SpasmRegister_x86_64_XMM11},
#line 105 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str108, SpasmRegister_x86_64_XMM4},
#line 115 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str109, SpasmRegister_x86_64_XMM14},
#line 104 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str110, SpasmRegister_x86_64_XMM3},
#line 114 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str111, SpasmRegister_x86_64_XMM13},
#line 57 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str112, SpasmRegister_x86_64_R12D},
#line 31 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str113, SpasmRegister_x86_64_RDX},
    {-1},
#line 194 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str115, SpasmRegister_x86_64_T5},
#line 167 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str116, SpasmRegister_x86_64_CR2},
    {-1},
#line 41 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str118, SpasmRegister_x86_64_R12},
#line 190 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str119, SpasmRegister_x86_64_T1},
    {-1}, {-1}, {-1},
#line 193 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str123, SpasmRegister_x86_64_T4},
#line 103 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str124, SpasmRegister_x86_64_XMM2},
#line 113 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str125, SpasmRegister_x86_64_XMM12},
    {-1},
#line 192 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str127, SpasmRegister_x86_64_T3},
    {-1},
#line 183 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str129, SpasmRegister_x86_64_DR2},
#line 138 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str130, SpasmRegister_x86_64_ZMM5},
#line 148 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str131, SpasmRegister_x86_64_ZMM15},
#line 134 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str132, SpasmRegister_x86_64_ZMM1},
#line 144 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str133, SpasmRegister_x86_64_ZMM11},
#line 137 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str134, SpasmRegister_x86_64_ZMM4},
#line 147 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str135, SpasmRegister_x86_64_ZMM14},
#line 136 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str136, SpasmRegister_x86_64_ZMM3},
#line 146 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str137, SpasmRegister_x86_64_ZMM13},
#line 122 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str138, SpasmRegister_x86_64_YMM5},
#line 132 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str139, SpasmRegister_x86_64_YMM15},
#line 118 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str140, SpasmRegister_x86_64_YMM1},
#line 128 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str141, SpasmRegister_x86_64_YMM11},
#line 121 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str142, SpasmRegister_x86_64_YMM4},
#line 131 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str143, SpasmRegister_x86_64_YMM14},
#line 120 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str144, SpasmRegister_x86_64_YMM3},
#line 130 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str145, SpasmRegister_x86_64_YMM13},
    {-1},
#line 175 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str147, SpasmRegister_x86_64_CR10},
    {-1}, {-1},
#line 135 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str150, SpasmRegister_x86_64_ZMM2},
#line 145 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str151, SpasmRegister_x86_64_ZMM12},
    {-1}, {-1},
#line 157 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str154, SpasmRegister_x86_64_RIP},
#line 191 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str155, SpasmRegister_x86_64_T2},
    {-1}, {-1},
#line 119 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str158, SpasmRegister_x86_64_YMM2},
#line 129 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str159, SpasmRegister_x86_64_YMM12},
#line 55 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str160, SpasmRegister_x86_64_R10D},
    {-1},
#line 100 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str162, SpasmRegister_x86_64_R15B},
#line 66 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str163, SpasmRegister_x86_64_BP},
#line 96 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str164, SpasmRegister_x86_64_R11B},
#line 54 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str165, SpasmRegister_x86_64_R9D},
#line 99 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str166, SpasmRegister_x86_64_R14B},
#line 110 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str167, SpasmRegister_x86_64_XMM9},
#line 98 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str168, SpasmRegister_x86_64_R13B},
#line 64 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str169, SpasmRegister_x86_64_BX},
    {-1},
#line 67 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str171, SpasmRegister_x86_64_SI},
#line 101 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str172, SpasmRegister_x86_64_XMM0},
#line 111 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str173, SpasmRegister_x86_64_XMM10},
#line 92 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str174, SpasmRegister_x86_64_R15B},
#line 53 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str175, SpasmRegister_x86_64_R8D},
#line 88 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str176, SpasmRegister_x86_64_R11B},
#line 109 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str177, SpasmRegister_x86_64_XMM8},
#line 91 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str178, SpasmRegister_x86_64_R14B},
#line 164 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str179, SpasmRegister_x86_64_RFlags},
#line 90 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str180, SpasmRegister_x86_64_R13B},
    {-1},
#line 97 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str182, SpasmRegister_x86_64_R12B},
#line 68 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str183, SpasmRegister_x86_64_DI},
#line 76 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str184, SpasmRegister_x86_64_R15W},
#line 38 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str185, SpasmRegister_x86_64_R9},
#line 72 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str186, SpasmRegister_x86_64_R11W},
#line 149 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str187, SpasmRegister_x86_64_K0},
#line 75 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str188, SpasmRegister_x86_64_R14W},
#line 34 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str189, SpasmRegister_x86_64_RBP},
#line 74 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str190, SpasmRegister_x86_64_R13W},
    {-1},
#line 161 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str192, SpasmRegister_x86_64_ES},
#line 142 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str193, SpasmRegister_x86_64_ZMM9},
#line 89 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str194, SpasmRegister_x86_64_R12B},
#line 32 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str195, SpasmRegister_x86_64_RBX},
    {-1},
#line 35 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str197, SpasmRegister_x86_64_RSI},
#line 133 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str198, SpasmRegister_x86_64_ZMM0},
#line 143 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str199, SpasmRegister_x86_64_ZMM10},
    {-1},
#line 126 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str201, SpasmRegister_x86_64_YMM9},
#line 174 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str202, SpasmRegister_x86_64_CR9},
#line 141 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str203, SpasmRegister_x86_64_ZMM8},
#line 73 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str204, SpasmRegister_x86_64_R12W},
#line 37 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str205, SpasmRegister_x86_64_R8},
#line 117 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str206, SpasmRegister_x86_64_YMM0},
#line 127 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str207, SpasmRegister_x86_64_YMM10},
    {-1},
#line 36 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str209, SpasmRegister_x86_64_RDI},
    {-1},
#line 125 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str211, SpasmRegister_x86_64_YMM8},
#line 165 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str212, SpasmRegister_x86_64_CR0},
    {-1},
#line 39 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str214, SpasmRegister_x86_64_R10},
    {-1},
#line 78 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str216, SpasmRegister_x86_64_CL},
    {-1}, {-1},
#line 77 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str219, SpasmRegister_x86_64_AL},
#line 108 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str220, SpasmRegister_x86_64_XMM7},
    {-1},
#line 173 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str222, SpasmRegister_x86_64_CR8},
#line 107 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str223, SpasmRegister_x86_64_XMM6},
    {-1},
#line 181 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str225, SpasmRegister_x86_64_DR0},
#line 49 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str226, SpasmRegister_x86_64_ESP},
    {-1}, {-1},
#line 79 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str229, SpasmRegister_x86_64_DL},
#line 95 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str230, SpasmRegister_x86_64_R10B},
#line 46 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str231, SpasmRegister_x86_64_ECX},
    {-1}, {-1},
#line 45 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str234, SpasmRegister_x86_64_EAX},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 87 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str242, SpasmRegister_x86_64_R10B},
#line 81 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str243, SpasmRegister_x86_64_SPL},
#line 47 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str244, SpasmRegister_x86_64_EDX},
    {-1},
#line 140 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str246, SpasmRegister_x86_64_ZMM7},
    {-1}, {-1},
#line 139 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str249, SpasmRegister_x86_64_ZMM6},
    {-1},
#line 189 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str251, SpasmRegister_x86_64_T0},
#line 71 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str252, SpasmRegister_x86_64_R10W},
    {-1},
#line 124 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str254, SpasmRegister_x86_64_YMM7},
    {-1}, {-1},
#line 123 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str257, SpasmRegister_x86_64_YMM6},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 156 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str283, SpasmRegister_x86_64_K7},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 155 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str289, SpasmRegister_x86_64_K6},
    {-1}, {-1}, {-1}, {-1},
#line 83 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str294, SpasmRegister_x86_64_SIL},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 94 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str305, SpasmRegister_x86_64_R9B},
#line 84 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str306, SpasmRegister_x86_64_DIL},
    {-1},
#line 172 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str308, SpasmRegister_x86_64_CR7},
    {-1}, {-1},
#line 80 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str311, SpasmRegister_x86_64_BL},
    {-1}, {-1},
#line 171 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str314, SpasmRegister_x86_64_CR6},
#line 93 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str315, SpasmRegister_x86_64_R8B},
    {-1}, {-1}, {-1}, {-1},
#line 50 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str320, SpasmRegister_x86_64_EBP},
#line 188 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str321, SpasmRegister_x86_64_DR7},
    {-1}, {-1}, {-1}, {-1},
#line 48 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str326, SpasmRegister_x86_64_EBX},
#line 187 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str327, SpasmRegister_x86_64_DR6},
#line 51 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str328, SpasmRegister_x86_64_ESI},
#line 86 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str329, SpasmRegister_x86_64_R9B},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 82 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str337, SpasmRegister_x86_64_BPL},
    {-1},
#line 85 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str339, SpasmRegister_x86_64_R8B},
#line 52 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str340, SpasmRegister_x86_64_EDI},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 196 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str347, SpasmRegister_x86_64_T7},
    {-1},
#line 70 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str349, SpasmRegister_x86_64_R9W},
    {-1}, {-1}, {-1},
#line 195 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str353, SpasmRegister_x86_64_T6},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 69 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str359, SpasmRegister_x86_64_R8W}
  };

const struct Spasm_x86_64_RegisterKeyword *
spasm_x86_64_register_lookup (register const char *str, register size_t len)
{
  if (len <= SPASM_X86_64_REGISTER_MAX_WORD_LENGTH && len >= SPASM_X86_64_REGISTER_MIN_WORD_LENGTH)
    {
      register unsigned int key = spasm_x86_64_register_hash (str, len);

      if (key <= SPASM_X86_64_REGISTER_MAX_HASH_VALUE)
        {
          register int o = spasm_x86_64_register_words[key].name;
          if (o >= 0)
            {
              register const char *s = o + spasm_x86_64_register_strings;

              if ((((unsigned char)*str ^ (unsigned char)*s) & ~32) == 0 && !gperf_case_strncmp (str, s, len) && s[len] == '\0')
                return &spasm_x86_64_register_words[key];
            }
        }
    }
  return 0;
}
#line 197 "x86_64_registers.gperf"

SpasmRegister spasm_x86_64_register_from_string(const char* s, size_t s_sz)
{
    const struct Spasm_x86_64_RegisterKeyword* keyword = spasm_x86_64_register_lookup(s, s_sz);

    return keyword != NULL ? (SpasmRegister)keyword->reg : SpasmRegister_Invalid;
}
