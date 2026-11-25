/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: gperf -m 100 --output-file=x86_64_registers.c x86_64_registers.gperf  */
/* Computed positions: -k'1-5' */

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

#define SPASM_X86_64_REGISTER_TOTAL_KEYWORDS 221
#define SPASM_X86_64_REGISTER_MIN_WORD_LENGTH 2
#define SPASM_X86_64_REGISTER_MAX_WORD_LENGTH 6
#define SPASM_X86_64_REGISTER_MIN_HASH_VALUE 9
#define SPASM_X86_64_REGISTER_MAX_HASH_VALUE 395
/* maximum key range = 387, duplicates = 0 */

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
      396, 396, 396, 396, 396, 396, 396, 396, 396, 396,
      396, 396, 396, 396, 396, 396, 396, 396, 396, 396,
      396, 396, 396, 396, 396, 396, 396, 396, 396, 396,
      396, 396, 396, 396, 396, 396, 396, 396, 396, 396,
      396, 396, 396, 396, 396, 396, 396, 396, 173,   2,
        3,  11,  29,  61, 146, 126, 114,  96, 255, 241,
      161, 396, 396, 396, 396,  77, 159,  86,  53, 139,
        4,   5, 151, 183,   3, 220, 134,   2, 396, 396,
       55, 396,   2,  10, 213, 396, 396, 181,   4,   9,
        2, 396, 396, 396, 396, 396, 396,  77, 159,  86,
       53, 139,   4,   5, 151, 183,   3, 220, 134,   2,
      396, 396,  55, 396,   2,  10, 213, 396, 396, 181,
        4,   9,   2, 396, 396, 396, 396, 396, 396, 396,
      396, 396, 396, 396, 396, 396, 396, 396, 396, 396,
      396, 396, 396, 396, 396, 396, 396, 396, 396, 396,
      396, 396, 396, 396, 396, 396, 396, 396, 396, 396,
      396, 396, 396, 396, 396, 396, 396, 396, 396, 396,
      396, 396, 396, 396, 396, 396, 396, 396, 396, 396,
      396, 396, 396, 396, 396, 396, 396, 396, 396, 396,
      396, 396, 396, 396, 396, 396, 396, 396, 396, 396,
      396, 396, 396, 396, 396, 396, 396, 396, 396, 396,
      396, 396, 396, 396, 396, 396, 396, 396, 396, 396,
      396, 396, 396, 396, 396, 396, 396, 396, 396, 396,
      396, 396, 396, 396, 396, 396, 396, 396, 396, 396,
      396, 396, 396, 396, 396, 396, 396, 396, 396, 396,
      396, 396, 396, 396, 396, 396, 396, 396, 396
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[4]+3];
      /*FALLTHROUGH*/
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

struct spasm_x86_64_register_strings_t
  {
    char spasm_x86_64_register_strings_str9[sizeof("r11")];
    char spasm_x86_64_register_strings_str10[sizeof("r12")];
    char spasm_x86_64_register_strings_str12[sizeof("zmm1")];
    char spasm_x86_64_register_strings_str13[sizeof("zmm2")];
    char spasm_x86_64_register_strings_str14[sizeof("xmm1")];
    char spasm_x86_64_register_strings_str15[sizeof("xmm2")];
    char spasm_x86_64_register_strings_str16[sizeof("fs")];
    char spasm_x86_64_register_strings_str17[sizeof("gs")];
    char spasm_x86_64_register_strings_str18[sizeof("r13")];
    char spasm_x86_64_register_strings_str19[sizeof("ymm1")];
    char spasm_x86_64_register_strings_str20[sizeof("ymm2")];
    char spasm_x86_64_register_strings_str21[sizeof("zmm3")];
    char spasm_x86_64_register_strings_str22[sizeof("ss")];
    char spasm_x86_64_register_strings_str23[sizeof("xmm3")];
    char spasm_x86_64_register_strings_str24[sizeof("zmm10")];
    char spasm_x86_64_register_strings_str25[sizeof("zmm20")];
    char spasm_x86_64_register_strings_str26[sizeof("xmm10")];
    char spasm_x86_64_register_strings_str27[sizeof("xmm20")];
    char spasm_x86_64_register_strings_str28[sizeof("ymm3")];
    char spasm_x86_64_register_strings_str31[sizeof("ymm10")];
    char spasm_x86_64_register_strings_str32[sizeof("ymm20")];
    char spasm_x86_64_register_strings_str33[sizeof("zmm30")];
    char spasm_x86_64_register_strings_str35[sizeof("xmm30")];
    char spasm_x86_64_register_strings_str36[sizeof("r14")];
    char spasm_x86_64_register_strings_str39[sizeof("zmm4")];
    char spasm_x86_64_register_strings_str40[sizeof("ymm30")];
    char spasm_x86_64_register_strings_str41[sizeof("xmm4")];
    char spasm_x86_64_register_strings_str42[sizeof("zmm11")];
    char spasm_x86_64_register_strings_str43[sizeof("zmm21")];
    char spasm_x86_64_register_strings_str44[sizeof("xmm11")];
    char spasm_x86_64_register_strings_str45[sizeof("xmm21")];
    char spasm_x86_64_register_strings_str46[sizeof("ymm4")];
    char spasm_x86_64_register_strings_str49[sizeof("ymm11")];
    char spasm_x86_64_register_strings_str50[sizeof("ymm21")];
    char spasm_x86_64_register_strings_str51[sizeof("zmm31")];
    char spasm_x86_64_register_strings_str53[sizeof("xmm31")];
    char spasm_x86_64_register_strings_str58[sizeof("ymm31")];
    char spasm_x86_64_register_strings_str59[sizeof("dx")];
    char spasm_x86_64_register_strings_str60[sizeof("dr1")];
    char spasm_x86_64_register_strings_str61[sizeof("dr2")];
    char spasm_x86_64_register_strings_str62[sizeof("rdx")];
    char spasm_x86_64_register_strings_str63[sizeof("r11d")];
    char spasm_x86_64_register_strings_str64[sizeof("r12d")];
    char spasm_x86_64_register_strings_str65[sizeof("ds")];
    char spasm_x86_64_register_strings_str67[sizeof("sp")];
    char spasm_x86_64_register_strings_str68[sizeof("r15")];
    char spasm_x86_64_register_strings_str69[sizeof("dr3")];
    char spasm_x86_64_register_strings_str70[sizeof("rsp")];
    char spasm_x86_64_register_strings_str71[sizeof("zmm5")];
    char spasm_x86_64_register_strings_str72[sizeof("r13d")];
    char spasm_x86_64_register_strings_str73[sizeof("xmm5")];
    char spasm_x86_64_register_strings_str74[sizeof("zmm12")];
    char spasm_x86_64_register_strings_str75[sizeof("zmm22")];
    char spasm_x86_64_register_strings_str76[sizeof("xmm12")];
    char spasm_x86_64_register_strings_str77[sizeof("xmm22")];
    char spasm_x86_64_register_strings_str78[sizeof("ymm5")];
    char spasm_x86_64_register_strings_str81[sizeof("ymm12")];
    char spasm_x86_64_register_strings_str82[sizeof("ymm22")];
    char spasm_x86_64_register_strings_str83[sizeof("ax")];
    char spasm_x86_64_register_strings_str86[sizeof("rax")];
    char spasm_x86_64_register_strings_str87[sizeof("dr4")];
    char spasm_x86_64_register_strings_str90[sizeof("r14d")];
    char spasm_x86_64_register_strings_str92[sizeof("cx")];
    char spasm_x86_64_register_strings_str93[sizeof("cr1")];
    char spasm_x86_64_register_strings_str94[sizeof("cr2")];
    char spasm_x86_64_register_strings_str95[sizeof("rcx")];
    char spasm_x86_64_register_strings_str96[sizeof("cr11")];
    char spasm_x86_64_register_strings_str97[sizeof("cr12")];
    char spasm_x86_64_register_strings_str98[sizeof("cs")];
    char spasm_x86_64_register_strings_str100[sizeof("r9")];
    char spasm_x86_64_register_strings_str102[sizeof("cr3")];
    char spasm_x86_64_register_strings_str105[sizeof("cr13")];
    char spasm_x86_64_register_strings_str106[sizeof("zmm9")];
    char spasm_x86_64_register_strings_str108[sizeof("xmm9")];
    char spasm_x86_64_register_strings_str109[sizeof("zmm16")];
    char spasm_x86_64_register_strings_str110[sizeof("zmm26")];
    char spasm_x86_64_register_strings_str111[sizeof("xmm16")];
    char spasm_x86_64_register_strings_str112[sizeof("xmm26")];
    char spasm_x86_64_register_strings_str113[sizeof("ymm9")];
    char spasm_x86_64_register_strings_str116[sizeof("ymm16")];
    char spasm_x86_64_register_strings_str117[sizeof("ymm26")];
    char spasm_x86_64_register_strings_str118[sizeof("r8")];
    char spasm_x86_64_register_strings_str119[sizeof("dr5")];
    char spasm_x86_64_register_strings_str120[sizeof("cr4")];
    char spasm_x86_64_register_strings_str122[sizeof("r15d")];
    char spasm_x86_64_register_strings_str123[sizeof("cr14")];
    char spasm_x86_64_register_strings_str124[sizeof("zmm8")];
    char spasm_x86_64_register_strings_str126[sizeof("xmm8")];
    char spasm_x86_64_register_strings_str127[sizeof("zmm15")];
    char spasm_x86_64_register_strings_str128[sizeof("zmm25")];
    char spasm_x86_64_register_strings_str129[sizeof("xmm15")];
    char spasm_x86_64_register_strings_str130[sizeof("xmm25")];
    char spasm_x86_64_register_strings_str131[sizeof("ymm8")];
    char spasm_x86_64_register_strings_str134[sizeof("ymm15")];
    char spasm_x86_64_register_strings_str135[sizeof("ymm25")];
    char spasm_x86_64_register_strings_str136[sizeof("zmm7")];
    char spasm_x86_64_register_strings_str138[sizeof("xmm7")];
    char spasm_x86_64_register_strings_str139[sizeof("zmm14")];
    char spasm_x86_64_register_strings_str140[sizeof("zmm24")];
    char spasm_x86_64_register_strings_str141[sizeof("xmm14")];
    char spasm_x86_64_register_strings_str142[sizeof("xmm24")];
    char spasm_x86_64_register_strings_str143[sizeof("ymm7")];
    char spasm_x86_64_register_strings_str144[sizeof("r11l")];
    char spasm_x86_64_register_strings_str145[sizeof("r12l")];
    char spasm_x86_64_register_strings_str146[sizeof("ymm14")];
    char spasm_x86_64_register_strings_str147[sizeof("ymm24")];
    char spasm_x86_64_register_strings_str151[sizeof("es")];
    char spasm_x86_64_register_strings_str152[sizeof("cr5")];
    char spasm_x86_64_register_strings_str153[sizeof("r13l")];
    char spasm_x86_64_register_strings_str154[sizeof("r9d")];
    char spasm_x86_64_register_strings_str155[sizeof("cr15")];
    char spasm_x86_64_register_strings_str156[sizeof("zmm6")];
    char spasm_x86_64_register_strings_str158[sizeof("xmm6")];
    char spasm_x86_64_register_strings_str159[sizeof("zmm13")];
    char spasm_x86_64_register_strings_str160[sizeof("zmm23")];
    char spasm_x86_64_register_strings_str161[sizeof("xmm13")];
    char spasm_x86_64_register_strings_str162[sizeof("xmm23")];
    char spasm_x86_64_register_strings_str163[sizeof("ymm6")];
    char spasm_x86_64_register_strings_str165[sizeof("bx")];
    char spasm_x86_64_register_strings_str166[sizeof("ymm13")];
    char spasm_x86_64_register_strings_str167[sizeof("ymm23")];
    char spasm_x86_64_register_strings_str168[sizeof("rbx")];
    char spasm_x86_64_register_strings_str169[sizeof("r11b")];
    char spasm_x86_64_register_strings_str170[sizeof("r12b")];
    char spasm_x86_64_register_strings_str171[sizeof("r14l")];
    char spasm_x86_64_register_strings_str172[sizeof("r8d")];
    char spasm_x86_64_register_strings_str174[sizeof("zmm19")];
    char spasm_x86_64_register_strings_str175[sizeof("zmm29")];
    char spasm_x86_64_register_strings_str176[sizeof("xmm19")];
    char spasm_x86_64_register_strings_str177[sizeof("xmm29")];
    char spasm_x86_64_register_strings_str178[sizeof("r13b")];
    char spasm_x86_64_register_strings_str180[sizeof("r10")];
    char spasm_x86_64_register_strings_str181[sizeof("ymm19")];
    char spasm_x86_64_register_strings_str182[sizeof("ymm29")];
    char spasm_x86_64_register_strings_str183[sizeof("zmm0")];
    char spasm_x86_64_register_strings_str184[sizeof("dr7")];
    char spasm_x86_64_register_strings_str185[sizeof("xmm0")];
    char spasm_x86_64_register_strings_str187[sizeof("cr9")];
    char spasm_x86_64_register_strings_str189[sizeof("dl")];
    char spasm_x86_64_register_strings_str190[sizeof("ymm0")];
    char spasm_x86_64_register_strings_str191[sizeof("r11w")];
    char spasm_x86_64_register_strings_str192[sizeof("r12w")];
    char spasm_x86_64_register_strings_str195[sizeof("si")];
    char spasm_x86_64_register_strings_str196[sizeof("r14b")];
    char spasm_x86_64_register_strings_str198[sizeof("rsi")];
    char spasm_x86_64_register_strings_str199[sizeof("edx")];
    char spasm_x86_64_register_strings_str200[sizeof("r13w")];
    char spasm_x86_64_register_strings_str202[sizeof("spl")];
    char spasm_x86_64_register_strings_str203[sizeof("r15l")];
    char spasm_x86_64_register_strings_str204[sizeof("dr6")];
    char spasm_x86_64_register_strings_str205[sizeof("cr8")];
    char spasm_x86_64_register_strings_str206[sizeof("dh")];
    char spasm_x86_64_register_strings_str207[sizeof("esp")];
    char spasm_x86_64_register_strings_str213[sizeof("al")];
    char spasm_x86_64_register_strings_str216[sizeof("bp")];
    char spasm_x86_64_register_strings_str217[sizeof("cr7")];
    char spasm_x86_64_register_strings_str218[sizeof("r14w")];
    char spasm_x86_64_register_strings_str219[sizeof("rbp")];
    char spasm_x86_64_register_strings_str220[sizeof("tr1")];
    char spasm_x86_64_register_strings_str221[sizeof("tr2")];
    char spasm_x86_64_register_strings_str222[sizeof("cl")];
    char spasm_x86_64_register_strings_str223[sizeof("eax")];
    char spasm_x86_64_register_strings_str224[sizeof("k1")];
    char spasm_x86_64_register_strings_str225[sizeof("k2")];
    char spasm_x86_64_register_strings_str226[sizeof("rflags")];
    char spasm_x86_64_register_strings_str228[sizeof("r15b")];
    char spasm_x86_64_register_strings_str229[sizeof("tr3")];
    char spasm_x86_64_register_strings_str230[sizeof("ah")];
    char spasm_x86_64_register_strings_str231[sizeof("dr0")];
    char spasm_x86_64_register_strings_str232[sizeof("ecx")];
    char spasm_x86_64_register_strings_str233[sizeof("k3")];
    char spasm_x86_64_register_strings_str234[sizeof("r10d")];
    char spasm_x86_64_register_strings_str235[sizeof("r9l")];
    char spasm_x86_64_register_strings_str237[sizeof("cr6")];
    char spasm_x86_64_register_strings_str238[sizeof("di")];
    char spasm_x86_64_register_strings_str239[sizeof("ch")];
    char spasm_x86_64_register_strings_str241[sizeof("rdi")];
    char spasm_x86_64_register_strings_str243[sizeof("rip")];
    char spasm_x86_64_register_strings_str247[sizeof("tr4")];
    char spasm_x86_64_register_strings_str250[sizeof("r15w")];
    char spasm_x86_64_register_strings_str251[sizeof("k4")];
    char spasm_x86_64_register_strings_str253[sizeof("r8l")];
    char spasm_x86_64_register_strings_str254[sizeof("zmm18")];
    char spasm_x86_64_register_strings_str255[sizeof("zmm28")];
    char spasm_x86_64_register_strings_str256[sizeof("xmm18")];
    char spasm_x86_64_register_strings_str257[sizeof("xmm28")];
    char spasm_x86_64_register_strings_str260[sizeof("r9b")];
    char spasm_x86_64_register_strings_str261[sizeof("ymm18")];
    char spasm_x86_64_register_strings_str262[sizeof("ymm28")];
    char spasm_x86_64_register_strings_str264[sizeof("cr0")];
    char spasm_x86_64_register_strings_str267[sizeof("cr10")];
    char spasm_x86_64_register_strings_str268[sizeof("zmm17")];
    char spasm_x86_64_register_strings_str269[sizeof("zmm27")];
    char spasm_x86_64_register_strings_str270[sizeof("xmm17")];
    char spasm_x86_64_register_strings_str271[sizeof("xmm27")];
    char spasm_x86_64_register_strings_str275[sizeof("ymm17")];
    char spasm_x86_64_register_strings_str276[sizeof("ymm27")];
    char spasm_x86_64_register_strings_str278[sizeof("r8b")];
    char spasm_x86_64_register_strings_str279[sizeof("tr5")];
    char spasm_x86_64_register_strings_str282[sizeof("r9w")];
    char spasm_x86_64_register_strings_str283[sizeof("k5")];
    char spasm_x86_64_register_strings_str295[sizeof("bl")];
    char spasm_x86_64_register_strings_str300[sizeof("r8w")];
    char spasm_x86_64_register_strings_str305[sizeof("ebx")];
    char spasm_x86_64_register_strings_str312[sizeof("bh")];
    char spasm_x86_64_register_strings_str315[sizeof("r10l")];
    char spasm_x86_64_register_strings_str330[sizeof("sil")];
    char spasm_x86_64_register_strings_str335[sizeof("esi")];
    char spasm_x86_64_register_strings_str340[sizeof("r10b")];
    char spasm_x86_64_register_strings_str344[sizeof("tr7")];
    char spasm_x86_64_register_strings_str348[sizeof("k7")];
    char spasm_x86_64_register_strings_str351[sizeof("bpl")];
    char spasm_x86_64_register_strings_str356[sizeof("ebp")];
    char spasm_x86_64_register_strings_str362[sizeof("r10w")];
    char spasm_x86_64_register_strings_str364[sizeof("tr6")];
    char spasm_x86_64_register_strings_str368[sizeof("k6")];
    char spasm_x86_64_register_strings_str373[sizeof("dil")];
    char spasm_x86_64_register_strings_str378[sizeof("edi")];
    char spasm_x86_64_register_strings_str380[sizeof("eip")];
    char spasm_x86_64_register_strings_str391[sizeof("tr0")];
    char spasm_x86_64_register_strings_str395[sizeof("k0")];
  };
static const struct spasm_x86_64_register_strings_t spasm_x86_64_register_strings_contents =
  {
    "r11",
    "r12",
    "zmm1",
    "zmm2",
    "xmm1",
    "xmm2",
    "fs",
    "gs",
    "r13",
    "ymm1",
    "ymm2",
    "zmm3",
    "ss",
    "xmm3",
    "zmm10",
    "zmm20",
    "xmm10",
    "xmm20",
    "ymm3",
    "ymm10",
    "ymm20",
    "zmm30",
    "xmm30",
    "r14",
    "zmm4",
    "ymm30",
    "xmm4",
    "zmm11",
    "zmm21",
    "xmm11",
    "xmm21",
    "ymm4",
    "ymm11",
    "ymm21",
    "zmm31",
    "xmm31",
    "ymm31",
    "dx",
    "dr1",
    "dr2",
    "rdx",
    "r11d",
    "r12d",
    "ds",
    "sp",
    "r15",
    "dr3",
    "rsp",
    "zmm5",
    "r13d",
    "xmm5",
    "zmm12",
    "zmm22",
    "xmm12",
    "xmm22",
    "ymm5",
    "ymm12",
    "ymm22",
    "ax",
    "rax",
    "dr4",
    "r14d",
    "cx",
    "cr1",
    "cr2",
    "rcx",
    "cr11",
    "cr12",
    "cs",
    "r9",
    "cr3",
    "cr13",
    "zmm9",
    "xmm9",
    "zmm16",
    "zmm26",
    "xmm16",
    "xmm26",
    "ymm9",
    "ymm16",
    "ymm26",
    "r8",
    "dr5",
    "cr4",
    "r15d",
    "cr14",
    "zmm8",
    "xmm8",
    "zmm15",
    "zmm25",
    "xmm15",
    "xmm25",
    "ymm8",
    "ymm15",
    "ymm25",
    "zmm7",
    "xmm7",
    "zmm14",
    "zmm24",
    "xmm14",
    "xmm24",
    "ymm7",
    "r11l",
    "r12l",
    "ymm14",
    "ymm24",
    "es",
    "cr5",
    "r13l",
    "r9d",
    "cr15",
    "zmm6",
    "xmm6",
    "zmm13",
    "zmm23",
    "xmm13",
    "xmm23",
    "ymm6",
    "bx",
    "ymm13",
    "ymm23",
    "rbx",
    "r11b",
    "r12b",
    "r14l",
    "r8d",
    "zmm19",
    "zmm29",
    "xmm19",
    "xmm29",
    "r13b",
    "r10",
    "ymm19",
    "ymm29",
    "zmm0",
    "dr7",
    "xmm0",
    "cr9",
    "dl",
    "ymm0",
    "r11w",
    "r12w",
    "si",
    "r14b",
    "rsi",
    "edx",
    "r13w",
    "spl",
    "r15l",
    "dr6",
    "cr8",
    "dh",
    "esp",
    "al",
    "bp",
    "cr7",
    "r14w",
    "rbp",
    "tr1",
    "tr2",
    "cl",
    "eax",
    "k1",
    "k2",
    "rflags",
    "r15b",
    "tr3",
    "ah",
    "dr0",
    "ecx",
    "k3",
    "r10d",
    "r9l",
    "cr6",
    "di",
    "ch",
    "rdi",
    "rip",
    "tr4",
    "r15w",
    "k4",
    "r8l",
    "zmm18",
    "zmm28",
    "xmm18",
    "xmm28",
    "r9b",
    "ymm18",
    "ymm28",
    "cr0",
    "cr10",
    "zmm17",
    "zmm27",
    "xmm17",
    "xmm27",
    "ymm17",
    "ymm27",
    "r8b",
    "tr5",
    "r9w",
    "k5",
    "bl",
    "r8w",
    "ebx",
    "bh",
    "r10l",
    "sil",
    "esi",
    "r10b",
    "tr7",
    "k7",
    "bpl",
    "ebp",
    "r10w",
    "tr6",
    "k6",
    "dil",
    "edi",
    "eip",
    "tr0",
    "k0"
  };
#define spasm_x86_64_register_strings ((const char *) &spasm_x86_64_register_strings_contents)

static const struct Spasm_x86_64_RegisterKeyword spasm_x86_64_register_words[] =
  {
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 40 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str9, SpasmRegister_x86_64_R11},
#line 41 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str10, SpasmRegister_x86_64_R12},
    {-1},
#line 170 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str12, SpasmRegister_x86_64_ZMM1},
#line 171 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str13, SpasmRegister_x86_64_ZMM2},
#line 106 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str14, SpasmRegister_x86_64_XMM1},
#line 107 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str15, SpasmRegister_x86_64_XMM2},
#line 215 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str16, SpasmRegister_x86_64_FS},
#line 216 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str17, SpasmRegister_x86_64_GS},
#line 42 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str18, SpasmRegister_x86_64_R13},
#line 138 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str19, SpasmRegister_x86_64_YMM1},
#line 139 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str20, SpasmRegister_x86_64_YMM2},
#line 172 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str21, SpasmRegister_x86_64_ZMM3},
#line 213 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str22, SpasmRegister_x86_64_SS},
#line 108 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str23, SpasmRegister_x86_64_XMM3},
#line 179 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str24, SpasmRegister_x86_64_ZMM10},
#line 189 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str25, SpasmRegister_x86_64_ZMM20},
#line 115 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str26, SpasmRegister_x86_64_XMM10},
#line 125 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str27, SpasmRegister_x86_64_XMM20},
#line 140 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str28, SpasmRegister_x86_64_YMM3},
    {-1}, {-1},
#line 147 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str31, SpasmRegister_x86_64_YMM10},
#line 157 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str32, SpasmRegister_x86_64_YMM20},
#line 199 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str33, SpasmRegister_x86_64_ZMM30},
    {-1},
#line 135 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str35, SpasmRegister_x86_64_XMM30},
#line 43 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str36, SpasmRegister_x86_64_R14},
    {-1}, {-1},
#line 173 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str39, SpasmRegister_x86_64_ZMM4},
#line 167 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str40, SpasmRegister_x86_64_YMM30},
#line 109 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str41, SpasmRegister_x86_64_XMM4},
#line 180 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str42, SpasmRegister_x86_64_ZMM11},
#line 190 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str43, SpasmRegister_x86_64_ZMM21},
#line 116 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str44, SpasmRegister_x86_64_XMM11},
#line 126 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str45, SpasmRegister_x86_64_XMM21},
#line 141 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str46, SpasmRegister_x86_64_YMM4},
    {-1}, {-1},
#line 148 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str49, SpasmRegister_x86_64_YMM11},
#line 158 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str50, SpasmRegister_x86_64_YMM21},
#line 200 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str51, SpasmRegister_x86_64_ZMM31},
    {-1},
#line 136 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str53, SpasmRegister_x86_64_XMM31},
    {-1}, {-1}, {-1}, {-1},
#line 168 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str58, SpasmRegister_x86_64_YMM31},
#line 63 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str59, SpasmRegister_x86_64_DX},
#line 235 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str60, SpasmRegister_x86_64_DR1},
#line 236 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str61, SpasmRegister_x86_64_DR2},
#line 31 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str62, SpasmRegister_x86_64_RDX},
#line 56 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str63, SpasmRegister_x86_64_R11D},
#line 57 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str64, SpasmRegister_x86_64_R12D},
#line 212 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str65, SpasmRegister_x86_64_DS},
    {-1},
#line 65 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str67, SpasmRegister_x86_64_SP},
#line 44 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str68, SpasmRegister_x86_64_R15},
#line 237 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str69, SpasmRegister_x86_64_DR3},
#line 33 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str70, SpasmRegister_x86_64_RSP},
#line 174 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str71, SpasmRegister_x86_64_ZMM5},
#line 58 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str72, SpasmRegister_x86_64_R13D},
#line 110 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str73, SpasmRegister_x86_64_XMM5},
#line 181 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str74, SpasmRegister_x86_64_ZMM12},
#line 191 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str75, SpasmRegister_x86_64_ZMM22},
#line 117 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str76, SpasmRegister_x86_64_XMM12},
#line 127 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str77, SpasmRegister_x86_64_XMM22},
#line 142 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str78, SpasmRegister_x86_64_YMM5},
    {-1}, {-1},
#line 149 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str81, SpasmRegister_x86_64_YMM12},
#line 159 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str82, SpasmRegister_x86_64_YMM22},
#line 61 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str83, SpasmRegister_x86_64_AX},
    {-1}, {-1},
#line 29 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str86, SpasmRegister_x86_64_RAX},
#line 238 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str87, SpasmRegister_x86_64_DR4},
    {-1}, {-1},
#line 59 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str90, SpasmRegister_x86_64_R14D},
    {-1},
#line 62 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str92, SpasmRegister_x86_64_CX},
#line 219 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str93, SpasmRegister_x86_64_CR1},
#line 220 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str94, SpasmRegister_x86_64_CR2},
#line 30 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str95, SpasmRegister_x86_64_RCX},
#line 229 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str96, SpasmRegister_x86_64_CR11},
#line 230 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str97, SpasmRegister_x86_64_CR12},
#line 211 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str98, SpasmRegister_x86_64_CS},
    {-1},
#line 38 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str100, SpasmRegister_x86_64_R9},
    {-1},
#line 221 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str102, SpasmRegister_x86_64_CR3},
    {-1}, {-1},
#line 231 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str105, SpasmRegister_x86_64_CR13},
#line 178 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str106, SpasmRegister_x86_64_ZMM9},
    {-1},
#line 114 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str108, SpasmRegister_x86_64_XMM9},
#line 185 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str109, SpasmRegister_x86_64_ZMM16},
#line 195 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str110, SpasmRegister_x86_64_ZMM26},
#line 121 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str111, SpasmRegister_x86_64_XMM16},
#line 131 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str112, SpasmRegister_x86_64_XMM26},
#line 146 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str113, SpasmRegister_x86_64_YMM9},
    {-1}, {-1},
#line 153 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str116, SpasmRegister_x86_64_YMM16},
#line 163 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str117, SpasmRegister_x86_64_YMM26},
#line 37 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str118, SpasmRegister_x86_64_R8},
#line 239 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str119, SpasmRegister_x86_64_DR5},
#line 222 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str120, SpasmRegister_x86_64_CR4},
    {-1},
#line 60 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str122, SpasmRegister_x86_64_R15D},
#line 232 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str123, SpasmRegister_x86_64_CR14},
#line 177 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str124, SpasmRegister_x86_64_ZMM8},
    {-1},
#line 113 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str126, SpasmRegister_x86_64_XMM8},
#line 184 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str127, SpasmRegister_x86_64_ZMM15},
#line 194 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str128, SpasmRegister_x86_64_ZMM25},
#line 120 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str129, SpasmRegister_x86_64_XMM15},
#line 130 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str130, SpasmRegister_x86_64_XMM25},
#line 145 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str131, SpasmRegister_x86_64_YMM8},
    {-1}, {-1},
#line 152 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str134, SpasmRegister_x86_64_YMM15},
#line 162 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str135, SpasmRegister_x86_64_YMM25},
#line 176 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str136, SpasmRegister_x86_64_ZMM7},
    {-1},
#line 112 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str138, SpasmRegister_x86_64_XMM7},
#line 183 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str139, SpasmRegister_x86_64_ZMM14},
#line 193 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str140, SpasmRegister_x86_64_ZMM24},
#line 119 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str141, SpasmRegister_x86_64_XMM14},
#line 129 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str142, SpasmRegister_x86_64_XMM24},
#line 144 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str143, SpasmRegister_x86_64_YMM7},
#line 96 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str144, SpasmRegister_x86_64_R11B},
#line 97 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str145, SpasmRegister_x86_64_R12B},
#line 151 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str146, SpasmRegister_x86_64_YMM14},
#line 161 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str147, SpasmRegister_x86_64_YMM24},
    {-1}, {-1}, {-1},
#line 214 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str151, SpasmRegister_x86_64_ES},
#line 223 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str152, SpasmRegister_x86_64_CR5},
#line 98 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str153, SpasmRegister_x86_64_R13B},
#line 54 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str154, SpasmRegister_x86_64_R9D},
#line 233 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str155, SpasmRegister_x86_64_CR15},
#line 175 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str156, SpasmRegister_x86_64_ZMM6},
    {-1},
#line 111 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str158, SpasmRegister_x86_64_XMM6},
#line 182 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str159, SpasmRegister_x86_64_ZMM13},
#line 192 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str160, SpasmRegister_x86_64_ZMM23},
#line 118 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str161, SpasmRegister_x86_64_XMM13},
#line 128 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str162, SpasmRegister_x86_64_XMM23},
#line 143 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str163, SpasmRegister_x86_64_YMM6},
    {-1},
#line 64 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str165, SpasmRegister_x86_64_BX},
#line 150 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str166, SpasmRegister_x86_64_YMM13},
#line 160 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str167, SpasmRegister_x86_64_YMM23},
#line 32 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str168, SpasmRegister_x86_64_RBX},
#line 88 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str169, SpasmRegister_x86_64_R11B},
#line 89 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str170, SpasmRegister_x86_64_R12B},
#line 99 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str171, SpasmRegister_x86_64_R14B},
#line 53 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str172, SpasmRegister_x86_64_R8D},
    {-1},
#line 188 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str174, SpasmRegister_x86_64_ZMM19},
#line 198 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str175, SpasmRegister_x86_64_ZMM29},
#line 124 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str176, SpasmRegister_x86_64_XMM19},
#line 134 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str177, SpasmRegister_x86_64_XMM29},
#line 90 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str178, SpasmRegister_x86_64_R13B},
    {-1},
#line 39 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str180, SpasmRegister_x86_64_R10},
#line 156 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str181, SpasmRegister_x86_64_YMM19},
#line 166 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str182, SpasmRegister_x86_64_YMM29},
#line 169 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str183, SpasmRegister_x86_64_ZMM0},
#line 241 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str184, SpasmRegister_x86_64_DR7},
#line 105 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str185, SpasmRegister_x86_64_XMM0},
    {-1},
#line 227 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str187, SpasmRegister_x86_64_CR9},
    {-1},
#line 79 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str189, SpasmRegister_x86_64_DL},
#line 137 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str190, SpasmRegister_x86_64_YMM0},
#line 72 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str191, SpasmRegister_x86_64_R11W},
#line 73 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str192, SpasmRegister_x86_64_R12W},
    {-1}, {-1},
#line 67 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str195, SpasmRegister_x86_64_SI},
#line 91 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str196, SpasmRegister_x86_64_R14B},
    {-1},
#line 35 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str198, SpasmRegister_x86_64_RSI},
#line 47 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str199, SpasmRegister_x86_64_EDX},
#line 74 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str200, SpasmRegister_x86_64_R13W},
    {-1},
#line 81 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str202, SpasmRegister_x86_64_SPL},
#line 100 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str203, SpasmRegister_x86_64_R15B},
#line 240 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str204, SpasmRegister_x86_64_DR6},
#line 226 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str205, SpasmRegister_x86_64_CR8},
#line 103 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str206, SpasmRegister_x86_64_DH},
#line 49 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str207, SpasmRegister_x86_64_ESP},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 77 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str213, SpasmRegister_x86_64_AL},
    {-1}, {-1},
#line 66 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str216, SpasmRegister_x86_64_BP},
#line 225 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str217, SpasmRegister_x86_64_CR7},
#line 75 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str218, SpasmRegister_x86_64_R14W},
#line 34 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str219, SpasmRegister_x86_64_RBP},
#line 243 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str220, SpasmRegister_x86_64_T1},
#line 244 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str221, SpasmRegister_x86_64_T2},
#line 78 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str222, SpasmRegister_x86_64_CL},
#line 45 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str223, SpasmRegister_x86_64_EAX},
#line 202 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str224, SpasmRegister_x86_64_K1},
#line 203 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str225, SpasmRegister_x86_64_K2},
#line 217 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str226, SpasmRegister_x86_64_RFlags},
    {-1},
#line 92 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str228, SpasmRegister_x86_64_R15B},
#line 245 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str229, SpasmRegister_x86_64_T3},
#line 101 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str230, SpasmRegister_x86_64_AH},
#line 234 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str231, SpasmRegister_x86_64_DR0},
#line 46 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str232, SpasmRegister_x86_64_ECX},
#line 204 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str233, SpasmRegister_x86_64_K3},
#line 55 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str234, SpasmRegister_x86_64_R10D},
#line 94 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str235, SpasmRegister_x86_64_R9B},
    {-1},
#line 224 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str237, SpasmRegister_x86_64_CR6},
#line 68 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str238, SpasmRegister_x86_64_DI},
#line 102 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str239, SpasmRegister_x86_64_CH},
    {-1},
#line 36 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str241, SpasmRegister_x86_64_RDI},
    {-1},
#line 209 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str243, SpasmRegister_x86_64_RIP},
    {-1}, {-1}, {-1},
#line 246 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str247, SpasmRegister_x86_64_T4},
    {-1}, {-1},
#line 76 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str250, SpasmRegister_x86_64_R15W},
#line 205 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str251, SpasmRegister_x86_64_K4},
    {-1},
#line 93 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str253, SpasmRegister_x86_64_R8B},
#line 187 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str254, SpasmRegister_x86_64_ZMM18},
#line 197 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str255, SpasmRegister_x86_64_ZMM28},
#line 123 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str256, SpasmRegister_x86_64_XMM18},
#line 133 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str257, SpasmRegister_x86_64_XMM28},
    {-1}, {-1},
#line 86 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str260, SpasmRegister_x86_64_R9B},
#line 155 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str261, SpasmRegister_x86_64_YMM18},
#line 165 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str262, SpasmRegister_x86_64_YMM28},
    {-1},
#line 218 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str264, SpasmRegister_x86_64_CR0},
    {-1}, {-1},
#line 228 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str267, SpasmRegister_x86_64_CR10},
#line 186 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str268, SpasmRegister_x86_64_ZMM17},
#line 196 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str269, SpasmRegister_x86_64_ZMM27},
#line 122 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str270, SpasmRegister_x86_64_XMM17},
#line 132 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str271, SpasmRegister_x86_64_XMM27},
    {-1}, {-1}, {-1},
#line 154 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str275, SpasmRegister_x86_64_YMM17},
#line 164 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str276, SpasmRegister_x86_64_YMM27},
    {-1},
#line 85 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str278, SpasmRegister_x86_64_R8B},
#line 247 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str279, SpasmRegister_x86_64_T5},
    {-1}, {-1},
#line 70 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str282, SpasmRegister_x86_64_R9W},
#line 206 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str283, SpasmRegister_x86_64_K5},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 80 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str295, SpasmRegister_x86_64_BL},
    {-1}, {-1}, {-1}, {-1},
#line 69 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str300, SpasmRegister_x86_64_R8W},
    {-1}, {-1}, {-1}, {-1},
#line 48 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str305, SpasmRegister_x86_64_EBX},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 104 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str312, SpasmRegister_x86_64_BH},
    {-1}, {-1},
#line 95 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str315, SpasmRegister_x86_64_R10B},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 83 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str330, SpasmRegister_x86_64_SIL},
    {-1}, {-1}, {-1}, {-1},
#line 51 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str335, SpasmRegister_x86_64_ESI},
    {-1}, {-1}, {-1}, {-1},
#line 87 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str340, SpasmRegister_x86_64_R10B},
    {-1}, {-1}, {-1},
#line 249 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str344, SpasmRegister_x86_64_T7},
    {-1}, {-1}, {-1},
#line 208 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str348, SpasmRegister_x86_64_K7},
    {-1}, {-1},
#line 82 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str351, SpasmRegister_x86_64_BPL},
    {-1}, {-1}, {-1}, {-1},
#line 50 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str356, SpasmRegister_x86_64_EBP},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 71 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str362, SpasmRegister_x86_64_R10W},
    {-1},
#line 248 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str364, SpasmRegister_x86_64_T6},
    {-1}, {-1}, {-1},
#line 207 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str368, SpasmRegister_x86_64_K6},
    {-1}, {-1}, {-1}, {-1},
#line 84 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str373, SpasmRegister_x86_64_DIL},
    {-1}, {-1}, {-1}, {-1},
#line 52 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str378, SpasmRegister_x86_64_EDI},
    {-1},
#line 210 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str380, SpasmRegister_x86_64_EIP},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1},
#line 242 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str391, SpasmRegister_x86_64_T0},
    {-1}, {-1}, {-1},
#line 201 "x86_64_registers.gperf"
    {(int)(size_t)&((struct spasm_x86_64_register_strings_t *)0)->spasm_x86_64_register_strings_str395, SpasmRegister_x86_64_K0}
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
#line 250 "x86_64_registers.gperf"

SpasmRegister spasm_x86_64_register_from_string(const char* s, size_t s_sz)
{
    const struct Spasm_x86_64_RegisterKeyword* keyword = spasm_x86_64_register_lookup(s, s_sz);

    return keyword != NULL ? (SpasmRegister)keyword->reg : SpasmRegister_Invalid;
}
