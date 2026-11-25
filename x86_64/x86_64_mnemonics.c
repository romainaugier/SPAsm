/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: gperf -m 100 -k'1-4,$' -D --output-file=x86_64_mnemonics.c x86_64_mnemonics.gperf  */

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

#line 1 "x86_64_mnemonics.gperf"

/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright (c) 2025 - Present Romain Augier */
/* All rights reserved. */

/* Auto-generated file by generate.py, don't modify it */

#include "spasm/x86_64.h"

#include <string.h>

#define SPASM_X86_64_MNEMONIC_TOTAL_KEYWORDS 812
#define SPASM_X86_64_MNEMONIC_MIN_WORD_LENGTH 2
#define SPASM_X86_64_MNEMONIC_MAX_WORD_LENGTH 16
#define SPASM_X86_64_MNEMONIC_MIN_HASH_VALUE 50
#define SPASM_X86_64_MNEMONIC_MAX_HASH_VALUE 2529
/* maximum key range = 2480, duplicates = 196 */

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
spasm_x86_64_mnemonic_hash (register const char *str, register size_t len)
{
  static const unsigned short asso_values[] =
    {
      2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530,
      2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530,
      2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530,
      2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530,
      2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530,    4,   13,
        23,   50,    7, 2530, 2530, 2530,    8, 2530, 2530, 2530,
      2530, 2530, 2530, 2530, 2530,  207,  253,   99,    8,  133,
       325,  467,  321,  573,  482,  457,  696,   45,  642,  129,
        16,   13,  301,    3,  412,  391,   31,    4,  763,  684,
       498,    3,    3, 2530, 2530, 2530, 2530,  207,  253,   99,
         8,  133,  325,  467,  321,  573,  482,  457,  696,   45,
       642,  129,   16,   13,  301,    3,  412,  391,   31,    4,
       763,  684,  498,    3,    3, 2530, 2530, 2530, 2530, 2530,
      2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530,
      2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530,
      2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530,
      2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530,
      2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530,
      2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530,
      2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530,
      2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530,
      2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530,
      2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530,
      2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530,
      2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530,
      2530, 2530, 2530, 2530, 2530, 2530, 2530, 2530
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[3]+1];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]+2];
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

struct spasm_x86_64_mnemonic_strings_t
  {
    char spasm_x86_64_mnemonic_strings_str0[sizeof("vsqrtps")];
    char spasm_x86_64_mnemonic_strings_str1[sizeof("vsqrtss")];
    char spasm_x86_64_mnemonic_strings_str2[sizeof("vsqrtpd")];
    char spasm_x86_64_mnemonic_strings_str3[sizeof("vsqrtsd")];
    char spasm_x86_64_mnemonic_strings_str4[sizeof("vpbroadcastw")];
    char spasm_x86_64_mnemonic_strings_str5[sizeof("vpbroadcastd")];
    char spasm_x86_64_mnemonic_strings_str6[sizeof("vpbroadcastq")];
    char spasm_x86_64_mnemonic_strings_str7[sizeof("pmovsxbw")];
    char spasm_x86_64_mnemonic_strings_str8[sizeof("pmovzxbw")];
    char spasm_x86_64_mnemonic_strings_str9[sizeof("pmovsxbd")];
    char spasm_x86_64_mnemonic_strings_str10[sizeof("pmovzxwd")];
    char spasm_x86_64_mnemonic_strings_str11[sizeof("pmovzxbd")];
    char spasm_x86_64_mnemonic_strings_str12[sizeof("pmovsxwd")];
    char spasm_x86_64_mnemonic_strings_str13[sizeof("pmovsxbq")];
    char spasm_x86_64_mnemonic_strings_str14[sizeof("pmovzxwq")];
    char spasm_x86_64_mnemonic_strings_str15[sizeof("pmovzxdq")];
    char spasm_x86_64_mnemonic_strings_str16[sizeof("pmovzxbq")];
    char spasm_x86_64_mnemonic_strings_str17[sizeof("pmovsxwq")];
    char spasm_x86_64_mnemonic_strings_str18[sizeof("pmovsxdq")];
    char spasm_x86_64_mnemonic_strings_str19[sizeof("vmovss")];
    char spasm_x86_64_mnemonic_strings_str20[sizeof("vmovaps")];
    char spasm_x86_64_mnemonic_strings_str21[sizeof("vmovups")];
    char spasm_x86_64_mnemonic_strings_str22[sizeof("vmovlps")];
    char spasm_x86_64_mnemonic_strings_str23[sizeof("vmovhps")];
    char spasm_x86_64_mnemonic_strings_str24[sizeof("vmovhlps")];
    char spasm_x86_64_mnemonic_strings_str25[sizeof("vmovntps")];
    char spasm_x86_64_mnemonic_strings_str26[sizeof("vmovlhps")];
    char spasm_x86_64_mnemonic_strings_str27[sizeof("vmovmskps")];
    char spasm_x86_64_mnemonic_strings_str28[sizeof("vmovd")];
    char spasm_x86_64_mnemonic_strings_str29[sizeof("vmovsd")];
    char spasm_x86_64_mnemonic_strings_str30[sizeof("vmovapd")];
    char spasm_x86_64_mnemonic_strings_str31[sizeof("vmovupd")];
    char spasm_x86_64_mnemonic_strings_str32[sizeof("vmovlpd")];
    char spasm_x86_64_mnemonic_strings_str33[sizeof("vmovhpd")];
    char spasm_x86_64_mnemonic_strings_str34[sizeof("vmovntpd")];
    char spasm_x86_64_mnemonic_strings_str35[sizeof("vmovmskpd")];
    char spasm_x86_64_mnemonic_strings_str36[sizeof("vmovq")];
    char spasm_x86_64_mnemonic_strings_str37[sizeof("vpblendw")];
    char spasm_x86_64_mnemonic_strings_str38[sizeof("vmovntdq")];
    char spasm_x86_64_mnemonic_strings_str39[sizeof("vpblendd")];
    char spasm_x86_64_mnemonic_strings_str40[sizeof("vmovddup")];
    char spasm_x86_64_mnemonic_strings_str41[sizeof("vmovshdup")];
    char spasm_x86_64_mnemonic_strings_str42[sizeof("vmovsldup")];
    char spasm_x86_64_mnemonic_strings_str43[sizeof("pmulhw")];
    char spasm_x86_64_mnemonic_strings_str44[sizeof("pmullw")];
    char spasm_x86_64_mnemonic_strings_str45[sizeof("pmulhuw")];
    char spasm_x86_64_mnemonic_strings_str46[sizeof("pmulhrsw")];
    char spasm_x86_64_mnemonic_strings_str47[sizeof("pmulld")];
    char spasm_x86_64_mnemonic_strings_str48[sizeof("cdq")];
    char spasm_x86_64_mnemonic_strings_str49[sizeof("pmuldq")];
    char spasm_x86_64_mnemonic_strings_str50[sizeof("pmuludq")];
    char spasm_x86_64_mnemonic_strings_str51[sizeof("psubw")];
    char spasm_x86_64_mnemonic_strings_str52[sizeof("psubsw")];
    char spasm_x86_64_mnemonic_strings_str53[sizeof("psubusw")];
    char spasm_x86_64_mnemonic_strings_str54[sizeof("vmulps")];
    char spasm_x86_64_mnemonic_strings_str55[sizeof("vmulss")];
    char spasm_x86_64_mnemonic_strings_str56[sizeof("psubd")];
    char spasm_x86_64_mnemonic_strings_str57[sizeof("vmulpd")];
    char spasm_x86_64_mnemonic_strings_str58[sizeof("vmulsd")];
    char spasm_x86_64_mnemonic_strings_str59[sizeof("psubq")];
    char spasm_x86_64_mnemonic_strings_str60[sizeof("vsubps")];
    char spasm_x86_64_mnemonic_strings_str61[sizeof("vsubss")];
    char spasm_x86_64_mnemonic_strings_str62[sizeof("vsubpd")];
    char spasm_x86_64_mnemonic_strings_str63[sizeof("vsubsd")];
    char spasm_x86_64_mnemonic_strings_str64[sizeof("vpavgw")];
    char spasm_x86_64_mnemonic_strings_str65[sizeof("vpackssdw")];
    char spasm_x86_64_mnemonic_strings_str66[sizeof("vpackusdw")];
    char spasm_x86_64_mnemonic_strings_str67[sizeof("cmovs")];
    char spasm_x86_64_mnemonic_strings_str68[sizeof("cmovns")];
    char spasm_x86_64_mnemonic_strings_str69[sizeof("cmovp")];
    char spasm_x86_64_mnemonic_strings_str70[sizeof("cmovnp")];
    char spasm_x86_64_mnemonic_strings_str71[sizeof("cvtpd2ps")];
    char spasm_x86_64_mnemonic_strings_str72[sizeof("cvtpi2ps")];
    char spasm_x86_64_mnemonic_strings_str73[sizeof("cvtpi2pd")];
    char spasm_x86_64_mnemonic_strings_str74[sizeof("cvtps2pd")];
    char spasm_x86_64_mnemonic_strings_str75[sizeof("vpunpckhbw")];
    char spasm_x86_64_mnemonic_strings_str76[sizeof("vpunpcklbw")];
    char spasm_x86_64_mnemonic_strings_str77[sizeof("cvtpd2dq")];
    char spasm_x86_64_mnemonic_strings_str78[sizeof("cvtps2dq")];
    char spasm_x86_64_mnemonic_strings_str79[sizeof("vpunpckhwd")];
    char spasm_x86_64_mnemonic_strings_str80[sizeof("vpunpcklwd")];
    char spasm_x86_64_mnemonic_strings_str81[sizeof("setp")];
    char spasm_x86_64_mnemonic_strings_str82[sizeof("vpunpckhdq")];
    char spasm_x86_64_mnemonic_strings_str83[sizeof("vpunpckldq")];
    char spasm_x86_64_mnemonic_strings_str84[sizeof("vpunpckhqdq")];
    char spasm_x86_64_mnemonic_strings_str85[sizeof("vpunpcklqdq")];
    char spasm_x86_64_mnemonic_strings_str86[sizeof("vpmovsxbw")];
    char spasm_x86_64_mnemonic_strings_str87[sizeof("vpmovzxbw")];
    char spasm_x86_64_mnemonic_strings_str88[sizeof("vpmovsxbd")];
    char spasm_x86_64_mnemonic_strings_str89[sizeof("vpmovzxwd")];
    char spasm_x86_64_mnemonic_strings_str90[sizeof("vpmovzxbd")];
    char spasm_x86_64_mnemonic_strings_str91[sizeof("vpmovsxwd")];
    char spasm_x86_64_mnemonic_strings_str92[sizeof("vpmovsxbq")];
    char spasm_x86_64_mnemonic_strings_str93[sizeof("vpmovzxwq")];
    char spasm_x86_64_mnemonic_strings_str94[sizeof("vpmovzxdq")];
    char spasm_x86_64_mnemonic_strings_str95[sizeof("vpmovzxbq")];
    char spasm_x86_64_mnemonic_strings_str96[sizeof("vpmovsxwq")];
    char spasm_x86_64_mnemonic_strings_str97[sizeof("vpmovsxdq")];
    char spasm_x86_64_mnemonic_strings_str98[sizeof("vpmulhw")];
    char spasm_x86_64_mnemonic_strings_str99[sizeof("vpmullw")];
    char spasm_x86_64_mnemonic_strings_str100[sizeof("vpmulhuw")];
    char spasm_x86_64_mnemonic_strings_str101[sizeof("vpmulhrsw")];
    char spasm_x86_64_mnemonic_strings_str102[sizeof("vpmulld")];
    char spasm_x86_64_mnemonic_strings_str103[sizeof("vpmuldq")];
    char spasm_x86_64_mnemonic_strings_str104[sizeof("vpmuludq")];
    char spasm_x86_64_mnemonic_strings_str105[sizeof("vpclmulqdq")];
    char spasm_x86_64_mnemonic_strings_str106[sizeof("vpabsw")];
    char spasm_x86_64_mnemonic_strings_str107[sizeof("cqo")];
    char spasm_x86_64_mnemonic_strings_str108[sizeof("vpabsd")];
    char spasm_x86_64_mnemonic_strings_str109[sizeof("psadbw")];
    char spasm_x86_64_mnemonic_strings_str110[sizeof("cmovc")];
    char spasm_x86_64_mnemonic_strings_str111[sizeof("cmovnc")];
    char spasm_x86_64_mnemonic_strings_str112[sizeof("pcmpeqw")];
    char spasm_x86_64_mnemonic_strings_str113[sizeof("pcmpgtw")];
    char spasm_x86_64_mnemonic_strings_str114[sizeof("pcmpeqd")];
    char spasm_x86_64_mnemonic_strings_str115[sizeof("pcmpgtd")];
    char spasm_x86_64_mnemonic_strings_str116[sizeof("pcmpeqq")];
    char spasm_x86_64_mnemonic_strings_str117[sizeof("pcmpgtq")];
    char spasm_x86_64_mnemonic_strings_str118[sizeof("setc")];
    char spasm_x86_64_mnemonic_strings_str119[sizeof("vcmpps")];
    char spasm_x86_64_mnemonic_strings_str120[sizeof("vcmpss")];
    char spasm_x86_64_mnemonic_strings_str121[sizeof("vcmppd")];
    char spasm_x86_64_mnemonic_strings_str122[sizeof("vcmpsd")];
    char spasm_x86_64_mnemonic_strings_str123[sizeof("vpand")];
    char spasm_x86_64_mnemonic_strings_str124[sizeof("vpaddw")];
    char spasm_x86_64_mnemonic_strings_str125[sizeof("vpaddsw")];
    char spasm_x86_64_mnemonic_strings_str126[sizeof("vpaddusw")];
    char spasm_x86_64_mnemonic_strings_str127[sizeof("vpaddd")];
    char spasm_x86_64_mnemonic_strings_str128[sizeof("cmovo")];
    char spasm_x86_64_mnemonic_strings_str129[sizeof("cmovno")];
    char spasm_x86_64_mnemonic_strings_str130[sizeof("cmovpo")];
    char spasm_x86_64_mnemonic_strings_str131[sizeof("vpaddq")];
    char spasm_x86_64_mnemonic_strings_str132[sizeof("cmove")];
    char spasm_x86_64_mnemonic_strings_str133[sizeof("cmovae")];
    char spasm_x86_64_mnemonic_strings_str134[sizeof("cmovpe")];
    char spasm_x86_64_mnemonic_strings_str135[sizeof("cmovne")];
    char spasm_x86_64_mnemonic_strings_str136[sizeof("cmovle")];
    char spasm_x86_64_mnemonic_strings_str137[sizeof("cmovge")];
    char spasm_x86_64_mnemonic_strings_str138[sizeof("cmovbe")];
    char spasm_x86_64_mnemonic_strings_str139[sizeof("cmovnae")];
    char spasm_x86_64_mnemonic_strings_str140[sizeof("cmovnle")];
    char spasm_x86_64_mnemonic_strings_str141[sizeof("cmovnge")];
    char spasm_x86_64_mnemonic_strings_str142[sizeof("cmovnbe")];
    char spasm_x86_64_mnemonic_strings_str143[sizeof("setns")];
    char spasm_x86_64_mnemonic_strings_str144[sizeof("cvtdq2ps")];
    char spasm_x86_64_mnemonic_strings_str145[sizeof("pmaddubsw")];
    char spasm_x86_64_mnemonic_strings_str146[sizeof("vmovdqa")];
    char spasm_x86_64_mnemonic_strings_str147[sizeof("pmaddwd")];
    char spasm_x86_64_mnemonic_strings_str148[sizeof("vmovntdqa")];
    char spasm_x86_64_mnemonic_strings_str149[sizeof("cvtdq2pd")];
    char spasm_x86_64_mnemonic_strings_str150[sizeof("pcmpestrm")];
    char spasm_x86_64_mnemonic_strings_str151[sizeof("pcmpistrm")];
    char spasm_x86_64_mnemonic_strings_str152[sizeof("setpo")];
    char spasm_x86_64_mnemonic_strings_str153[sizeof("seto")];
    char spasm_x86_64_mnemonic_strings_str154[sizeof("setnp")];
    char spasm_x86_64_mnemonic_strings_str155[sizeof("setpe")];
    char spasm_x86_64_mnemonic_strings_str156[sizeof("rsqrtps")];
    char spasm_x86_64_mnemonic_strings_str157[sizeof("rsqrtss")];
    char spasm_x86_64_mnemonic_strings_str158[sizeof("vpbroadcastb")];
    char spasm_x86_64_mnemonic_strings_str159[sizeof("pmovmskb")];
    char spasm_x86_64_mnemonic_strings_str160[sizeof("setle")];
    char spasm_x86_64_mnemonic_strings_str161[sizeof("vdpps")];
    char spasm_x86_64_mnemonic_strings_str162[sizeof("vpblendvb")];
    char spasm_x86_64_mnemonic_strings_str163[sizeof("vdppd")];
    char spasm_x86_64_mnemonic_strings_str164[sizeof("vpor")];
    char spasm_x86_64_mnemonic_strings_str165[sizeof("cmova")];
    char spasm_x86_64_mnemonic_strings_str166[sizeof("cmovna")];
    char spasm_x86_64_mnemonic_strings_str167[sizeof("dec")];
    char spasm_x86_64_mnemonic_strings_str168[sizeof("cmc")];
    char spasm_x86_64_mnemonic_strings_str169[sizeof("psubb")];
    char spasm_x86_64_mnemonic_strings_str170[sizeof("psubsb")];
    char spasm_x86_64_mnemonic_strings_str171[sizeof("psubusb")];
    char spasm_x86_64_mnemonic_strings_str172[sizeof("pand")];
    char spasm_x86_64_mnemonic_strings_str173[sizeof("vroundps")];
    char spasm_x86_64_mnemonic_strings_str174[sizeof("vroundss")];
    char spasm_x86_64_mnemonic_strings_str175[sizeof("vroundpd")];
    char spasm_x86_64_mnemonic_strings_str176[sizeof("vroundsd")];
    char spasm_x86_64_mnemonic_strings_str177[sizeof("vandps")];
    char spasm_x86_64_mnemonic_strings_str178[sizeof("vandnps")];
    char spasm_x86_64_mnemonic_strings_str179[sizeof("setnc")];
    char spasm_x86_64_mnemonic_strings_str180[sizeof("vandpd")];
    char spasm_x86_64_mnemonic_strings_str181[sizeof("vandnpd")];
    char spasm_x86_64_mnemonic_strings_str182[sizeof("setbe")];
    char spasm_x86_64_mnemonic_strings_str183[sizeof("vpavgb")];
    char spasm_x86_64_mnemonic_strings_str184[sizeof("vpacksswb")];
    char spasm_x86_64_mnemonic_strings_str185[sizeof("vpackuswb")];
    char spasm_x86_64_mnemonic_strings_str186[sizeof("cmovb")];
    char spasm_x86_64_mnemonic_strings_str187[sizeof("cmovnb")];
    char spasm_x86_64_mnemonic_strings_str188[sizeof("subps")];
    char spasm_x86_64_mnemonic_strings_str189[sizeof("subpd")];
    char spasm_x86_64_mnemonic_strings_str190[sizeof("setno")];
    char spasm_x86_64_mnemonic_strings_str191[sizeof("ud2")];
    char spasm_x86_64_mnemonic_strings_str192[sizeof("setne")];
    char spasm_x86_64_mnemonic_strings_str193[sizeof("setnae")];
    char spasm_x86_64_mnemonic_strings_str194[sizeof("setnle")];
    char spasm_x86_64_mnemonic_strings_str195[sizeof("setnge")];
    char spasm_x86_64_mnemonic_strings_str196[sizeof("setnbe")];
    char spasm_x86_64_mnemonic_strings_str197[sizeof("hsubps")];
    char spasm_x86_64_mnemonic_strings_str198[sizeof("cwd")];
    char spasm_x86_64_mnemonic_strings_str199[sizeof("vpmaxsw")];
    char spasm_x86_64_mnemonic_strings_str200[sizeof("vpmaxuw")];
    char spasm_x86_64_mnemonic_strings_str201[sizeof("hsubpd")];
    char spasm_x86_64_mnemonic_strings_str202[sizeof("vpmaddubsw")];
    char spasm_x86_64_mnemonic_strings_str203[sizeof("vpmaxsd")];
    char spasm_x86_64_mnemonic_strings_str204[sizeof("vpmaxud")];
    char spasm_x86_64_mnemonic_strings_str205[sizeof("vpmaddwd")];
    char spasm_x86_64_mnemonic_strings_str206[sizeof("vpmaskmovd")];
    char spasm_x86_64_mnemonic_strings_str207[sizeof("punpckhbw")];
    char spasm_x86_64_mnemonic_strings_str208[sizeof("punpcklbw")];
    char spasm_x86_64_mnemonic_strings_str209[sizeof("adc")];
    char spasm_x86_64_mnemonic_strings_str210[sizeof("vpsraw")];
    char spasm_x86_64_mnemonic_strings_str211[sizeof("vpsrlw")];
    char spasm_x86_64_mnemonic_strings_str212[sizeof("vpmaskmovq")];
    char spasm_x86_64_mnemonic_strings_str213[sizeof("punpckhwd")];
    char spasm_x86_64_mnemonic_strings_str214[sizeof("punpcklwd")];
    char spasm_x86_64_mnemonic_strings_str215[sizeof("vpmovmskb")];
    char spasm_x86_64_mnemonic_strings_str216[sizeof("vpsrad")];
    char spasm_x86_64_mnemonic_strings_str217[sizeof("vpsrld")];
    char spasm_x86_64_mnemonic_strings_str218[sizeof("vpsravd")];
    char spasm_x86_64_mnemonic_strings_str219[sizeof("vpsrlvd")];
    char spasm_x86_64_mnemonic_strings_str220[sizeof("punpckhdq")];
    char spasm_x86_64_mnemonic_strings_str221[sizeof("punpckldq")];
    char spasm_x86_64_mnemonic_strings_str222[sizeof("punpckhqdq")];
    char spasm_x86_64_mnemonic_strings_str223[sizeof("punpcklqdq")];
    char spasm_x86_64_mnemonic_strings_str224[sizeof("vpsrlq")];
    char spasm_x86_64_mnemonic_strings_str225[sizeof("vpsrldq")];
    char spasm_x86_64_mnemonic_strings_str226[sizeof("vpsrlvq")];
    char spasm_x86_64_mnemonic_strings_str227[sizeof("sha1rnds4")];
    char spasm_x86_64_mnemonic_strings_str228[sizeof("vunpckhps")];
    char spasm_x86_64_mnemonic_strings_str229[sizeof("vunpcklps")];
    char spasm_x86_64_mnemonic_strings_str230[sizeof("cmp")];
    char spasm_x86_64_mnemonic_strings_str231[sizeof("pop")];
    char spasm_x86_64_mnemonic_strings_str232[sizeof("cmpps")];
    char spasm_x86_64_mnemonic_strings_str233[sizeof("sha1msg1")];
    char spasm_x86_64_mnemonic_strings_str234[sizeof("vunpckhpd")];
    char spasm_x86_64_mnemonic_strings_str235[sizeof("vunpcklpd")];
    char spasm_x86_64_mnemonic_strings_str236[sizeof("dppd")];
    char spasm_x86_64_mnemonic_strings_str237[sizeof("cmppd")];
    char spasm_x86_64_mnemonic_strings_str238[sizeof("sha1msg2")];
    char spasm_x86_64_mnemonic_strings_str239[sizeof("vpsubw")];
    char spasm_x86_64_mnemonic_strings_str240[sizeof("vpsubsw")];
    char spasm_x86_64_mnemonic_strings_str241[sizeof("vpsubusw")];
    char spasm_x86_64_mnemonic_strings_str242[sizeof("vpsubd")];
    char spasm_x86_64_mnemonic_strings_str243[sizeof("psrlw")];
    char spasm_x86_64_mnemonic_strings_str244[sizeof("vrcpps")];
    char spasm_x86_64_mnemonic_strings_str245[sizeof("vrcpss")];
    char spasm_x86_64_mnemonic_strings_str246[sizeof("vpsubq")];
    char spasm_x86_64_mnemonic_strings_str247[sizeof("psrld")];
    char spasm_x86_64_mnemonic_strings_str248[sizeof("js")];
    char spasm_x86_64_mnemonic_strings_str249[sizeof("vmovdqu")];
    char spasm_x86_64_mnemonic_strings_str250[sizeof("vpsllw")];
    char spasm_x86_64_mnemonic_strings_str251[sizeof("psrlq")];
    char spasm_x86_64_mnemonic_strings_str252[sizeof("psrldq")];
    char spasm_x86_64_mnemonic_strings_str253[sizeof("sha256msg1")];
    char spasm_x86_64_mnemonic_strings_str254[sizeof("vpslld")];
    char spasm_x86_64_mnemonic_strings_str255[sizeof("vpsllvd")];
    char spasm_x86_64_mnemonic_strings_str256[sizeof("vpalignr")];
    char spasm_x86_64_mnemonic_strings_str257[sizeof("vpsllq")];
    char spasm_x86_64_mnemonic_strings_str258[sizeof("vpslldq")];
    char spasm_x86_64_mnemonic_strings_str259[sizeof("vpsllvq")];
    char spasm_x86_64_mnemonic_strings_str260[sizeof("vpabsb")];
    char spasm_x86_64_mnemonic_strings_str261[sizeof("sha256msg2")];
    char spasm_x86_64_mnemonic_strings_str262[sizeof("sha256rnds2")];
    char spasm_x86_64_mnemonic_strings_str263[sizeof("setna")];
    char spasm_x86_64_mnemonic_strings_str264[sizeof("vdivps")];
    char spasm_x86_64_mnemonic_strings_str265[sizeof("vdivss")];
    char spasm_x86_64_mnemonic_strings_str266[sizeof("vdivpd")];
    char spasm_x86_64_mnemonic_strings_str267[sizeof("vdivsd")];
    char spasm_x86_64_mnemonic_strings_str268[sizeof("jp")];
    char spasm_x86_64_mnemonic_strings_str269[sizeof("pcmpeqb")];
    char spasm_x86_64_mnemonic_strings_str270[sizeof("pcmpgtb")];
    char spasm_x86_64_mnemonic_strings_str271[sizeof("sbb")];
    char spasm_x86_64_mnemonic_strings_str272[sizeof("setb")];
    char spasm_x86_64_mnemonic_strings_str273[sizeof("pdep")];
    char spasm_x86_64_mnemonic_strings_str274[sizeof("vpermps")];
    char spasm_x86_64_mnemonic_strings_str275[sizeof("vpermilps")];
    char spasm_x86_64_mnemonic_strings_str276[sizeof("vpermd")];
    char spasm_x86_64_mnemonic_strings_str277[sizeof("vpermpd")];
    char spasm_x86_64_mnemonic_strings_str278[sizeof("vpermilpd")];
    char spasm_x86_64_mnemonic_strings_str279[sizeof("vperm2f128")];
    char spasm_x86_64_mnemonic_strings_str280[sizeof("vperm2i128")];
    char spasm_x86_64_mnemonic_strings_str281[sizeof("vpermq")];
    char spasm_x86_64_mnemonic_strings_str282[sizeof("vpaddb")];
    char spasm_x86_64_mnemonic_strings_str283[sizeof("vpaddsb")];
    char spasm_x86_64_mnemonic_strings_str284[sizeof("vpaddusb")];
    char spasm_x86_64_mnemonic_strings_str285[sizeof("pshufhw")];
    char spasm_x86_64_mnemonic_strings_str286[sizeof("pshuflw")];
    char spasm_x86_64_mnemonic_strings_str287[sizeof("pshufd")];
    char spasm_x86_64_mnemonic_strings_str288[sizeof("add")];
    char spasm_x86_64_mnemonic_strings_str289[sizeof("setnb")];
    char spasm_x86_64_mnemonic_strings_str290[sizeof("vshufps")];
    char spasm_x86_64_mnemonic_strings_str291[sizeof("setae")];
    char spasm_x86_64_mnemonic_strings_str292[sizeof("addps")];
    char spasm_x86_64_mnemonic_strings_str293[sizeof("vshufpd")];
    char spasm_x86_64_mnemonic_strings_str294[sizeof("addpd")];
    char spasm_x86_64_mnemonic_strings_str295[sizeof("crc32")];
    char spasm_x86_64_mnemonic_strings_str296[sizeof("cdqe")];
    char spasm_x86_64_mnemonic_strings_str297[sizeof("roundps")];
    char spasm_x86_64_mnemonic_strings_str298[sizeof("roundss")];
    char spasm_x86_64_mnemonic_strings_str299[sizeof("cvttpd2dq")];
    char spasm_x86_64_mnemonic_strings_str300[sizeof("cvttps2dq")];
    char spasm_x86_64_mnemonic_strings_str301[sizeof("roundpd")];
    char spasm_x86_64_mnemonic_strings_str302[sizeof("roundsd")];
    char spasm_x86_64_mnemonic_strings_str303[sizeof("phaddw")];
    char spasm_x86_64_mnemonic_strings_str304[sizeof("phaddsw")];
    char spasm_x86_64_mnemonic_strings_str305[sizeof("vucomiss")];
    char spasm_x86_64_mnemonic_strings_str306[sizeof("phaddd")];
    char spasm_x86_64_mnemonic_strings_str307[sizeof("cvtsd2ss")];
    char spasm_x86_64_mnemonic_strings_str308[sizeof("cvtsi2ss")];
    char spasm_x86_64_mnemonic_strings_str309[sizeof("sets")];
    char spasm_x86_64_mnemonic_strings_str310[sizeof("vucomisd")];
    char spasm_x86_64_mnemonic_strings_str311[sizeof("sha1nexte")];
    char spasm_x86_64_mnemonic_strings_str312[sizeof("cvtsi2sd")];
    char spasm_x86_64_mnemonic_strings_str313[sizeof("cvtss2sd")];
    char spasm_x86_64_mnemonic_strings_str314[sizeof("vorps")];
    char spasm_x86_64_mnemonic_strings_str315[sizeof("vhaddps")];
    char spasm_x86_64_mnemonic_strings_str316[sizeof("vorpd")];
    char spasm_x86_64_mnemonic_strings_str317[sizeof("vhaddpd")];
    char spasm_x86_64_mnemonic_strings_str318[sizeof("vmaskmovps")];
    char spasm_x86_64_mnemonic_strings_str319[sizeof("vmaskmovpd")];
    char spasm_x86_64_mnemonic_strings_str320[sizeof("cpuid")];
    char spasm_x86_64_mnemonic_strings_str321[sizeof("setge")];
    char spasm_x86_64_mnemonic_strings_str322[sizeof("sete")];
    char spasm_x86_64_mnemonic_strings_str323[sizeof("seta")];
    char spasm_x86_64_mnemonic_strings_str324[sizeof("cmovg")];
    char spasm_x86_64_mnemonic_strings_str325[sizeof("cmovng")];
    char spasm_x86_64_mnemonic_strings_str326[sizeof("jpo")];
    char spasm_x86_64_mnemonic_strings_str327[sizeof("vpinsrw")];
    char spasm_x86_64_mnemonic_strings_str328[sizeof("vpinsrd")];
    char spasm_x86_64_mnemonic_strings_str329[sizeof("stc")];
    char spasm_x86_64_mnemonic_strings_str330[sizeof("pabsw")];
    char spasm_x86_64_mnemonic_strings_str331[sizeof("vpinsrq")];
    char spasm_x86_64_mnemonic_strings_str332[sizeof("minps")];
    char spasm_x86_64_mnemonic_strings_str333[sizeof("pabsd")];
    char spasm_x86_64_mnemonic_strings_str334[sizeof("pminsw")];
    char spasm_x86_64_mnemonic_strings_str335[sizeof("pminuw")];
    char spasm_x86_64_mnemonic_strings_str336[sizeof("sub")];
    char spasm_x86_64_mnemonic_strings_str337[sizeof("minpd")];
    char spasm_x86_64_mnemonic_strings_str338[sizeof("pminsd")];
    char spasm_x86_64_mnemonic_strings_str339[sizeof("pminud")];
    char spasm_x86_64_mnemonic_strings_str340[sizeof("cmovz")];
    char spasm_x86_64_mnemonic_strings_str341[sizeof("cmovnz")];
    char spasm_x86_64_mnemonic_strings_str342[sizeof("vpminsw")];
    char spasm_x86_64_mnemonic_strings_str343[sizeof("vpminuw")];
    char spasm_x86_64_mnemonic_strings_str344[sizeof("vminps")];
    char spasm_x86_64_mnemonic_strings_str345[sizeof("vminss")];
    char spasm_x86_64_mnemonic_strings_str346[sizeof("setz")];
    char spasm_x86_64_mnemonic_strings_str347[sizeof("vpminsd")];
    char spasm_x86_64_mnemonic_strings_str348[sizeof("vpminud")];
    char spasm_x86_64_mnemonic_strings_str349[sizeof("vminpd")];
    char spasm_x86_64_mnemonic_strings_str350[sizeof("vminsd")];
    char spasm_x86_64_mnemonic_strings_str351[sizeof("jc")];
    char spasm_x86_64_mnemonic_strings_str352[sizeof("vpmaxsb")];
    char spasm_x86_64_mnemonic_strings_str353[sizeof("vpmaxub")];
    char spasm_x86_64_mnemonic_strings_str354[sizeof("paddw")];
    char spasm_x86_64_mnemonic_strings_str355[sizeof("paddsw")];
    char spasm_x86_64_mnemonic_strings_str356[sizeof("paddusw")];
    char spasm_x86_64_mnemonic_strings_str357[sizeof("psraw")];
    char spasm_x86_64_mnemonic_strings_str358[sizeof("paddd")];
    char spasm_x86_64_mnemonic_strings_str359[sizeof("psrad")];
    char spasm_x86_64_mnemonic_strings_str360[sizeof("paddq")];
    char spasm_x86_64_mnemonic_strings_str361[sizeof("vpsadbw")];
    char spasm_x86_64_mnemonic_strings_str362[sizeof("vaddps")];
    char spasm_x86_64_mnemonic_strings_str363[sizeof("vaddss")];
    char spasm_x86_64_mnemonic_strings_str364[sizeof("vaddsubps")];
    char spasm_x86_64_mnemonic_strings_str365[sizeof("vaddpd")];
    char spasm_x86_64_mnemonic_strings_str366[sizeof("vaddsd")];
    char spasm_x86_64_mnemonic_strings_str367[sizeof("vaddsubpd")];
    char spasm_x86_64_mnemonic_strings_str368[sizeof("psllw")];
    char spasm_x86_64_mnemonic_strings_str369[sizeof("mpsadbw")];
    char spasm_x86_64_mnemonic_strings_str370[sizeof("pslld")];
    char spasm_x86_64_mnemonic_strings_str371[sizeof("rcpps")];
    char spasm_x86_64_mnemonic_strings_str372[sizeof("psllq")];
    char spasm_x86_64_mnemonic_strings_str373[sizeof("pslldq")];
    char spasm_x86_64_mnemonic_strings_str374[sizeof("emms")];
    char spasm_x86_64_mnemonic_strings_str375[sizeof("vbroadcastss")];
    char spasm_x86_64_mnemonic_strings_str376[sizeof("vpsubb")];
    char spasm_x86_64_mnemonic_strings_str377[sizeof("vpsubsb")];
    char spasm_x86_64_mnemonic_strings_str378[sizeof("vpsubusb")];
    char spasm_x86_64_mnemonic_strings_str379[sizeof("vbroadcastsd")];
    char spasm_x86_64_mnemonic_strings_str380[sizeof("or")];
    char spasm_x86_64_mnemonic_strings_str381[sizeof("vbroadcastf128")];
    char spasm_x86_64_mnemonic_strings_str382[sizeof("vbroadcasti128")];
    char spasm_x86_64_mnemonic_strings_str383[sizeof("jo")];
    char spasm_x86_64_mnemonic_strings_str384[sizeof("dpps")];
    char spasm_x86_64_mnemonic_strings_str385[sizeof("je")];
    char spasm_x86_64_mnemonic_strings_str386[sizeof("std")];
    char spasm_x86_64_mnemonic_strings_str387[sizeof("vfmadd132ps")];
    char spasm_x86_64_mnemonic_strings_str388[sizeof("vfmadd231ss")];
    char spasm_x86_64_mnemonic_strings_str389[sizeof("vfmadd231ps")];
    char spasm_x86_64_mnemonic_strings_str390[sizeof("vfmadd213ss")];
    char spasm_x86_64_mnemonic_strings_str391[sizeof("vfmadd213ps")];
    char spasm_x86_64_mnemonic_strings_str392[sizeof("vfmadd132ss")];
    char spasm_x86_64_mnemonic_strings_str393[sizeof("vfmaddsub132ps")];
    char spasm_x86_64_mnemonic_strings_str394[sizeof("vfmaddsub231ps")];
    char spasm_x86_64_mnemonic_strings_str395[sizeof("vfmaddsub213ps")];
    char spasm_x86_64_mnemonic_strings_str396[sizeof("vfmadd132pd")];
    char spasm_x86_64_mnemonic_strings_str397[sizeof("vfmadd231sd")];
    char spasm_x86_64_mnemonic_strings_str398[sizeof("vfmadd231pd")];
    char spasm_x86_64_mnemonic_strings_str399[sizeof("vfmadd213sd")];
    char spasm_x86_64_mnemonic_strings_str400[sizeof("vfmadd213pd")];
    char spasm_x86_64_mnemonic_strings_str401[sizeof("vfmadd132sd")];
    char spasm_x86_64_mnemonic_strings_str402[sizeof("vfmaddsub132pd")];
    char spasm_x86_64_mnemonic_strings_str403[sizeof("vfmaddsub231pd")];
    char spasm_x86_64_mnemonic_strings_str404[sizeof("vfmaddsub213pd")];
    char spasm_x86_64_mnemonic_strings_str405[sizeof("setng")];
    char spasm_x86_64_mnemonic_strings_str406[sizeof("phsubw")];
    char spasm_x86_64_mnemonic_strings_str407[sizeof("phsubsw")];
    char spasm_x86_64_mnemonic_strings_str408[sizeof("maxps")];
    char spasm_x86_64_mnemonic_strings_str409[sizeof("phsubd")];
    char spasm_x86_64_mnemonic_strings_str410[sizeof("rdtscp")];
    char spasm_x86_64_mnemonic_strings_str411[sizeof("maxpd")];
    char spasm_x86_64_mnemonic_strings_str412[sizeof("pause")];
    char spasm_x86_64_mnemonic_strings_str413[sizeof("vhsubps")];
    char spasm_x86_64_mnemonic_strings_str414[sizeof("vhsubpd")];
    char spasm_x86_64_mnemonic_strings_str415[sizeof("pshufb")];
    char spasm_x86_64_mnemonic_strings_str416[sizeof("vphaddw")];
    char spasm_x86_64_mnemonic_strings_str417[sizeof("vphaddsw")];
    char spasm_x86_64_mnemonic_strings_str418[sizeof("vcomiss")];
    char spasm_x86_64_mnemonic_strings_str419[sizeof("vphaddd")];
    char spasm_x86_64_mnemonic_strings_str420[sizeof("setnz")];
    char spasm_x86_64_mnemonic_strings_str421[sizeof("vcomisd")];
    char spasm_x86_64_mnemonic_strings_str422[sizeof("vmpsadbw")];
    char spasm_x86_64_mnemonic_strings_str423[sizeof("shufps")];
    char spasm_x86_64_mnemonic_strings_str424[sizeof("psignw")];
    char spasm_x86_64_mnemonic_strings_str425[sizeof("shufpd")];
    char spasm_x86_64_mnemonic_strings_str426[sizeof("psignd")];
    char spasm_x86_64_mnemonic_strings_str427[sizeof("vxorps")];
    char spasm_x86_64_mnemonic_strings_str428[sizeof("vptest")];
    char spasm_x86_64_mnemonic_strings_str429[sizeof("subss")];
    char spasm_x86_64_mnemonic_strings_str430[sizeof("vxorpd")];
    char spasm_x86_64_mnemonic_strings_str431[sizeof("subsd")];
    char spasm_x86_64_mnemonic_strings_str432[sizeof("sqrtps")];
    char spasm_x86_64_mnemonic_strings_str433[sizeof("sqrtss")];
    char spasm_x86_64_mnemonic_strings_str434[sizeof("sqrtpd")];
    char spasm_x86_64_mnemonic_strings_str435[sizeof("sqrtsd")];
    char spasm_x86_64_mnemonic_strings_str436[sizeof("vpcmpeqw")];
    char spasm_x86_64_mnemonic_strings_str437[sizeof("vpcmpgtw")];
    char spasm_x86_64_mnemonic_strings_str438[sizeof("vpcmpeqd")];
    char spasm_x86_64_mnemonic_strings_str439[sizeof("vpcmpgtd")];
    char spasm_x86_64_mnemonic_strings_str440[sizeof("pcmpestri")];
    char spasm_x86_64_mnemonic_strings_str441[sizeof("pcmpistri")];
    char spasm_x86_64_mnemonic_strings_str442[sizeof("vpcmpeqq")];
    char spasm_x86_64_mnemonic_strings_str443[sizeof("vpcmpgtq")];
    char spasm_x86_64_mnemonic_strings_str444[sizeof("jmp")];
    char spasm_x86_64_mnemonic_strings_str445[sizeof("comiss")];
    char spasm_x86_64_mnemonic_strings_str446[sizeof("comisd")];
    char spasm_x86_64_mnemonic_strings_str447[sizeof("pmaxsw")];
    char spasm_x86_64_mnemonic_strings_str448[sizeof("pmaxuw")];
    char spasm_x86_64_mnemonic_strings_str449[sizeof("rdtsc")];
    char spasm_x86_64_mnemonic_strings_str450[sizeof("pmaxsd")];
    char spasm_x86_64_mnemonic_strings_str451[sizeof("pmaxud")];
    char spasm_x86_64_mnemonic_strings_str452[sizeof("por")];
    char spasm_x86_64_mnemonic_strings_str453[sizeof("cmovl")];
    char spasm_x86_64_mnemonic_strings_str454[sizeof("cmovnl")];
    char spasm_x86_64_mnemonic_strings_str455[sizeof("cmpss")];
    char spasm_x86_64_mnemonic_strings_str456[sizeof("vpxor")];
    char spasm_x86_64_mnemonic_strings_str457[sizeof("vmaxps")];
    char spasm_x86_64_mnemonic_strings_str458[sizeof("vmaxss")];
    char spasm_x86_64_mnemonic_strings_str459[sizeof("cmpsd")];
    char spasm_x86_64_mnemonic_strings_str460[sizeof("popcnt")];
    char spasm_x86_64_mnemonic_strings_str461[sizeof("vmaxpd")];
    char spasm_x86_64_mnemonic_strings_str462[sizeof("vmaxsd")];
    char spasm_x86_64_mnemonic_strings_str463[sizeof("orpd")];
    char spasm_x86_64_mnemonic_strings_str464[sizeof("vpcmpestrm")];
    char spasm_x86_64_mnemonic_strings_str465[sizeof("vpcmpistrm")];
    char spasm_x86_64_mnemonic_strings_str466[sizeof("ret")];
    char spasm_x86_64_mnemonic_strings_str467[sizeof("shrd")];
    char spasm_x86_64_mnemonic_strings_str468[sizeof("cwde")];
    char spasm_x86_64_mnemonic_strings_str469[sizeof("vpgatherdd")];
    char spasm_x86_64_mnemonic_strings_str470[sizeof("vpgatherqd")];
    char spasm_x86_64_mnemonic_strings_str471[sizeof("vpinsrb")];
    char spasm_x86_64_mnemonic_strings_str472[sizeof("vpgatherdq")];
    char spasm_x86_64_mnemonic_strings_str473[sizeof("vpgatherqq")];
    char spasm_x86_64_mnemonic_strings_str474[sizeof("ja")];
    char spasm_x86_64_mnemonic_strings_str475[sizeof("btc")];
    char spasm_x86_64_mnemonic_strings_str476[sizeof("pabsb")];
    char spasm_x86_64_mnemonic_strings_str477[sizeof("bsf")];
    char spasm_x86_64_mnemonic_strings_str478[sizeof("pminsb")];
    char spasm_x86_64_mnemonic_strings_str479[sizeof("pminub")];
    char spasm_x86_64_mnemonic_strings_str480[sizeof("vfmsub132ps")];
    char spasm_x86_64_mnemonic_strings_str481[sizeof("vfmsub231ss")];
    char spasm_x86_64_mnemonic_strings_str482[sizeof("vfmsub231ps")];
    char spasm_x86_64_mnemonic_strings_str483[sizeof("vfmsub213ss")];
    char spasm_x86_64_mnemonic_strings_str484[sizeof("vfmsub213ps")];
    char spasm_x86_64_mnemonic_strings_str485[sizeof("vfmsub132ss")];
    char spasm_x86_64_mnemonic_strings_str486[sizeof("setl")];
    char spasm_x86_64_mnemonic_strings_str487[sizeof("vfmsubadd132ps")];
    char spasm_x86_64_mnemonic_strings_str488[sizeof("vfmsubadd231ps")];
    char spasm_x86_64_mnemonic_strings_str489[sizeof("vfmsubadd213ps")];
    char spasm_x86_64_mnemonic_strings_str490[sizeof("vfmsub132pd")];
    char spasm_x86_64_mnemonic_strings_str491[sizeof("vfmsub231sd")];
    char spasm_x86_64_mnemonic_strings_str492[sizeof("vfmsub231pd")];
    char spasm_x86_64_mnemonic_strings_str493[sizeof("vfmsub213sd")];
    char spasm_x86_64_mnemonic_strings_str494[sizeof("vfmsub213pd")];
    char spasm_x86_64_mnemonic_strings_str495[sizeof("vfmsub132sd")];
    char spasm_x86_64_mnemonic_strings_str496[sizeof("vpminsb")];
    char spasm_x86_64_mnemonic_strings_str497[sizeof("vpminub")];
    char spasm_x86_64_mnemonic_strings_str498[sizeof("vfmsubadd132pd")];
    char spasm_x86_64_mnemonic_strings_str499[sizeof("vfmsubadd231pd")];
    char spasm_x86_64_mnemonic_strings_str500[sizeof("vfmsubadd213pd")];
    char spasm_x86_64_mnemonic_strings_str501[sizeof("vpandn")];
    char spasm_x86_64_mnemonic_strings_str502[sizeof("sar")];
    char spasm_x86_64_mnemonic_strings_str503[sizeof("vpsignw")];
    char spasm_x86_64_mnemonic_strings_str504[sizeof("vpsignd")];
    char spasm_x86_64_mnemonic_strings_str505[sizeof("paddb")];
    char spasm_x86_64_mnemonic_strings_str506[sizeof("paddsb")];
    char spasm_x86_64_mnemonic_strings_str507[sizeof("paddusb")];
    char spasm_x86_64_mnemonic_strings_str508[sizeof("extractps")];
    char spasm_x86_64_mnemonic_strings_str509[sizeof("extrq")];
    char spasm_x86_64_mnemonic_strings_str510[sizeof("vphsubw")];
    char spasm_x86_64_mnemonic_strings_str511[sizeof("vphsubsw")];
    char spasm_x86_64_mnemonic_strings_str512[sizeof("vphsubd")];
    char spasm_x86_64_mnemonic_strings_str513[sizeof("setg")];
    char spasm_x86_64_mnemonic_strings_str514[sizeof("addss")];
    char spasm_x86_64_mnemonic_strings_str515[sizeof("phminposuw")];
    char spasm_x86_64_mnemonic_strings_str516[sizeof("addsubps")];
    char spasm_x86_64_mnemonic_strings_str517[sizeof("addsd")];
    char spasm_x86_64_mnemonic_strings_str518[sizeof("addsubpd")];
    char spasm_x86_64_mnemonic_strings_str519[sizeof("aesdec")];
    char spasm_x86_64_mnemonic_strings_str520[sizeof("mov")];
    char spasm_x86_64_mnemonic_strings_str521[sizeof("bsr")];
    char spasm_x86_64_mnemonic_strings_str522[sizeof("movups")];
    char spasm_x86_64_mnemonic_strings_str523[sizeof("monitor")];
    char spasm_x86_64_mnemonic_strings_str524[sizeof("movupd")];
    char spasm_x86_64_mnemonic_strings_str525[sizeof("rdrand")];
    char spasm_x86_64_mnemonic_strings_str526[sizeof("vmaskmovdqu")];
    char spasm_x86_64_mnemonic_strings_str527[sizeof("jb")];
    char spasm_x86_64_mnemonic_strings_str528[sizeof("movlps")];
    char spasm_x86_64_mnemonic_strings_str529[sizeof("movlhps")];
    char spasm_x86_64_mnemonic_strings_str530[sizeof("haddps")];
    char spasm_x86_64_mnemonic_strings_str531[sizeof("movlpd")];
    char spasm_x86_64_mnemonic_strings_str532[sizeof("setnl")];
    char spasm_x86_64_mnemonic_strings_str533[sizeof("haddpd")];
    char spasm_x86_64_mnemonic_strings_str534[sizeof("vgatherdps")];
    char spasm_x86_64_mnemonic_strings_str535[sizeof("vgatherqps")];
    char spasm_x86_64_mnemonic_strings_str536[sizeof("vgatherdpd")];
    char spasm_x86_64_mnemonic_strings_str537[sizeof("vgatherqpd")];
    char spasm_x86_64_mnemonic_strings_str538[sizeof("vstmxcsr")];
    char spasm_x86_64_mnemonic_strings_str539[sizeof("pandn")];
    char spasm_x86_64_mnemonic_strings_str540[sizeof("vpshufhw")];
    char spasm_x86_64_mnemonic_strings_str541[sizeof("vpshuflw")];
    char spasm_x86_64_mnemonic_strings_str542[sizeof("vpshufd")];
    char spasm_x86_64_mnemonic_strings_str543[sizeof("pinsrw")];
    char spasm_x86_64_mnemonic_strings_str544[sizeof("vfnmadd132ps")];
    char spasm_x86_64_mnemonic_strings_str545[sizeof("vfnmsub231ss")];
    char spasm_x86_64_mnemonic_strings_str546[sizeof("vfnmsub231ps")];
    char spasm_x86_64_mnemonic_strings_str547[sizeof("vfnmsub213ss")];
    char spasm_x86_64_mnemonic_strings_str548[sizeof("vfnmsub213ps")];
    char spasm_x86_64_mnemonic_strings_str549[sizeof("vfnmsub132ss")];
    char spasm_x86_64_mnemonic_strings_str550[sizeof("vfnmsub132ps")];
    char spasm_x86_64_mnemonic_strings_str551[sizeof("vfnmadd231ss")];
    char spasm_x86_64_mnemonic_strings_str552[sizeof("vfnmadd231ps")];
    char spasm_x86_64_mnemonic_strings_str553[sizeof("vfnmadd213ss")];
    char spasm_x86_64_mnemonic_strings_str554[sizeof("vfnmadd213ps")];
    char spasm_x86_64_mnemonic_strings_str555[sizeof("vfnmadd132ss")];
    char spasm_x86_64_mnemonic_strings_str556[sizeof("clc")];
    char spasm_x86_64_mnemonic_strings_str557[sizeof("pinsrd")];
    char spasm_x86_64_mnemonic_strings_str558[sizeof("vfnmadd132pd")];
    char spasm_x86_64_mnemonic_strings_str559[sizeof("vfnmsub231sd")];
    char spasm_x86_64_mnemonic_strings_str560[sizeof("vfnmsub231pd")];
    char spasm_x86_64_mnemonic_strings_str561[sizeof("vfnmsub213sd")];
    char spasm_x86_64_mnemonic_strings_str562[sizeof("vfnmsub213pd")];
    char spasm_x86_64_mnemonic_strings_str563[sizeof("vfnmsub132sd")];
    char spasm_x86_64_mnemonic_strings_str564[sizeof("vfnmsub132pd")];
    char spasm_x86_64_mnemonic_strings_str565[sizeof("vfnmadd231sd")];
    char spasm_x86_64_mnemonic_strings_str566[sizeof("vfnmadd231pd")];
    char spasm_x86_64_mnemonic_strings_str567[sizeof("vfnmadd213sd")];
    char spasm_x86_64_mnemonic_strings_str568[sizeof("vfnmadd213pd")];
    char spasm_x86_64_mnemonic_strings_str569[sizeof("vfnmadd132sd")];
    char spasm_x86_64_mnemonic_strings_str570[sizeof("vrsqrtps")];
    char spasm_x86_64_mnemonic_strings_str571[sizeof("vrsqrtss")];
    char spasm_x86_64_mnemonic_strings_str572[sizeof("pinsrq")];
    char spasm_x86_64_mnemonic_strings_str573[sizeof("rdseed")];
    char spasm_x86_64_mnemonic_strings_str574[sizeof("shr")];
    char spasm_x86_64_mnemonic_strings_str575[sizeof("cbw")];
    char spasm_x86_64_mnemonic_strings_str576[sizeof("vinsertps")];
    char spasm_x86_64_mnemonic_strings_str577[sizeof("mwait")];
    char spasm_x86_64_mnemonic_strings_str578[sizeof("pextrw")];
    char spasm_x86_64_mnemonic_strings_str579[sizeof("vinsertf128")];
    char spasm_x86_64_mnemonic_strings_str580[sizeof("vinserti128")];
    char spasm_x86_64_mnemonic_strings_str581[sizeof("pextrd")];
    char spasm_x86_64_mnemonic_strings_str582[sizeof("minss")];
    char spasm_x86_64_mnemonic_strings_str583[sizeof("psignb")];
    char spasm_x86_64_mnemonic_strings_str584[sizeof("pextrq")];
    char spasm_x86_64_mnemonic_strings_str585[sizeof("minsd")];
    char spasm_x86_64_mnemonic_strings_str586[sizeof("bts")];
    char spasm_x86_64_mnemonic_strings_str587[sizeof("sfence")];
    char spasm_x86_64_mnemonic_strings_str588[sizeof("packssdw")];
    char spasm_x86_64_mnemonic_strings_str589[sizeof("packusdw")];
    char spasm_x86_64_mnemonic_strings_str590[sizeof("vextractps")];
    char spasm_x86_64_mnemonic_strings_str591[sizeof("vextractf128")];
    char spasm_x86_64_mnemonic_strings_str592[sizeof("vextracti128")];
    char spasm_x86_64_mnemonic_strings_str593[sizeof("movntps")];
    char spasm_x86_64_mnemonic_strings_str594[sizeof("movntss")];
    char spasm_x86_64_mnemonic_strings_str595[sizeof("idiv")];
    char spasm_x86_64_mnemonic_strings_str596[sizeof("bt")];
    char spasm_x86_64_mnemonic_strings_str597[sizeof("movntpd")];
    char spasm_x86_64_mnemonic_strings_str598[sizeof("movntsd")];
    char spasm_x86_64_mnemonic_strings_str599[sizeof("movd")];
    char spasm_x86_64_mnemonic_strings_str600[sizeof("vpcmpeqb")];
    char spasm_x86_64_mnemonic_strings_str601[sizeof("vpcmpgtb")];
    char spasm_x86_64_mnemonic_strings_str602[sizeof("movntdq")];
    char spasm_x86_64_mnemonic_strings_str603[sizeof("nop")];
    char spasm_x86_64_mnemonic_strings_str604[sizeof("movddup")];
    char spasm_x86_64_mnemonic_strings_str605[sizeof("mulps")];
    char spasm_x86_64_mnemonic_strings_str606[sizeof("pxor")];
    char spasm_x86_64_mnemonic_strings_str607[sizeof("jpe")];
    char spasm_x86_64_mnemonic_strings_str608[sizeof("pmaxsb")];
    char spasm_x86_64_mnemonic_strings_str609[sizeof("pmaxub")];
    char spasm_x86_64_mnemonic_strings_str610[sizeof("mulpd")];
    char spasm_x86_64_mnemonic_strings_str611[sizeof("mfence")];
    char spasm_x86_64_mnemonic_strings_str612[sizeof("shld")];
    char spasm_x86_64_mnemonic_strings_str613[sizeof("rcr")];
    char spasm_x86_64_mnemonic_strings_str614[sizeof("rcpss")];
    char spasm_x86_64_mnemonic_strings_str615[sizeof("cld")];
    char spasm_x86_64_mnemonic_strings_str616[sizeof("cvttsd2si")];
    char spasm_x86_64_mnemonic_strings_str617[sizeof("cvttss2si")];
    char spasm_x86_64_mnemonic_strings_str618[sizeof("lea")];
    char spasm_x86_64_mnemonic_strings_str619[sizeof("ror")];
    char spasm_x86_64_mnemonic_strings_str620[sizeof("orps")];
    char spasm_x86_64_mnemonic_strings_str621[sizeof("cvtsd2si")];
    char spasm_x86_64_mnemonic_strings_str622[sizeof("cvtss2si")];
    char spasm_x86_64_mnemonic_strings_str623[sizeof("ucomiss")];
    char spasm_x86_64_mnemonic_strings_str624[sizeof("ucomisd")];
    char spasm_x86_64_mnemonic_strings_str625[sizeof("aesenc")];
    char spasm_x86_64_mnemonic_strings_str626[sizeof("maxss")];
    char spasm_x86_64_mnemonic_strings_str627[sizeof("movbe")];
    char spasm_x86_64_mnemonic_strings_str628[sizeof("maxsd")];
    char spasm_x86_64_mnemonic_strings_str629[sizeof("vpsignb")];
    char spasm_x86_64_mnemonic_strings_str630[sizeof("and")];
    char spasm_x86_64_mnemonic_strings_str631[sizeof("vphminposuw")];
    char spasm_x86_64_mnemonic_strings_str632[sizeof("andps")];
    char spasm_x86_64_mnemonic_strings_str633[sizeof("movaps")];
    char spasm_x86_64_mnemonic_strings_str634[sizeof("andpd")];
    char spasm_x86_64_mnemonic_strings_str635[sizeof("movapd")];
    char spasm_x86_64_mnemonic_strings_str636[sizeof("vpextrw")];
    char spasm_x86_64_mnemonic_strings_str637[sizeof("vpextrd")];
    char spasm_x86_64_mnemonic_strings_str638[sizeof("bswap")];
    char spasm_x86_64_mnemonic_strings_str639[sizeof("not")];
    char spasm_x86_64_mnemonic_strings_str640[sizeof("vpextrq")];
    char spasm_x86_64_mnemonic_strings_str641[sizeof("vaesdec")];
    char spasm_x86_64_mnemonic_strings_str642[sizeof("vaesimc")];
    char spasm_x86_64_mnemonic_strings_str643[sizeof("vaesenc")];
    char spasm_x86_64_mnemonic_strings_str644[sizeof("femms")];
    char spasm_x86_64_mnemonic_strings_str645[sizeof("pblendw")];
    char spasm_x86_64_mnemonic_strings_str646[sizeof("movq")];
    char spasm_x86_64_mnemonic_strings_str647[sizeof("clzero")];
    char spasm_x86_64_mnemonic_strings_str648[sizeof("vblendps")];
    char spasm_x86_64_mnemonic_strings_str649[sizeof("vblendvps")];
    char spasm_x86_64_mnemonic_strings_str650[sizeof("prefetchw")];
    char spasm_x86_64_mnemonic_strings_str651[sizeof("prefetcht0")];
    char spasm_x86_64_mnemonic_strings_str652[sizeof("vblendpd")];
    char spasm_x86_64_mnemonic_strings_str653[sizeof("vblendvpd")];
    char spasm_x86_64_mnemonic_strings_str654[sizeof("jno")];
    char spasm_x86_64_mnemonic_strings_str655[sizeof("vpshufb")];
    char spasm_x86_64_mnemonic_strings_str656[sizeof("prefetcht1")];
    char spasm_x86_64_mnemonic_strings_str657[sizeof("prefetchwt1")];
    char spasm_x86_64_mnemonic_strings_str658[sizeof("pinsrb")];
    char spasm_x86_64_mnemonic_strings_str659[sizeof("movntdqa")];
    char spasm_x86_64_mnemonic_strings_str660[sizeof("movdqa")];
    char spasm_x86_64_mnemonic_strings_str661[sizeof("prefetcht2")];
    char spasm_x86_64_mnemonic_strings_str662[sizeof("aesdeclast")];
    char spasm_x86_64_mnemonic_strings_str663[sizeof("jae")];
    char spasm_x86_64_mnemonic_strings_str664[sizeof("vcvtdq2ps")];
    char spasm_x86_64_mnemonic_strings_str665[sizeof("vcvtsi2ss")];
    char spasm_x86_64_mnemonic_strings_str666[sizeof("vcvtsd2ss")];
    char spasm_x86_64_mnemonic_strings_str667[sizeof("vcvtph2ps")];
    char spasm_x86_64_mnemonic_strings_str668[sizeof("vcvtpd2ps")];
    char spasm_x86_64_mnemonic_strings_str669[sizeof("pextrb")];
    char spasm_x86_64_mnemonic_strings_str670[sizeof("vcvtdq2pd")];
    char spasm_x86_64_mnemonic_strings_str671[sizeof("vcvtss2sd")];
    char spasm_x86_64_mnemonic_strings_str672[sizeof("vcvtsi2sd")];
    char spasm_x86_64_mnemonic_strings_str673[sizeof("vcvtps2pd")];
    char spasm_x86_64_mnemonic_strings_str674[sizeof("vcvtpd2dq")];
    char spasm_x86_64_mnemonic_strings_str675[sizeof("vcvtps2dq")];
    char spasm_x86_64_mnemonic_strings_str676[sizeof("vcvttpd2dq")];
    char spasm_x86_64_mnemonic_strings_str677[sizeof("vcvttps2dq")];
    char spasm_x86_64_mnemonic_strings_str678[sizeof("vzeroupper")];
    char spasm_x86_64_mnemonic_strings_str679[sizeof("andnps")];
    char spasm_x86_64_mnemonic_strings_str680[sizeof("packsswb")];
    char spasm_x86_64_mnemonic_strings_str681[sizeof("packuswb")];
    char spasm_x86_64_mnemonic_strings_str682[sizeof("pavgw")];
    char spasm_x86_64_mnemonic_strings_str683[sizeof("andnpd")];
    char spasm_x86_64_mnemonic_strings_str684[sizeof("aesimc")];
    char spasm_x86_64_mnemonic_strings_str685[sizeof("xorps")];
    char spasm_x86_64_mnemonic_strings_str686[sizeof("xorpd")];
    char spasm_x86_64_mnemonic_strings_str687[sizeof("vtestps")];
    char spasm_x86_64_mnemonic_strings_str688[sizeof("vtestpd")];
    char spasm_x86_64_mnemonic_strings_str689[sizeof("jbe")];
    char spasm_x86_64_mnemonic_strings_str690[sizeof("unpckhps")];
    char spasm_x86_64_mnemonic_strings_str691[sizeof("unpcklps")];
    char spasm_x86_64_mnemonic_strings_str692[sizeof("movss")];
    char spasm_x86_64_mnemonic_strings_str693[sizeof("unpckhpd")];
    char spasm_x86_64_mnemonic_strings_str694[sizeof("unpcklpd")];
    char spasm_x86_64_mnemonic_strings_str695[sizeof("jnc")];
    char spasm_x86_64_mnemonic_strings_str696[sizeof("movsd")];
    char spasm_x86_64_mnemonic_strings_str697[sizeof("movsxd")];
    char spasm_x86_64_mnemonic_strings_str698[sizeof("divps")];
    char spasm_x86_64_mnemonic_strings_str699[sizeof("imul")];
    char spasm_x86_64_mnemonic_strings_str700[sizeof("divpd")];
    char spasm_x86_64_mnemonic_strings_str701[sizeof("movshdup")];
    char spasm_x86_64_mnemonic_strings_str702[sizeof("movsldup")];
    char spasm_x86_64_mnemonic_strings_str703[sizeof("div")];
    char spasm_x86_64_mnemonic_strings_str704[sizeof("btr")];
    char spasm_x86_64_mnemonic_strings_str705[sizeof("jnb")];
    char spasm_x86_64_mnemonic_strings_str706[sizeof("cmpxchg8b")];
    char spasm_x86_64_mnemonic_strings_str707[sizeof("cmpxchg16b")];
    char spasm_x86_64_mnemonic_strings_str708[sizeof("mwaitx")];
    char spasm_x86_64_mnemonic_strings_str709[sizeof("vpcmpestri")];
    char spasm_x86_64_mnemonic_strings_str710[sizeof("vpcmpistri")];
    char spasm_x86_64_mnemonic_strings_str711[sizeof("jg")];
    char spasm_x86_64_mnemonic_strings_str712[sizeof("pclmulqdq")];
    char spasm_x86_64_mnemonic_strings_str713[sizeof("jna")];
    char spasm_x86_64_mnemonic_strings_str714[sizeof("xadd")];
    char spasm_x86_64_mnemonic_strings_str715[sizeof("monitorx")];
    char spasm_x86_64_mnemonic_strings_str716[sizeof("jnp")];
    char spasm_x86_64_mnemonic_strings_str717[sizeof("inc")];
    char spasm_x86_64_mnemonic_strings_str718[sizeof("pext")];
    char spasm_x86_64_mnemonic_strings_str719[sizeof("vpextrb")];
    char spasm_x86_64_mnemonic_strings_str720[sizeof("movdqu")];
    char spasm_x86_64_mnemonic_strings_str721[sizeof("prefetchnta")];
    char spasm_x86_64_mnemonic_strings_str722[sizeof("aesenclast")];
    char spasm_x86_64_mnemonic_strings_str723[sizeof("jz")];
    char spasm_x86_64_mnemonic_strings_str724[sizeof("clflush")];
    char spasm_x86_64_mnemonic_strings_str725[sizeof("pblendvb")];
    char spasm_x86_64_mnemonic_strings_str726[sizeof("mulss")];
    char spasm_x86_64_mnemonic_strings_str727[sizeof("mulsd")];
    char spasm_x86_64_mnemonic_strings_str728[sizeof("movhps")];
    char spasm_x86_64_mnemonic_strings_str729[sizeof("movhlps")];
    char spasm_x86_64_mnemonic_strings_str730[sizeof("jns")];
    char spasm_x86_64_mnemonic_strings_str731[sizeof("movhpd")];
    char spasm_x86_64_mnemonic_strings_str732[sizeof("stmxcsr")];
    char spasm_x86_64_mnemonic_strings_str733[sizeof("vaesdeclast")];
    char spasm_x86_64_mnemonic_strings_str734[sizeof("vaesenclast")];
    char spasm_x86_64_mnemonic_strings_str735[sizeof("vaeskeygenassist")];
    char spasm_x86_64_mnemonic_strings_str736[sizeof("sal")];
    char spasm_x86_64_mnemonic_strings_str737[sizeof("jge")];
    char spasm_x86_64_mnemonic_strings_str738[sizeof("blendps")];
    char spasm_x86_64_mnemonic_strings_str739[sizeof("blendvps")];
    char spasm_x86_64_mnemonic_strings_str740[sizeof("blendpd")];
    char spasm_x86_64_mnemonic_strings_str741[sizeof("blendvpd")];
    char spasm_x86_64_mnemonic_strings_str742[sizeof("pavgb")];
    char spasm_x86_64_mnemonic_strings_str743[sizeof("prefetch")];
    char spasm_x86_64_mnemonic_strings_str744[sizeof("bextr")];
    char spasm_x86_64_mnemonic_strings_str745[sizeof("vlddqu")];
    char spasm_x86_64_mnemonic_strings_str746[sizeof("clflushopt")];
    char spasm_x86_64_mnemonic_strings_str747[sizeof("tzcnt")];
    char spasm_x86_64_mnemonic_strings_str748[sizeof("movmskps")];
    char spasm_x86_64_mnemonic_strings_str749[sizeof("jnbe")];
    char spasm_x86_64_mnemonic_strings_str750[sizeof("movmskpd")];
    char spasm_x86_64_mnemonic_strings_str751[sizeof("cmpxchg")];
    char spasm_x86_64_mnemonic_strings_str752[sizeof("xor")];
    char spasm_x86_64_mnemonic_strings_str753[sizeof("vcvtps2ph")];
    char spasm_x86_64_mnemonic_strings_str754[sizeof("jnz")];
    char spasm_x86_64_mnemonic_strings_str755[sizeof("movnti")];
    char spasm_x86_64_mnemonic_strings_str756[sizeof("blsr")];
    char spasm_x86_64_mnemonic_strings_str757[sizeof("palignr")];
    char spasm_x86_64_mnemonic_strings_str758[sizeof("int")];
    char spasm_x86_64_mnemonic_strings_str759[sizeof("shl")];
    char spasm_x86_64_mnemonic_strings_str760[sizeof("adox")];
    char spasm_x86_64_mnemonic_strings_str761[sizeof("jnae")];
    char spasm_x86_64_mnemonic_strings_str762[sizeof("call")];
    char spasm_x86_64_mnemonic_strings_str763[sizeof("push")];
    char spasm_x86_64_mnemonic_strings_str764[sizeof("vzeroall")];
    char spasm_x86_64_mnemonic_strings_str765[sizeof("movzx")];
    char spasm_x86_64_mnemonic_strings_str766[sizeof("ptest")];
    char spasm_x86_64_mnemonic_strings_str767[sizeof("lddqu")];
    char spasm_x86_64_mnemonic_strings_str768[sizeof("jne")];
    char spasm_x86_64_mnemonic_strings_str769[sizeof("maskmovdqu")];
    char spasm_x86_64_mnemonic_strings_str770[sizeof("rcl")];
    char spasm_x86_64_mnemonic_strings_str771[sizeof("test")];
    char spasm_x86_64_mnemonic_strings_str772[sizeof("lfence")];
    char spasm_x86_64_mnemonic_strings_str773[sizeof("divss")];
    char spasm_x86_64_mnemonic_strings_str774[sizeof("divsd")];
    char spasm_x86_64_mnemonic_strings_str775[sizeof("rol")];
    char spasm_x86_64_mnemonic_strings_str776[sizeof("mul")];
    char spasm_x86_64_mnemonic_strings_str777[sizeof("jle")];
    char spasm_x86_64_mnemonic_strings_str778[sizeof("syscall")];
    char spasm_x86_64_mnemonic_strings_str779[sizeof("adcx")];
    char spasm_x86_64_mnemonic_strings_str780[sizeof("neg")];
    char spasm_x86_64_mnemonic_strings_str781[sizeof("ldmxcsr")];
    char spasm_x86_64_mnemonic_strings_str782[sizeof("clwb")];
    char spasm_x86_64_mnemonic_strings_str783[sizeof("aeskeygenassist")];
    char spasm_x86_64_mnemonic_strings_str784[sizeof("vcvtsd2si")];
    char spasm_x86_64_mnemonic_strings_str785[sizeof("vcvtss2si")];
    char spasm_x86_64_mnemonic_strings_str786[sizeof("vcvttsd2si")];
    char spasm_x86_64_mnemonic_strings_str787[sizeof("vcvttss2si")];
    char spasm_x86_64_mnemonic_strings_str788[sizeof("lzcnt")];
    char spasm_x86_64_mnemonic_strings_str789[sizeof("jl")];
    char spasm_x86_64_mnemonic_strings_str790[sizeof("jecxz")];
    char spasm_x86_64_mnemonic_strings_str791[sizeof("insertps")];
    char spasm_x86_64_mnemonic_strings_str792[sizeof("andn")];
    char spasm_x86_64_mnemonic_strings_str793[sizeof("insertq")];
    char spasm_x86_64_mnemonic_strings_str794[sizeof("vldmxcsr")];
    char spasm_x86_64_mnemonic_strings_str795[sizeof("sarx")];
    char spasm_x86_64_mnemonic_strings_str796[sizeof("jrcxz")];
    char spasm_x86_64_mnemonic_strings_str797[sizeof("movsx")];
    char spasm_x86_64_mnemonic_strings_str798[sizeof("xgetbv")];
    char spasm_x86_64_mnemonic_strings_str799[sizeof("xchg")];
    char spasm_x86_64_mnemonic_strings_str800[sizeof("jnge")];
    char spasm_x86_64_mnemonic_strings_str801[sizeof("jng")];
    char spasm_x86_64_mnemonic_strings_str802[sizeof("shrx")];
    char spasm_x86_64_mnemonic_strings_str803[sizeof("xlatb")];
    char spasm_x86_64_mnemonic_strings_str804[sizeof("jnle")];
    char spasm_x86_64_mnemonic_strings_str805[sizeof("bzhi")];
    char spasm_x86_64_mnemonic_strings_str806[sizeof("rorx")];
    char spasm_x86_64_mnemonic_strings_str807[sizeof("blsi")];
    char spasm_x86_64_mnemonic_strings_str808[sizeof("shlx")];
    char spasm_x86_64_mnemonic_strings_str809[sizeof("blsmsk")];
    char spasm_x86_64_mnemonic_strings_str810[sizeof("jnl")];
    char spasm_x86_64_mnemonic_strings_str811[sizeof("mulx")];
  };
static const struct spasm_x86_64_mnemonic_strings_t spasm_x86_64_mnemonic_strings_contents =
  {
    "vsqrtps",
    "vsqrtss",
    "vsqrtpd",
    "vsqrtsd",
    "vpbroadcastw",
    "vpbroadcastd",
    "vpbroadcastq",
    "pmovsxbw",
    "pmovzxbw",
    "pmovsxbd",
    "pmovzxwd",
    "pmovzxbd",
    "pmovsxwd",
    "pmovsxbq",
    "pmovzxwq",
    "pmovzxdq",
    "pmovzxbq",
    "pmovsxwq",
    "pmovsxdq",
    "vmovss",
    "vmovaps",
    "vmovups",
    "vmovlps",
    "vmovhps",
    "vmovhlps",
    "vmovntps",
    "vmovlhps",
    "vmovmskps",
    "vmovd",
    "vmovsd",
    "vmovapd",
    "vmovupd",
    "vmovlpd",
    "vmovhpd",
    "vmovntpd",
    "vmovmskpd",
    "vmovq",
    "vpblendw",
    "vmovntdq",
    "vpblendd",
    "vmovddup",
    "vmovshdup",
    "vmovsldup",
    "pmulhw",
    "pmullw",
    "pmulhuw",
    "pmulhrsw",
    "pmulld",
    "cdq",
    "pmuldq",
    "pmuludq",
    "psubw",
    "psubsw",
    "psubusw",
    "vmulps",
    "vmulss",
    "psubd",
    "vmulpd",
    "vmulsd",
    "psubq",
    "vsubps",
    "vsubss",
    "vsubpd",
    "vsubsd",
    "vpavgw",
    "vpackssdw",
    "vpackusdw",
    "cmovs",
    "cmovns",
    "cmovp",
    "cmovnp",
    "cvtpd2ps",
    "cvtpi2ps",
    "cvtpi2pd",
    "cvtps2pd",
    "vpunpckhbw",
    "vpunpcklbw",
    "cvtpd2dq",
    "cvtps2dq",
    "vpunpckhwd",
    "vpunpcklwd",
    "setp",
    "vpunpckhdq",
    "vpunpckldq",
    "vpunpckhqdq",
    "vpunpcklqdq",
    "vpmovsxbw",
    "vpmovzxbw",
    "vpmovsxbd",
    "vpmovzxwd",
    "vpmovzxbd",
    "vpmovsxwd",
    "vpmovsxbq",
    "vpmovzxwq",
    "vpmovzxdq",
    "vpmovzxbq",
    "vpmovsxwq",
    "vpmovsxdq",
    "vpmulhw",
    "vpmullw",
    "vpmulhuw",
    "vpmulhrsw",
    "vpmulld",
    "vpmuldq",
    "vpmuludq",
    "vpclmulqdq",
    "vpabsw",
    "cqo",
    "vpabsd",
    "psadbw",
    "cmovc",
    "cmovnc",
    "pcmpeqw",
    "pcmpgtw",
    "pcmpeqd",
    "pcmpgtd",
    "pcmpeqq",
    "pcmpgtq",
    "setc",
    "vcmpps",
    "vcmpss",
    "vcmppd",
    "vcmpsd",
    "vpand",
    "vpaddw",
    "vpaddsw",
    "vpaddusw",
    "vpaddd",
    "cmovo",
    "cmovno",
    "cmovpo",
    "vpaddq",
    "cmove",
    "cmovae",
    "cmovpe",
    "cmovne",
    "cmovle",
    "cmovge",
    "cmovbe",
    "cmovnae",
    "cmovnle",
    "cmovnge",
    "cmovnbe",
    "setns",
    "cvtdq2ps",
    "pmaddubsw",
    "vmovdqa",
    "pmaddwd",
    "vmovntdqa",
    "cvtdq2pd",
    "pcmpestrm",
    "pcmpistrm",
    "setpo",
    "seto",
    "setnp",
    "setpe",
    "rsqrtps",
    "rsqrtss",
    "vpbroadcastb",
    "pmovmskb",
    "setle",
    "vdpps",
    "vpblendvb",
    "vdppd",
    "vpor",
    "cmova",
    "cmovna",
    "dec",
    "cmc",
    "psubb",
    "psubsb",
    "psubusb",
    "pand",
    "vroundps",
    "vroundss",
    "vroundpd",
    "vroundsd",
    "vandps",
    "vandnps",
    "setnc",
    "vandpd",
    "vandnpd",
    "setbe",
    "vpavgb",
    "vpacksswb",
    "vpackuswb",
    "cmovb",
    "cmovnb",
    "subps",
    "subpd",
    "setno",
    "ud2",
    "setne",
    "setnae",
    "setnle",
    "setnge",
    "setnbe",
    "hsubps",
    "cwd",
    "vpmaxsw",
    "vpmaxuw",
    "hsubpd",
    "vpmaddubsw",
    "vpmaxsd",
    "vpmaxud",
    "vpmaddwd",
    "vpmaskmovd",
    "punpckhbw",
    "punpcklbw",
    "adc",
    "vpsraw",
    "vpsrlw",
    "vpmaskmovq",
    "punpckhwd",
    "punpcklwd",
    "vpmovmskb",
    "vpsrad",
    "vpsrld",
    "vpsravd",
    "vpsrlvd",
    "punpckhdq",
    "punpckldq",
    "punpckhqdq",
    "punpcklqdq",
    "vpsrlq",
    "vpsrldq",
    "vpsrlvq",
    "sha1rnds4",
    "vunpckhps",
    "vunpcklps",
    "cmp",
    "pop",
    "cmpps",
    "sha1msg1",
    "vunpckhpd",
    "vunpcklpd",
    "dppd",
    "cmppd",
    "sha1msg2",
    "vpsubw",
    "vpsubsw",
    "vpsubusw",
    "vpsubd",
    "psrlw",
    "vrcpps",
    "vrcpss",
    "vpsubq",
    "psrld",
    "js",
    "vmovdqu",
    "vpsllw",
    "psrlq",
    "psrldq",
    "sha256msg1",
    "vpslld",
    "vpsllvd",
    "vpalignr",
    "vpsllq",
    "vpslldq",
    "vpsllvq",
    "vpabsb",
    "sha256msg2",
    "sha256rnds2",
    "setna",
    "vdivps",
    "vdivss",
    "vdivpd",
    "vdivsd",
    "jp",
    "pcmpeqb",
    "pcmpgtb",
    "sbb",
    "setb",
    "pdep",
    "vpermps",
    "vpermilps",
    "vpermd",
    "vpermpd",
    "vpermilpd",
    "vperm2f128",
    "vperm2i128",
    "vpermq",
    "vpaddb",
    "vpaddsb",
    "vpaddusb",
    "pshufhw",
    "pshuflw",
    "pshufd",
    "add",
    "setnb",
    "vshufps",
    "setae",
    "addps",
    "vshufpd",
    "addpd",
    "crc32",
    "cdqe",
    "roundps",
    "roundss",
    "cvttpd2dq",
    "cvttps2dq",
    "roundpd",
    "roundsd",
    "phaddw",
    "phaddsw",
    "vucomiss",
    "phaddd",
    "cvtsd2ss",
    "cvtsi2ss",
    "sets",
    "vucomisd",
    "sha1nexte",
    "cvtsi2sd",
    "cvtss2sd",
    "vorps",
    "vhaddps",
    "vorpd",
    "vhaddpd",
    "vmaskmovps",
    "vmaskmovpd",
    "cpuid",
    "setge",
    "sete",
    "seta",
    "cmovg",
    "cmovng",
    "jpo",
    "vpinsrw",
    "vpinsrd",
    "stc",
    "pabsw",
    "vpinsrq",
    "minps",
    "pabsd",
    "pminsw",
    "pminuw",
    "sub",
    "minpd",
    "pminsd",
    "pminud",
    "cmovz",
    "cmovnz",
    "vpminsw",
    "vpminuw",
    "vminps",
    "vminss",
    "setz",
    "vpminsd",
    "vpminud",
    "vminpd",
    "vminsd",
    "jc",
    "vpmaxsb",
    "vpmaxub",
    "paddw",
    "paddsw",
    "paddusw",
    "psraw",
    "paddd",
    "psrad",
    "paddq",
    "vpsadbw",
    "vaddps",
    "vaddss",
    "vaddsubps",
    "vaddpd",
    "vaddsd",
    "vaddsubpd",
    "psllw",
    "mpsadbw",
    "pslld",
    "rcpps",
    "psllq",
    "pslldq",
    "emms",
    "vbroadcastss",
    "vpsubb",
    "vpsubsb",
    "vpsubusb",
    "vbroadcastsd",
    "or",
    "vbroadcastf128",
    "vbroadcasti128",
    "jo",
    "dpps",
    "je",
    "std",
    "vfmadd132ps",
    "vfmadd231ss",
    "vfmadd231ps",
    "vfmadd213ss",
    "vfmadd213ps",
    "vfmadd132ss",
    "vfmaddsub132ps",
    "vfmaddsub231ps",
    "vfmaddsub213ps",
    "vfmadd132pd",
    "vfmadd231sd",
    "vfmadd231pd",
    "vfmadd213sd",
    "vfmadd213pd",
    "vfmadd132sd",
    "vfmaddsub132pd",
    "vfmaddsub231pd",
    "vfmaddsub213pd",
    "setng",
    "phsubw",
    "phsubsw",
    "maxps",
    "phsubd",
    "rdtscp",
    "maxpd",
    "pause",
    "vhsubps",
    "vhsubpd",
    "pshufb",
    "vphaddw",
    "vphaddsw",
    "vcomiss",
    "vphaddd",
    "setnz",
    "vcomisd",
    "vmpsadbw",
    "shufps",
    "psignw",
    "shufpd",
    "psignd",
    "vxorps",
    "vptest",
    "subss",
    "vxorpd",
    "subsd",
    "sqrtps",
    "sqrtss",
    "sqrtpd",
    "sqrtsd",
    "vpcmpeqw",
    "vpcmpgtw",
    "vpcmpeqd",
    "vpcmpgtd",
    "pcmpestri",
    "pcmpistri",
    "vpcmpeqq",
    "vpcmpgtq",
    "jmp",
    "comiss",
    "comisd",
    "pmaxsw",
    "pmaxuw",
    "rdtsc",
    "pmaxsd",
    "pmaxud",
    "por",
    "cmovl",
    "cmovnl",
    "cmpss",
    "vpxor",
    "vmaxps",
    "vmaxss",
    "cmpsd",
    "popcnt",
    "vmaxpd",
    "vmaxsd",
    "orpd",
    "vpcmpestrm",
    "vpcmpistrm",
    "ret",
    "shrd",
    "cwde",
    "vpgatherdd",
    "vpgatherqd",
    "vpinsrb",
    "vpgatherdq",
    "vpgatherqq",
    "ja",
    "btc",
    "pabsb",
    "bsf",
    "pminsb",
    "pminub",
    "vfmsub132ps",
    "vfmsub231ss",
    "vfmsub231ps",
    "vfmsub213ss",
    "vfmsub213ps",
    "vfmsub132ss",
    "setl",
    "vfmsubadd132ps",
    "vfmsubadd231ps",
    "vfmsubadd213ps",
    "vfmsub132pd",
    "vfmsub231sd",
    "vfmsub231pd",
    "vfmsub213sd",
    "vfmsub213pd",
    "vfmsub132sd",
    "vpminsb",
    "vpminub",
    "vfmsubadd132pd",
    "vfmsubadd231pd",
    "vfmsubadd213pd",
    "vpandn",
    "sar",
    "vpsignw",
    "vpsignd",
    "paddb",
    "paddsb",
    "paddusb",
    "extractps",
    "extrq",
    "vphsubw",
    "vphsubsw",
    "vphsubd",
    "setg",
    "addss",
    "phminposuw",
    "addsubps",
    "addsd",
    "addsubpd",
    "aesdec",
    "mov",
    "bsr",
    "movups",
    "monitor",
    "movupd",
    "rdrand",
    "vmaskmovdqu",
    "jb",
    "movlps",
    "movlhps",
    "haddps",
    "movlpd",
    "setnl",
    "haddpd",
    "vgatherdps",
    "vgatherqps",
    "vgatherdpd",
    "vgatherqpd",
    "vstmxcsr",
    "pandn",
    "vpshufhw",
    "vpshuflw",
    "vpshufd",
    "pinsrw",
    "vfnmadd132ps",
    "vfnmsub231ss",
    "vfnmsub231ps",
    "vfnmsub213ss",
    "vfnmsub213ps",
    "vfnmsub132ss",
    "vfnmsub132ps",
    "vfnmadd231ss",
    "vfnmadd231ps",
    "vfnmadd213ss",
    "vfnmadd213ps",
    "vfnmadd132ss",
    "clc",
    "pinsrd",
    "vfnmadd132pd",
    "vfnmsub231sd",
    "vfnmsub231pd",
    "vfnmsub213sd",
    "vfnmsub213pd",
    "vfnmsub132sd",
    "vfnmsub132pd",
    "vfnmadd231sd",
    "vfnmadd231pd",
    "vfnmadd213sd",
    "vfnmadd213pd",
    "vfnmadd132sd",
    "vrsqrtps",
    "vrsqrtss",
    "pinsrq",
    "rdseed",
    "shr",
    "cbw",
    "vinsertps",
    "mwait",
    "pextrw",
    "vinsertf128",
    "vinserti128",
    "pextrd",
    "minss",
    "psignb",
    "pextrq",
    "minsd",
    "bts",
    "sfence",
    "packssdw",
    "packusdw",
    "vextractps",
    "vextractf128",
    "vextracti128",
    "movntps",
    "movntss",
    "idiv",
    "bt",
    "movntpd",
    "movntsd",
    "movd",
    "vpcmpeqb",
    "vpcmpgtb",
    "movntdq",
    "nop",
    "movddup",
    "mulps",
    "pxor",
    "jpe",
    "pmaxsb",
    "pmaxub",
    "mulpd",
    "mfence",
    "shld",
    "rcr",
    "rcpss",
    "cld",
    "cvttsd2si",
    "cvttss2si",
    "lea",
    "ror",
    "orps",
    "cvtsd2si",
    "cvtss2si",
    "ucomiss",
    "ucomisd",
    "aesenc",
    "maxss",
    "movbe",
    "maxsd",
    "vpsignb",
    "and",
    "vphminposuw",
    "andps",
    "movaps",
    "andpd",
    "movapd",
    "vpextrw",
    "vpextrd",
    "bswap",
    "not",
    "vpextrq",
    "vaesdec",
    "vaesimc",
    "vaesenc",
    "femms",
    "pblendw",
    "movq",
    "clzero",
    "vblendps",
    "vblendvps",
    "prefetchw",
    "prefetcht0",
    "vblendpd",
    "vblendvpd",
    "jno",
    "vpshufb",
    "prefetcht1",
    "prefetchwt1",
    "pinsrb",
    "movntdqa",
    "movdqa",
    "prefetcht2",
    "aesdeclast",
    "jae",
    "vcvtdq2ps",
    "vcvtsi2ss",
    "vcvtsd2ss",
    "vcvtph2ps",
    "vcvtpd2ps",
    "pextrb",
    "vcvtdq2pd",
    "vcvtss2sd",
    "vcvtsi2sd",
    "vcvtps2pd",
    "vcvtpd2dq",
    "vcvtps2dq",
    "vcvttpd2dq",
    "vcvttps2dq",
    "vzeroupper",
    "andnps",
    "packsswb",
    "packuswb",
    "pavgw",
    "andnpd",
    "aesimc",
    "xorps",
    "xorpd",
    "vtestps",
    "vtestpd",
    "jbe",
    "unpckhps",
    "unpcklps",
    "movss",
    "unpckhpd",
    "unpcklpd",
    "jnc",
    "movsd",
    "movsxd",
    "divps",
    "imul",
    "divpd",
    "movshdup",
    "movsldup",
    "div",
    "btr",
    "jnb",
    "cmpxchg8b",
    "cmpxchg16b",
    "mwaitx",
    "vpcmpestri",
    "vpcmpistri",
    "jg",
    "pclmulqdq",
    "jna",
    "xadd",
    "monitorx",
    "jnp",
    "inc",
    "pext",
    "vpextrb",
    "movdqu",
    "prefetchnta",
    "aesenclast",
    "jz",
    "clflush",
    "pblendvb",
    "mulss",
    "mulsd",
    "movhps",
    "movhlps",
    "jns",
    "movhpd",
    "stmxcsr",
    "vaesdeclast",
    "vaesenclast",
    "vaeskeygenassist",
    "sal",
    "jge",
    "blendps",
    "blendvps",
    "blendpd",
    "blendvpd",
    "pavgb",
    "prefetch",
    "bextr",
    "vlddqu",
    "clflushopt",
    "tzcnt",
    "movmskps",
    "jnbe",
    "movmskpd",
    "cmpxchg",
    "xor",
    "vcvtps2ph",
    "jnz",
    "movnti",
    "blsr",
    "palignr",
    "int",
    "shl",
    "adox",
    "jnae",
    "call",
    "push",
    "vzeroall",
    "movzx",
    "ptest",
    "lddqu",
    "jne",
    "maskmovdqu",
    "rcl",
    "test",
    "lfence",
    "divss",
    "divsd",
    "rol",
    "mul",
    "jle",
    "syscall",
    "adcx",
    "neg",
    "ldmxcsr",
    "clwb",
    "aeskeygenassist",
    "vcvtsd2si",
    "vcvtss2si",
    "vcvttsd2si",
    "vcvttss2si",
    "lzcnt",
    "jl",
    "jecxz",
    "insertps",
    "andn",
    "insertq",
    "vldmxcsr",
    "sarx",
    "jrcxz",
    "movsx",
    "xgetbv",
    "xchg",
    "jnge",
    "jng",
    "shrx",
    "xlatb",
    "jnle",
    "bzhi",
    "rorx",
    "blsi",
    "shlx",
    "blsmsk",
    "jnl",
    "mulx"
  };
#define spasm_x86_64_mnemonic_strings ((const char *) &spasm_x86_64_mnemonic_strings_contents)

static const struct Spasm_x86_64_MnemonicKeyword spasm_x86_64_mnemonic_words[] =
  {
#line 812 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str0, 2837, 4},
#line 814 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1, 2843, 2},
#line 811 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str2, 2833, 4},
#line 813 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str3, 2841, 2},
#line 682 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str4, 2354, 4},
#line 680 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str5, 2346, 4},
#line 681 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str6, 2350, 4},
#line 329 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str7, 1081, 2},
#line 335 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str8, 1093, 2},
#line 327 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str9, 1077, 2},
#line 337 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str10, 1097, 2},
#line 333 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str11, 1089, 2},
#line 331 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str12, 1085, 2},
#line 328 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str13, 1079, 2},
#line 338 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str14, 1099, 2},
#line 336 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str15, 1095, 2},
#line 334 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str16, 1091, 2},
#line 332 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str17, 1087, 2},
#line 330 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str18, 1083, 2},
#line 646 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str19, 2206, 4},
#line 625 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str20, 2132, 8},
#line 648 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str21, 2218, 8},
#line 635 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str22, 2172, 2},
#line 632 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str23, 2167, 2},
#line 630 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str24, 2164, 1},
#line 641 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str25, 2184, 2},
#line 633 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str26, 2169, 1},
#line 637 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str27, 2176, 2},
#line 626 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str28, 2140, 4},
#line 643 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str29, 2194, 4},
#line 624 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str30, 2124, 8},
#line 647 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str31, 2210, 8},
#line 634 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str32, 2170, 2},
#line 631 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str33, 2165, 2},
#line 640 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str34, 2182, 2},
#line 636 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str35, 2174, 2},
#line 642 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str36, 2186, 8},
#line 678 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str37, 2338, 4},
#line 638 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str38, 2178, 2},
#line 676 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str39, 2330, 4},
#line 627 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str40, 2144, 4},
#line 644 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str41, 2198, 4},
#line 645 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str42, 2202, 4},
#line 342 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str43, 1107, 2},
#line 344 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str44, 1111, 2},
#line 341 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str45, 1105, 2},
#line 340 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str46, 1103, 2},
#line 343 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str47, 1109, 2},
#line 67 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str48, 240, 1},
#line 339 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str49, 1101, 2},
#line 345 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str50, 1113, 2},
#line 381 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str51, 1192, 2},
#line 378 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str52, 1186, 2},
#line 380 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str53, 1190, 2},
#line 651 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str54, 2234, 4},
#line 653 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str55, 2240, 2},
#line 375 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str56, 1180, 2},
#line 650 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str57, 2230, 4},
#line 652 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str58, 2238, 2},
#line 376 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str59, 1182, 2},
#line 817 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str60, 2850, 4},
#line 819 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str61, 2856, 2},
#line 816 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str62, 2846, 4},
#line 818 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str63, 2854, 2},
#line 675 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str64, 2326, 4},
#line 659 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str65, 2262, 4},
#line 661 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str66, 2270, 4},
#line 104 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str67, 417, 6},
#line 98 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str68, 381, 6},
#line 101 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str69, 399, 6},
#line 97 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str70, 375, 6},
#line 122 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str71, 503, 2},
#line 124 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str72, 506, 1},
#line 123 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str73, 505, 1},
#line 126 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str74, 509, 2},
#line 792 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str75, 2765, 4},
#line 796 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str76, 2781, 4},
#line 121 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str77, 501, 2},
#line 125 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str78, 507, 2},
#line 795 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str79, 2777, 4},
#line 799 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str80, 2793, 4},
#line 440 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str81, 1484, 2},
#line 793 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str82, 2769, 4},
#line 797 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str83, 2785, 4},
#line 794 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str84, 2773, 4},
#line 798 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str85, 2789, 4},
#line 742 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str86, 2553, 4},
#line 748 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str87, 2577, 4},
#line 740 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str88, 2545, 4},
#line 750 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str89, 2585, 4},
#line 746 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str90, 2569, 4},
#line 744 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str91, 2561, 4},
#line 741 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str92, 2549, 4},
#line 751 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str93, 2589, 4},
#line 749 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str94, 2581, 4},
#line 747 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str95, 2573, 4},
#line 745 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str96, 2565, 4},
#line 743 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str97, 2557, 4},
#line 755 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str98, 2605, 4},
#line 757 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str99, 2613, 4},
#line 754 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str100, 2601, 4},
#line 753 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str101, 2597, 4},
#line 756 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str102, 2609, 4},
#line 752 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str103, 2593, 4},
#line 758 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str104, 2617, 4},
#line 683 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str105, 2358, 2},
#line 658 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str106, 2258, 4},
#line 117 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str107, 486, 1},
#line 657 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str108, 2254, 4},
#line 356 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str109, 1136, 2},
#line 80 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str110, 273, 6},
#line 90 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str111, 333, 6},
#line 286 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str112, 991, 2},
#line 292 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str113, 1003, 2},
#line 284 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str114, 987, 2},
#line 290 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str115, 999, 2},
#line 285 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str116, 989, 2},
#line 291 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str117, 1001, 2},
#line 419 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str118, 1442, 2},
#line 508 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str119, 1762, 4},
#line 510 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str120, 1768, 2},
#line 507 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str121, 1758, 4},
#line 509 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str122, 1766, 2},
#line 672 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str123, 2314, 4},
#line 670 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str124, 2306, 4},
#line 667 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str125, 2294, 4},
#line 669 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str126, 2302, 4},
#line 664 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str127, 2282, 4},
#line 100 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str128, 393, 6},
#line 96 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str129, 369, 6},
#line 103 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str130, 411, 6},
#line 665 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str131, 2286, 4},
#line 81 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str132, 279, 6},
#line 77 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str133, 255, 6},
#line 102 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str134, 405, 6},
#line 91 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str135, 339, 6},
#line 85 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str136, 303, 6},
#line 83 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str137, 291, 6},
#line 79 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str138, 267, 6},
#line 87 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str139, 315, 6},
#line 95 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str140, 363, 6},
#line 93 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str141, 351, 6},
#line 89 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str142, 327, 6},
#line 437 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str143, 1478, 2},
#line 120 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str144, 499, 2},
#line 312 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str145, 1048, 2},
#line 628 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str146, 2148, 8},
#line 313 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str147, 1050, 2},
#line 639 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str148, 2180, 2},
#line 119 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str149, 497, 2},
#line 288 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str150, 995, 2},
#line 294 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str151, 1007, 2},
#line 442 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str152, 1488, 2},
#line 439 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str153, 1482, 2},
#line 436 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str154, 1476, 2},
#line 441 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str155, 1486, 2},
#line 409 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str156, 1344, 2},
#line 410 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str157, 1346, 2},
#line 679 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str158, 2342, 4},
#line 326 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str159, 1076, 1},
#line 424 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str160, 1452, 2},
#line 536 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str161, 1856, 4},
#line 677 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str162, 2334, 4},
#line 535 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str163, 1854, 2},
#line 759 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str164, 2621, 4},
#line 76 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str165, 249, 6},
#line 86 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str166, 309, 6},
#line 139 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str167, 545, 8},
#line 75 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str168, 248, 1},
#line 374 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str169, 1178, 2},
#line 377 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str170, 1184, 2},
#line 379 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str171, 1188, 2},
#line 275 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str172, 970, 2},
#line 804 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str173, 2811, 4},
#line 806 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str174, 2817, 2},
#line 803 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str175, 2807, 4},
#line 805 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str176, 2815, 2},
#line 498 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str177, 1730, 4},
#line 496 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str178, 1722, 4},
#line 429 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str179, 1462, 2},
#line 497 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str180, 1726, 4},
#line 495 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str181, 1718, 4},
#line 418 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str182, 1440, 2},
#line 674 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str183, 2322, 4},
#line 660 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str184, 2266, 4},
#line 662 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str185, 2274, 4},
#line 78 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str186, 261, 6},
#line 88 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str187, 321, 6},
#line 470 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str188, 1640, 2},
#line 469 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str189, 1638, 2},
#line 435 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str190, 1474, 2},
#line 478 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str191, 1677, 1},
#line 430 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str192, 1464, 2},
#line 426 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str193, 1456, 2},
#line 434 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str194, 1472, 2},
#line 432 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str195, 1468, 2},
#line 428 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str196, 1460, 2},
#line 154 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str197, 585, 2},
#line 137 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str198, 543, 1},
#line 729 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str199, 2503, 4},
#line 732 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str200, 2515, 4},
#line 153 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str201, 583, 2},
#line 723 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str202, 2479, 4},
#line 728 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str203, 2499, 4},
#line 731 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str204, 2511, 4},
#line 724 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str205, 2483, 4},
#line 725 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str206, 2487, 4},
#line 383 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str207, 1196, 2},
#line 387 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str208, 1204, 2},
#line 27 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str209, 0, 34},
#line 776 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str210, 2695, 6},
#line 782 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str211, 2723, 6},
#line 726 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str212, 2491, 4},
#line 386 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str213, 1202, 2},
#line 390 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str214, 1210, 2},
#line 739 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str215, 2543, 2},
#line 774 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str216, 2685, 6},
#line 777 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str217, 2701, 6},
#line 775 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str218, 2691, 4},
#line 780 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str219, 2715, 4},
#line 384 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str220, 1198, 2},
#line 388 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str221, 1206, 2},
#line 385 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str222, 1200, 2},
#line 389 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str223, 1208, 2},
#line 779 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str224, 2709, 6},
#line 778 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str225, 2707, 2},
#line 781 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str226, 2719, 4},
#line 449 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str227, 1501, 2},
#line 825 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str228, 2874, 4},
#line 827 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str229, 2882, 4},
#line 106 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str230, 429, 34},
#line 346 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str231, 1115, 6},
#line 108 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str232, 465, 2},
#line 446 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str233, 1495, 2},
#line 824 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str234, 2870, 4},
#line 826 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str235, 2878, 4},
#line 145 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str236, 569, 2},
#line 107 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str237, 463, 2},
#line 447 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str238, 1497, 2},
#line 790 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str239, 2757, 4},
#line 787 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str240, 2745, 4},
#line 789 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str241, 2753, 4},
#line 784 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str242, 2733, 4},
#line 373 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str243, 1175, 3},
#line 801 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str244, 2801, 4},
#line 802 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str245, 2805, 2},
#line 785 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str246, 2737, 4},
#line 370 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str247, 1168, 3},
#line 192 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str248, 697, 2},
#line 629 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str249, 2156, 8},
#line 773 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str250, 2679, 6},
#line 372 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str251, 1172, 3},
#line 371 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str252, 1171, 1},
#line 450 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str253, 1503, 2},
#line 768 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str254, 2657, 6},
#line 771 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str255, 2671, 4},
#line 671 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str256, 2310, 4},
#line 770 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str257, 2665, 6},
#line 769 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str258, 2663, 2},
#line 772 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str259, 2675, 4},
#line 656 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str260, 2250, 4},
#line 451 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str261, 1505, 2},
#line 452 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str262, 1507, 2},
#line 425 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str263, 1454, 2},
#line 532 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str264, 1846, 4},
#line 534 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str265, 1852, 2},
#line 531 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str266, 1842, 4},
#line 533 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str267, 1850, 2},
#line 188 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str268, 690, 2},
#line 283 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str269, 985, 2},
#line 289 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str270, 997, 2},
#line 414 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str271, 1400, 34},
#line 417 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str272, 1438, 2},
#line 295 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str273, 1009, 4},
#line 702 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str274, 2424, 2},
#line 700 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str275, 2414, 8},
#line 698 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str276, 2404, 2},
#line 701 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str277, 2422, 2},
#line 699 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str278, 2406, 8},
#line 696 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str279, 2400, 2},
#line 697 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str280, 2402, 2},
#line 703 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str281, 2426, 2},
#line 663 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str282, 2278, 4},
#line 666 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str283, 2290, 4},
#line 668 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str284, 2298, 4},
#line 359 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str285, 1142, 2},
#line 360 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str286, 1144, 2},
#line 358 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str287, 1140, 2},
#line 29 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str288, 38, 34},
#line 427 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str289, 1458, 2},
#line 810 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str290, 2829, 4},
#line 416 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str291, 1436, 2},
#line 31 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str292, 74, 2},
#line 809 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str293, 2825, 4},
#line 30 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str294, 72, 2},
#line 118 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str295, 487, 10},
#line 68 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str296, 241, 1},
#line 406 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str297, 1338, 2},
#line 408 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str298, 1342, 2},
#line 133 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str299, 531, 2},
#line 134 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str300, 533, 2},
#line 405 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str301, 1336, 2},
#line 407 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str302, 1340, 2},
#line 303 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str303, 1030, 2},
#line 302 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str304, 1028, 2},
#line 823 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str305, 2868, 2},
#line 301 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str306, 1026, 2},
#line 128 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str307, 515, 2},
#line 130 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str308, 521, 4},
#line 443 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str309, 1490, 2},
#line 822 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str310, 2866, 2},
#line 448 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str311, 1499, 2},
#line 129 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str312, 517, 4},
#line 131 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str313, 525, 2},
#line 655 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str314, 2246, 4},
#line 605 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str315, 2070, 4},
#line 654 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str316, 2242, 4},
#line 604 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str317, 2066, 4},
#line 615 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str318, 2096, 4},
#line 614 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str319, 2092, 4},
#line 116 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str320, 485, 1},
#line 422 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str321, 1448, 2},
#line 420 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str322, 1444, 2},
#line 415 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str323, 1434, 2},
#line 82 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str324, 285, 6},
#line 92 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str325, 345, 6},
#line 190 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str326, 694, 2},
#line 722 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str327, 2477, 2},
#line 720 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str328, 2473, 2},
#line 465 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str329, 1601, 1},
#line 261 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str330, 942, 2},
#line 721 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str331, 2475, 2},
#line 206 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str332, 725, 2},
#line 260 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str333, 940, 2},
#line 322 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str334, 1068, 2},
#line 325 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str335, 1074, 2},
#line 468 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str336, 1604, 34},
#line 205 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str337, 723, 2},
#line 321 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str338, 1066, 2},
#line 324 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str339, 1072, 2},
#line 105 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str340, 423, 6},
#line 99 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str341, 387, 6},
#line 735 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str342, 2527, 4},
#line 738 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str343, 2539, 4},
#line 621 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str344, 2116, 4},
#line 623 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str345, 2122, 2},
#line 444 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str346, 1492, 2},
#line 734 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str347, 2523, 4},
#line 737 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str348, 2535, 4},
#line 620 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str349, 2112, 4},
#line 622 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str350, 2120, 2},
#line 165 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str351, 643, 2},
#line 727 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str352, 2495, 4},
#line 730 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str353, 2507, 4},
#line 273 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str354, 966, 2},
#line 270 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str355, 960, 2},
#line 272 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str356, 964, 2},
#line 369 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str357, 1165, 3},
#line 267 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str358, 954, 2},
#line 368 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str359, 1162, 3},
#line 268 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str360, 956, 2},
#line 760 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str361, 2625, 4},
#line 484 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str362, 1690, 4},
#line 486 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str363, 1696, 2},
#line 488 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str364, 1702, 4},
#line 483 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str365, 1686, 4},
#line 485 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str366, 1694, 2},
#line 487 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str367, 1698, 4},
#line 367 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str368, 1159, 3},
#line 244 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str369, 859, 2},
#line 364 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str370, 1152, 3},
#line 394 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str371, 1246, 2},
#line 366 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str372, 1156, 3},
#line 365 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str373, 1155, 1},
#line 147 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str374, 573, 1},
#line 506 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str375, 1754, 4},
#line 783 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str376, 2729, 4},
#line 786 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str377, 2741, 4},
#line 788 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str378, 2749, 4},
#line 505 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str379, 1752, 2},
#line 256 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str380, 900, 34},
#line 503 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str381, 1750, 1},
#line 504 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str382, 1751, 1},
#line 187 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str383, 688, 2},
#line 146 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str384, 571, 2},
#line 166 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str385, 645, 2},
#line 466 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str386, 1602, 1},
#line 541 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str387, 1870, 4},
#line 551 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str388, 1900, 2},
#line 549 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str389, 1894, 4},
#line 547 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str390, 1888, 2},
#line 545 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str391, 1882, 4},
#line 543 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str392, 1876, 2},
#line 553 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str393, 1906, 4},
#line 557 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str394, 1922, 4},
#line 555 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str395, 1914, 4},
#line 540 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str396, 1866, 4},
#line 550 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str397, 1898, 2},
#line 548 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str398, 1890, 4},
#line 546 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str399, 1886, 2},
#line 544 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str400, 1878, 4},
#line 542 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str401, 1874, 2},
#line 552 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str402, 1902, 4},
#line 556 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str403, 1918, 4},
#line 554 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str404, 1910, 4},
#line 431 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str405, 1466, 2},
#line 307 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str406, 1038, 2},
#line 306 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str407, 1036, 2},
#line 201 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str408, 716, 2},
#line 305 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str409, 1034, 2},
#line 400 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str410, 1281, 1},
#line 200 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str411, 714, 2},
#line 277 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str412, 974, 1},
#line 607 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str413, 2078, 4},
#line 606 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str414, 2074, 4},
#line 357 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str415, 1138, 2},
#line 714 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str416, 2453, 4},
#line 713 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str417, 2449, 4},
#line 512 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str418, 1772, 2},
#line 712 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str419, 2445, 4},
#line 438 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str420, 1480, 2},
#line 511 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str421, 1770, 2},
#line 649 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str422, 2226, 4},
#line 460 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str423, 1591, 2},
#line 363 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str424, 1150, 2},
#line 459 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str425, 1589, 2},
#line 362 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str426, 1148, 2},
#line 829 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str427, 2890, 4},
#line 791 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str428, 2761, 4},
#line 472 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str429, 1644, 2},
#line 828 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str430, 2886, 4},
#line 471 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str431, 1642, 2},
#line 462 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str432, 1595, 2},
#line 464 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str433, 1599, 2},
#line 461 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str434, 1593, 2},
#line 463 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str435, 1597, 2},
#line 687 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str436, 2372, 4},
#line 693 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str437, 2392, 4},
#line 685 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str438, 2364, 4},
#line 691 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str439, 2384, 4},
#line 287 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str440, 993, 2},
#line 293 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str441, 1005, 2},
#line 686 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str442, 2368, 4},
#line 692 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str443, 2388, 4},
#line 172 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str444, 656, 4},
#line 115 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str445, 483, 2},
#line 114 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str446, 481, 2},
#line 316 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str447, 1056, 2},
#line 319 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str448, 1062, 2},
#line 399 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str449, 1280, 1},
#line 315 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str450, 1054, 2},
#line 318 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str451, 1060, 2},
#line 348 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str452, 1127, 2},
#line 84 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str453, 297, 6},
#line 94 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str454, 357, 6},
#line 110 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str455, 469, 2},
#line 800 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str456, 2797, 4},
#line 617 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str457, 2104, 4},
#line 619 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str458, 2110, 2},
#line 109 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str459, 467, 2},
#line 347 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str460, 1121, 6},
#line 616 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str461, 2100, 4},
#line 618 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str462, 2108, 2},
#line 257 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str463, 934, 2},
#line 689 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str464, 2378, 2},
#line 695 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str465, 2398, 2},
#line 401 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str466, 1282, 2},
#line 457 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str467, 1573, 12},
#line 138 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str468, 544, 1},
#line 708 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str469, 2437, 2},
#line 710 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str470, 2441, 2},
#line 719 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str471, 2471, 2},
#line 709 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str472, 2439, 2},
#line 711 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str473, 2443, 2},
#line 161 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str474, 635, 2},
#line 61 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str475, 196, 12},
#line 259 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str476, 938, 2},
#line 57 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str477, 170, 6},
#line 320 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str478, 1064, 2},
#line 323 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str479, 1070, 2},
#line 559 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str480, 1930, 4},
#line 569 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str481, 1960, 2},
#line 567 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str482, 1954, 4},
#line 565 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str483, 1948, 2},
#line 563 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str484, 1942, 4},
#line 561 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str485, 1936, 2},
#line 423 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str486, 1450, 2},
#line 571 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str487, 1966, 4},
#line 575 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str488, 1982, 4},
#line 573 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str489, 1974, 4},
#line 558 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str490, 1926, 4},
#line 568 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str491, 1958, 2},
#line 566 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str492, 1950, 4},
#line 564 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str493, 1946, 2},
#line 562 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str494, 1938, 4},
#line 560 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str495, 1934, 2},
#line 733 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str496, 2519, 4},
#line 736 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str497, 2531, 4},
#line 570 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str498, 1962, 4},
#line 574 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str499, 1978, 4},
#line 572 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str500, 1970, 4},
#line 673 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str501, 2318, 4},
#line 412 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str502, 1372, 24},
#line 767 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str503, 2653, 4},
#line 766 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str504, 2649, 4},
#line 266 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str505, 952, 2},
#line 269 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str506, 958, 2},
#line 271 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str507, 962, 2},
#line 148 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str508, 574, 2},
#line 149 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str509, 576, 2},
#line 718 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str510, 2467, 4},
#line 717 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str511, 2463, 4},
#line 716 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str512, 2459, 4},
#line 421 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str513, 1446, 2},
#line 33 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str514, 78, 2},
#line 304 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str515, 1032, 2},
#line 35 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str516, 82, 2},
#line 32 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str517, 76, 2},
#line 34 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str518, 80, 2},
#line 37 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str519, 88, 2},
#line 211 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str520, 733, 28},
#line 58 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str521, 176, 6},
#line 242 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str522, 845, 4},
#line 209 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str523, 731, 1},
#line 241 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str524, 841, 4},
#line 397 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str525, 1274, 3},
#line 613 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str526, 2091, 1},
#line 163 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str527, 639, 2},
#line 224 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str528, 797, 2},
#line 222 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str529, 794, 1},
#line 152 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str530, 581, 2},
#line 223 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str531, 795, 2},
#line 433 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str532, 1470, 2},
#line 151 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str533, 579, 2},
#line 601 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str534, 2060, 2},
#line 603 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str535, 2064, 2},
#line 600 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str536, 2058, 2},
#line 602 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str537, 2062, 2},
#line 815 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str538, 2845, 1},
#line 276 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str539, 972, 2},
#line 763 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str540, 2637, 4},
#line 764 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str541, 2641, 4},
#line 762 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str542, 2633, 4},
#line 311 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str543, 1046, 2},
#line 577 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str544, 1990, 4},
#line 599 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str545, 2056, 2},
#line 597 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str546, 2050, 4},
#line 595 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str547, 2044, 2},
#line 593 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str548, 2038, 4},
#line 591 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str549, 2032, 2},
#line 589 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str550, 2026, 4},
#line 587 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str551, 2020, 2},
#line 585 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str552, 2014, 4},
#line 583 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str553, 2008, 2},
#line 581 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str554, 2002, 4},
#line 579 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str555, 1996, 2},
#line 69 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str556, 242, 1},
#line 309 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str557, 1042, 2},
#line 576 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str558, 1986, 4},
#line 598 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str559, 2054, 2},
#line 596 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str560, 2046, 4},
#line 594 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str561, 2042, 2},
#line 592 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str562, 2034, 4},
#line 590 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str563, 2030, 2},
#line 588 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str564, 2022, 4},
#line 586 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str565, 2018, 2},
#line 584 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str566, 2010, 4},
#line 582 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str567, 2006, 2},
#line 580 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str568, 1998, 4},
#line 578 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str569, 1994, 2},
#line 807 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str570, 2819, 4},
#line 808 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str571, 2823, 2},
#line 310 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str572, 1044, 2},
#line 398 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str573, 1277, 3},
#line 456 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str574, 1549, 24},
#line 66 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str575, 239, 1},
#line 610 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str576, 2086, 2},
#line 251 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str577, 881, 1},
#line 300 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str578, 1023, 3},
#line 608 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str579, 2082, 2},
#line 609 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str580, 2084, 2},
#line 298 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str581, 1019, 2},
#line 208 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str582, 729, 2},
#line 361 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str583, 1146, 2},
#line 299 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str584, 1021, 2},
#line 207 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str585, 727, 2},
#line 63 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str586, 220, 12},
#line 445 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str587, 1494, 1},
#line 262 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str588, 944, 2},
#line 264 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str589, 948, 2},
#line 539 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str590, 1864, 2},
#line 537 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str591, 1860, 2},
#line 538 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str592, 1862, 2},
#line 231 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str593, 806, 1},
#line 233 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str594, 808, 1},
#line 155 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str595, 587, 8},
#line 60 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str596, 184, 12},
#line 230 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str597, 805, 1},
#line 232 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str598, 807, 1},
#line 215 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str599, 775, 4},
#line 684 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str600, 2360, 4},
#line 690 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str601, 2380, 4},
#line 227 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str602, 801, 1},
#line 254 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str603, 891, 1},
#line 216 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str604, 779, 2},
#line 247 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str605, 871, 2},
#line 392 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str606, 1220, 2},
#line 189 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str607, 692, 2},
#line 314 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str608, 1052, 2},
#line 317 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str609, 1058, 2},
#line 246 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str610, 869, 2},
#line 204 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str611, 722, 1},
#line 454 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str612, 1533, 12},
#line 396 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str613, 1250, 24},
#line 395 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str614, 1248, 2},
#line 70 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str615, 243, 1},
#line 135 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str616, 535, 4},
#line 136 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str617, 539, 4},
#line 196 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str618, 703, 3},
#line 403 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str619, 1308, 24},
#line 258 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str620, 936, 2},
#line 127 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str621, 511, 4},
#line 132 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str622, 527, 4},
#line 477 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str623, 1675, 2},
#line 476 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str624, 1673, 2},
#line 39 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str625, 92, 2},
#line 203 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str626, 720, 2},
#line 214 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str627, 769, 6},
#line 202 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str628, 718, 2},
#line 765 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str629, 2645, 4},
#line 43 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str630, 100, 34},
#line 715 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str631, 2457, 2},
#line 48 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str632, 144, 2},
#line 213 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str633, 765, 4},
#line 47 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str634, 142, 2},
#line 212 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str635, 761, 4},
#line 707 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str636, 2434, 3},
#line 705 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str637, 2430, 2},
#line 59 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str638, 182, 2},
#line 255 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str639, 892, 8},
#line 706 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str640, 2432, 2},
#line 489 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str641, 1706, 2},
#line 493 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str642, 1714, 2},
#line 491 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str643, 1710, 2},
#line 150 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str644, 578, 1},
#line 281 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str645, 981, 2},
#line 234 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str646, 809, 8},
#line 74 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str647, 247, 1},
#line 500 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str648, 1738, 4},
#line 502 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str649, 1746, 4},
#line 354 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str650, 1134, 1},
#line 351 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str651, 1131, 1},
#line 499 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str652, 1734, 4},
#line 501 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str653, 1742, 4},
#line 183 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str654, 680, 2},
#line 761 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str655, 2629, 4},
#line 352 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str656, 1132, 1},
#line 355 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str657, 1135, 1},
#line 308 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str658, 1040, 2},
#line 228 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str659, 802, 1},
#line 217 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str660, 781, 4},
#line 353 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str661, 1133, 1},
#line 38 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str662, 90, 2},
#line 162 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str663, 637, 2},
#line 514 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str664, 1778, 4},
#line 524 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str665, 1816, 4},
#line 522 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str666, 1810, 2},
#line 517 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str667, 1790, 4},
#line 516 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str668, 1786, 4},
#line 297 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str669, 1017, 2},
#line 513 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str670, 1774, 4},
#line 525 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str671, 1820, 2},
#line 523 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str672, 1812, 4},
#line 519 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str673, 1798, 4},
#line 515 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str674, 1782, 4},
#line 518 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str675, 1794, 4},
#line 527 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str676, 1826, 4},
#line 528 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str677, 1830, 4},
#line 831 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str678, 2895, 1},
#line 46 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str679, 140, 2},
#line 263 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str680, 946, 2},
#line 265 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str681, 950, 2},
#line 279 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str682, 977, 2},
#line 45 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str683, 138, 2},
#line 41 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str684, 96, 2},
#line 838 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str685, 2965, 2},
#line 837 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str686, 2963, 2},
#line 821 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str687, 2862, 4},
#line 820 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str688, 2858, 4},
#line 164 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str689, 641, 2},
#line 480 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str690, 1680, 2},
#line 482 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str691, 1684, 2},
#line 238 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str692, 825, 4},
#line 479 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str693, 1678, 2},
#line 481 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str694, 1682, 2},
#line 177 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str695, 668, 2},
#line 235 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str696, 817, 4},
#line 240 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str697, 839, 2},
#line 142 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str698, 563, 2},
#line 156 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str699, 595, 26},
#line 141 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str700, 561, 2},
#line 236 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str701, 821, 2},
#line 237 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str702, 823, 2},
#line 140 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str703, 553, 8},
#line 62 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str704, 208, 12},
#line 175 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str705, 664, 2},
#line 113 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str706, 480, 1},
#line 112 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str707, 479, 1},
#line 252 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str708, 882, 1},
#line 688 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str709, 2376, 2},
#line 694 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str710, 2396, 2},
#line 168 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str711, 648, 2},
#line 282 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str712, 983, 2},
#line 173 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str713, 660, 2},
#line 832 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str714, 2896, 8},
#line 210 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str715, 732, 1},
#line 184 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str716, 682, 2},
#line 157 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str717, 621, 8},
#line 296 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str718, 1013, 4},
#line 704 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str719, 2428, 2},
#line 218 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str720, 785, 4},
#line 350 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str721, 1130, 1},
#line 40 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str722, 94, 2},
#line 193 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str723, 699, 2},
#line 71 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str724, 244, 1},
#line 280 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str725, 979, 2},
#line 249 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str726, 875, 2},
#line 248 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str727, 873, 2},
#line 221 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str728, 792, 2},
#line 219 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str729, 789, 1},
#line 185 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str730, 684, 2},
#line 220 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str731, 790, 2},
#line 467 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str732, 1603, 1},
#line 490 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str733, 1708, 2},
#line 492 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str734, 1712, 2},
#line 494 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str735, 1716, 2},
#line 411 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str736, 1348, 24},
#line 169 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str737, 650, 2},
#line 51 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str738, 152, 2},
#line 53 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str739, 156, 2},
#line 50 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str740, 150, 2},
#line 52 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str741, 154, 2},
#line 278 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str742, 975, 2},
#line 349 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str743, 1129, 1},
#line 49 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str744, 146, 4},
#line 611 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str745, 2088, 2},
#line 72 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str746, 245, 1},
#line 475 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str747, 1667, 6},
#line 226 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str748, 800, 1},
#line 176 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str749, 666, 2},
#line 225 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str750, 799, 1},
#line 111 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str751, 471, 8},
#line 836 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str752, 2929, 34},
#line 520 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str753, 1802, 4},
#line 186 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str754, 686, 2},
#line 229 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str755, 803, 2},
#line 56 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str756, 166, 4},
#line 274 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str757, 968, 2},
#line 160 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str758, 633, 2},
#line 453 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str759, 1509, 24},
#line 36 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str760, 84, 4},
#line 174 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str761, 662, 2},
#line 65 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str762, 236, 3},
#line 391 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str763, 1212, 8},
#line 830 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str764, 2894, 1},
#line 243 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str765, 849, 10},
#line 382 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str766, 1194, 2},
#line 194 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str767, 701, 1},
#line 178 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str768, 670, 2},
#line 199 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str769, 713, 1},
#line 393 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str770, 1222, 24},
#line 474 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str771, 1647, 20},
#line 197 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str772, 706, 1},
#line 144 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str773, 567, 2},
#line 143 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str774, 565, 2},
#line 402 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str775, 1284, 24},
#line 245 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str776, 861, 8},
#line 171 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str777, 654, 2},
#line 473 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str778, 1646, 1},
#line 28 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str779, 34, 4},
#line 253 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str780, 883, 8},
#line 195 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str781, 702, 1},
#line 73 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str782, 246, 1},
#line 42 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str783, 98, 2},
#line 521 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str784, 1806, 4},
#line 526 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str785, 1822, 4},
#line 529 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str786, 1834, 4},
#line 530 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str787, 1838, 4},
#line 198 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str788, 707, 6},
#line 170 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str789, 652, 2},
#line 167 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str790, 647, 1},
#line 158 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str791, 629, 2},
#line 44 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str792, 134, 4},
#line 159 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str793, 631, 2},
#line 612 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str794, 2090, 1},
#line 413 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str795, 1396, 4},
#line 191 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str796, 696, 1},
#line 239 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str797, 829, 10},
#line 834 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str798, 2926, 1},
#line 833 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str799, 2904, 22},
#line 180 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str800, 674, 2},
#line 179 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str801, 672, 2},
#line 458 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str802, 1585, 4},
#line 835 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str803, 2927, 2},
#line 182 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str804, 678, 2},
#line 64 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str805, 232, 4},
#line 404 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str806, 1332, 4},
#line 54 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str807, 158, 4},
#line 455 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str808, 1545, 4},
#line 55 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str809, 162, 4},
#line 181 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str810, 676, 2},
#line 250 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str811, 877, 4}
  };

static const short lookup[] =
  {
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  -864,  -812,    -2,    -1,    -1,  -869,
     -810,    -2,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,     4,    -1,    -1,
       -1,     5,    -1,    -1,    -1,    -1,     6,
       -1,    -1,    -1,    -1,    -1,    -1,  -904,
     -805,    -2,    -1,  -908,  -803,    -4,    -1,
       -1,  -913,  -799,    -6,    19,  -969,  -967,
       27,    28,    29,  -962,    34,    35,    36,
       37,    -1,    38,    -1,    39,    40,  -956,
       -1,  -940,    45,    46,    -1,    47,    -1,
       48,  -769,    -2,    49,    50,    51,    52,
       53,  -949,    56,  -758,    -2,    -1,  -954,
       59,  -755,    -2,  -771,    -2,    -1,  -960,
     -752,    -2,  -782,    -4,  -965,  -750,    -2,
     -788,    -3,  -792,    -4,    -1,    -1,    64,
       -1,    -1,    -1,    -1,    -1,    -1,  -984,
       -1,    67,    68,  -747,    -2,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       69,    70,    -1,  -999,  -741,    -2,    -1,
       -1, -1004,  -739,    -2,    -1, -1042, -1009,
     -735,    -2, -1014,    -1,    81,  -733,    -2,
    -1038, -1025, -1019,  -726,    -2,    -1, -1023,
     -724,    -4,  -728,    -2, -1028,  -720,    -6,
       -1, -1036,   100,   101,    -1,   102,  -714,
       -2,  -730,    -2,   103,   104,  -737,    -2,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,   105,    -1,    -1,    -1,
       -1,    -1,    -1,   106,    -1,   107,    -1,
      108,    -1,   109,    -1,    -1,    -1,   110,
      111,    -1, -1082,  -700,    -2,    -1, -1086,
     -698,    -2,    -1,    -1, -1092,   118,  -696,
       -2, -1095,  -693,    -2,    -1,    -1, -1141,
       -1,   123,   124,   125,   126,    -1,   127,
       -1,   128, -1139,    -1,   131,   132, -1137,
    -1115,  -673,    -4,   143,   144,   145,   146,
      147,   148,   149, -1125,  -662,    -2,   152,
       -1,   153,   154,   155,    -1, -1134,  -656,
       -2,   158,  -679,    -6,  -683,    -2,  -691,
       -2,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,   159,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
      160,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,   161,   162,    -1,
       -1,    -1,   163,    -1,   164,    -1,    -1,
       -1,    -1,   165,   166,    -1,   167,    -1,
       -1,   168,   169,   170,   171,    -1,   172,
       -1,    -1, -1201,  -639,    -2,    -1,    -1,
    -1206,  -637,    -2,    -1,   177,   178,    -1,
       -1,   179,   180,   181,    -1,   182,    -1,
       -1,    -1,    -1,   183,    -1,    -1,    -1,
       -1,    -1,    -1, -1230,  -628,    -2,   186,
      187,    -1,    -1,   188,    -1,    -1,    -1,
       -1,   189,    -1,   190,    -1,   191,    -1,
      192, -1250,   197,  -619,    -4,   198, -1423,
      201,    -1,   202, -1421,   205,    -1,   206,
       -1, -1419,   209, -1382,   212, -1376,   215,
    -1372, -1368,    -1, -1365, -1362,   224, -1360,
      227, -1287,   230,   231,   232,   233, -1285,
       -1,   236,   237,  -578,    -2,  -584,    -2,
       -1,   238,    -1,   239,   240,   241,    -1,
      242,    -1,   243,    -1, -1338,   246,   247,
      248,   249,    -1,   250,   251,   252,   253,
      254,   255,    -1,   256,    -1,   257, -1325,
      260,    -1,   261,   262,   263, -1323,  -548,
       -2,  -554,    -2, -1334,    -1,   268, -1331,
     -543,    -2,   271,  -546,    -2,   272,   273,
     -568,    -2,   274,    -1,   275,    -1,   276,
      277,    -1,   278, -1354,   281,    -1,   282,
      283,   284,  -533,    -2, -1357,  -527,    -2,
      287,  -587,    -2,  -590,    -2,   288,  -592,
       -2,   289,  -594,    -2,   290,   291,  -596,
       -2,   292,   293,  -599,    -2,    -1,   294,
       -1,   295,  -602,    -2,    -1,   296, -1416,
    -1388,  -513,    -2,    -1, -1414,   303,   304,
       -1,   305,   306, -1408,    -1,   309,   310,
      311, -1403,  -500,    -2,    -1,   314,   315,
     -505,    -2,    -1,   316,   317,   318,  -511,
       -2,  -515,    -2,   319,  -605,    -2,  -609,
       -2,  -613,    -2,    -1,    -1,   320,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,   321,    -1,    -1,   322,
       -1,   323,    -1,   324,   325,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,   326,
      327,    -1,    -1,    -1,   328,    -1,   329,
       -1,   330,   331,    -1,   332,   333, -1479,
      336,    -1,   337, -1475,  -474,    -2,   340,
      341,  -478,    -2,    -1, -1496,    -1, -1492,
      346, -1487,  -465,    -2, -1490,  -463,    -2,
     -468,    -2,    -1,   351,  -470,    -2,    -1,
       -1,    -1,    -1, -1508,   354,   355,   356,
      357,   358,  -460,    -2,   359,    -1,   360,
       -1,    -1,   361,    -1,    -1, -1519,  -450,
       -2,   364,    -1, -1524,  -447,    -2,   367,
       -1,   368,   369,    -1,    -1,   370,    -1,
       -1,   371,    -1,   372,   373,   374,   375,
      376,   377,   378,    -1,   379,   380, -1548,
     -431,    -2,    -1,    -1,    -1,    -1,    -1,
      383,    -1,   384,    -1,    -1,    -1,    -1,
       -1,   385,   386, -1566,  -425,    -6, -1576,
       -1, -1571,  -416,    -6, -1574,  -410,    -3,
     -419,    -3,    -1,    -1,    -1,   405,   406,
      407,   408,    -1,   409,   410,    -1,   411,
      412,    -1,    -1,    -1,    -1,    -1,    -1,
      413,    -1,    -1,    -1,    -1,   414,    -1,
      415,    -1,   416,   417,   418,    -1,   419,
       -1,   420,   421,   422,    -1,    -1,   423,
       -1,    -1,   424,    -1,   425,    -1,   426,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
      427,    -1,   428,   429,    -1,   430,    -1,
       -1,   431, -1642,  -380,    -2,    -1,    -1,
    -1664, -1648,  -376,    -2,    -1, -1662, -1653,
     -372,    -2,    -1, -1657,  -370,    -2,    -1,
      444,   445,  -374,    -2,  -378,    -2,   446,
    -1697,    -1,   449,    -1, -1672,  -362,    -2,
      452,   453,   454,    -1,   455,    -1,   456,
    -1695,    -1,   459,    -1,   460, -1687,  -351,
       -2,   463, -1691,  -348,    -2,   466,   467,
     -355,    -2,  -365,    -2,    -1,    -1,    -1,
       -1,   468, -1707,    -1,   471,  -343,    -2,
    -1715,    -1,   474,    -1,   475,   476,  -340,
       -2,    -1,   477, -1720,  -334,    -2,    -1,
       -1, -1745,   486,    -1, -1742,    -1, -1740,
       -1, -1737, -1733,  -314,    -3,    -1,   501,
     -316,    -2,   502,  -322,    -6,  -325,    -3,
      503,  -332,    -6,    -1,   504,    -1,    -1,
       -1,   505,   506,   507,   508,    -1,    -1,
       -1,    -1,    -1,   509,    -1,    -1,    -1,
      510,   511,    -1,    -1,   512,    -1,    -1,
      513,   514,    -1,   515,   516,    -1,   517,
       -1,    -1,   518,   519,    -1,   520,   521,
       -1,    -1,    -1,    -1,   522,    -1,    -1,
      523,    -1,   524,    -1,    -1,    -1,    -1,
       -1,   525,   526,   527,   528,   529,    -1,
       -1,   530,   531,   532,    -1,    -1,   533,
    -1815,  -278,    -2,    -1,    -1, -1820,  -276,
       -2,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,   538,    -1,    -1,   539,    -1,    -1,
       -1, -1837,  -272,    -2,   542,   543,    -1,
    -1845,   556,   557,  -268,   -12, -1854, -1850,
      572,  -242,    -2,   573,   574,  -254,   -12,
      575,   576,    -1,    -1,   577,   578,    -1,
       -1, -1873,   581,    -1,   582,    -1,   583,
      584,    -1,   585,  -233,    -2,   586,   587,
    -1880,    -1,   590,  -224,    -2,    -1,    -1,
       -1,    -1, -1887,  -221,    -2, -1902,   595,
       -1,   596,    -1, -1900,   599, -1897,  -212,
       -2,   602,  -215,    -2,  -219,    -2,   603,
       -1,   604,    -1,    -1,    -1,    -1,    -1,
      605,   606,   607,    -1, -1919,   610,   611,
     -204,    -2,    -1,    -1,    -1,   612,    -1,
       -1,    -1,    -1,   613,    -1,    -1,    -1,
       -1,   614,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,   615,    -1,    -1,
    -1948,  -196,    -2,    -1,   618,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,   619,    -1,
       -1,    -1,   620,    -1,    -1,    -1, -1969,
      623,  -191,    -2,    -1,    -1,   624,   625,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,   626,    -1,    -1,    -1,   627,   628,
       -1,    -1,    -1,    -1,   629,    -1,    -1,
       -1,    -1,   630,   631,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,   632,    -1,
       -1,    -1,   633,   634,    -1,    -1,    -1,
      635,    -1,    -1,    -1,    -1,   636,    -1,
       -1,    -1,   637,   638,    -1,    -1,   639,
      640,    -1,    -1,    -1,    -1, -2037,  -171,
       -3,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,   644,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,   645,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,   646,    -1,    -1,   647,    -1,
       -1,    -1,   648,   649,   650,   651,    -1,
      652,   653,   654,    -1,   655,    -1,    -1,
      656,   657,   658,    -1,    -1,    -1,    -1,
      659,    -1,   660,   661,    -1,   662,    -1,
       -1,    -1,    -1,    -1,   663,    -1,    -1,
       -1, -2111,   669,  -148,    -5,    -1, -2115,
     -142,    -4,    -1,    -1, -2132, -2121,  -136,
       -2,   678,    -1,   679, -2127,  -132,    -2,
      682,   683,   684,  -138,    -2,    -1,    -1,
       -1,    -1,   685,    -1,    -1,    -1,    -1,
      686,    -1,   687,    -1,    -1,    -1,    -1,
      688,   689,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1, -2167,  -122,    -2,    -1,   692,
    -2173,   695,  -119,    -2,   696,   697,    -1,
      698,    -1,   699,    -1,    -1,   700,    -1,
       -1, -2187,  -111,    -2,    -1,    -1,   703,
       -1,    -1,   704,    -1,    -1,    -1,    -1,
       -1,    -1,   705,    -1,    -1,   706,   707,
       -1,    -1,    -1,    -1,    -1,    -1,   708,
       -1,    -1,    -1,    -1,    -1, -2219,  -103,
       -2,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,   711,    -1,    -1,
      712,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,   713,    -1,
       -1,    -1,    -1,    -1,    -1,   714,    -1,
       -1,   715,   716,    -1,    -1,    -1,    -1,
       -1,   717,    -1,    -1,    -1,   718,    -1,
       -1,    -1,   719,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,   720,    -1,   721,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,   722,    -1,   723,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,   724,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,   725,
      726,    -1,    -1,    -1,    -1,   727,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
      728,   729,   730,    -1,    -1,   731,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,   732,    -1,    -1,    -1,
    -2354,   -79,    -2,    -1,    -1,   735,    -1,
       -1,    -1,    -1,    -1,   736,   737,    -1,
       -1,   738,   739,    -1,    -1,    -1,   740,
      741,    -1,    -1,    -1,   742,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,   743,   744,
      745,   746,    -1,    -1,    -1,    -1,    -1,
      747,   748,    -1,    -1,    -1,   749,   750,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
      751,    -1,    -1,    -1,    -1,   752,    -1,
       -1,    -1,    -1,    -1,   753,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,   754,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
      755,    -1,    -1,   756,    -1,    -1,    -1,
       -1,    -1,    -1,   757,    -1,    -1,    -1,
       -1,    -1,   758,    -1,    -1,    -1,   759,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,   760,
       -1,    -1,    -1,    -1,    -1,   761,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,   762,
       -1,    -1,   763,    -1,    -1,    -1,    -1,
       -1,    -1,   764,    -1,    -1,    -1,    -1,
      765,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,   766,    -1,   767,   768,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,   769,   770,    -1,
      771,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,   772,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
      773,    -1,    -1,    -1,    -1,   774,    -1,
      775,    -1,    -1,    -1,    -1,    -1,   776,
       -1,    -1,    -1,   777,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,   778,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
      779,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,   780,    -1,
       -1,    -1,    -1,    -1,    -1,   781,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,   782,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,   783,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1, -2683, -2681,   -26,
       -2,   -28,    -2,    -1,   788,    -1,    -1,
      789,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,   790,    -1,    -1,    -1,
       -1,    -1,    -1,   791,    -1,    -1,    -1,
       -1,    -1,    -1,   792,    -1,   793,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,   794,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,   795,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,   796,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,   797,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,   798,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,   799,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,   800,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,   801,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,   802,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,   803,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,   804,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,   805,   806,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,   807,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,   808,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,   809,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,   810,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,   811
  };

const struct Spasm_x86_64_MnemonicKeyword *
spasm_x86_64_mnemonic_lookup (register const char *str, register size_t len)
{
  if (len <= SPASM_X86_64_MNEMONIC_MAX_WORD_LENGTH && len >= SPASM_X86_64_MNEMONIC_MIN_WORD_LENGTH)
    {
      register unsigned int key = spasm_x86_64_mnemonic_hash (str, len);

      if (key <= SPASM_X86_64_MNEMONIC_MAX_HASH_VALUE)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = spasm_x86_64_mnemonic_words[index].name + spasm_x86_64_mnemonic_strings;

              if ((((unsigned char)*str ^ (unsigned char)*s) & ~32) == 0 && !gperf_case_strncmp (str, s, len) && s[len] == '\0')
                return &spasm_x86_64_mnemonic_words[index];
            }
          else if (index < -SPASM_X86_64_MNEMONIC_TOTAL_KEYWORDS)
            {
              register int offset = - 1 - SPASM_X86_64_MNEMONIC_TOTAL_KEYWORDS - index;
              register const struct Spasm_x86_64_MnemonicKeyword *wordptr = &spasm_x86_64_mnemonic_words[SPASM_X86_64_MNEMONIC_TOTAL_KEYWORDS + lookup[offset]];
              register const struct Spasm_x86_64_MnemonicKeyword *wordendptr = wordptr + -lookup[offset + 1];

              while (wordptr < wordendptr)
                {
                  register const char *s = wordptr->name + spasm_x86_64_mnemonic_strings;

                  if ((((unsigned char)*str ^ (unsigned char)*s) & ~32) == 0 && !gperf_case_strncmp (str, s, len) && s[len] == '\0')
                    return wordptr;
                  wordptr++;
                }
            }
        }
    }
  return 0;
}
#line 839 "x86_64_mnemonics.gperf"

size_t spasm_x86_64_mnemonics_count(void)
{
    return SPASM_X86_64_MNEMONIC_TOTAL_KEYWORDS;
}

const Spasm_x86_64_MnemonicKeyword* spasm_x86_64_mnemonic_at(size_t i, const char** name)
{
    const Spasm_x86_64_MnemonicKeyword* keyword = &spasm_x86_64_mnemonic_words[i];

    *name = spasm_x86_64_mnemonic_strings + keyword->name;

    return keyword;
}
