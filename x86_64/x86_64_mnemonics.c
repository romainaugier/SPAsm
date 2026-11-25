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

#define SPASM_X86_64_MNEMONIC_TOTAL_KEYWORDS 1084
#define SPASM_X86_64_MNEMONIC_MIN_WORD_LENGTH 2
#define SPASM_X86_64_MNEMONIC_MAX_WORD_LENGTH 16
#define SPASM_X86_64_MNEMONIC_MIN_HASH_VALUE 81
#define SPASM_X86_64_MNEMONIC_MAX_HASH_VALUE 4049
/* maximum key range = 3969, duplicates = 307 */

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
      4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050,
      4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050,
      4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050,
      4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050,
      4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050,    5,    6,
        20,    6,   21,    5,   23,    9,   13, 4050, 4050, 4050,
      4050, 4050, 4050, 4050, 4050,  373,  168,   96,   10,  251,
       646,  815,  328, 1047, 1340,  668, 1140,  110,  726,  288,
        30,    5,  164,   18,   43,  334,   60,   14, 1261, 1436,
      1022,    6,  771, 4050,    5, 4050, 4050,  373,  168,   96,
        10,  251,  646,  815,  328, 1047, 1340,  668, 1140,  110,
       726,  288,   30,    5,  164,   18,   43,  334,   60,   14,
      1261, 1436, 1022,    6,  771, 4050,    5, 4050, 4050, 4050,
      4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050,
      4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050,
      4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050,
      4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050,
      4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050,
      4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050,
      4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050,
      4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050,
      4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050,
      4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050,
      4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050,
      4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050,
      4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050, 4050
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[3]+4];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]+1];
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
    char spasm_x86_64_mnemonic_strings_str0[sizeof("dpps")];
    char spasm_x86_64_mnemonic_strings_str1[sizeof("psrlq")];
    char spasm_x86_64_mnemonic_strings_str2[sizeof("psrldq")];
    char spasm_x86_64_mnemonic_strings_str3[sizeof("psrld")];
    char spasm_x86_64_mnemonic_strings_str4[sizeof("psrlw")];
    char spasm_x86_64_mnemonic_strings_str5[sizeof("vpcmpq")];
    char spasm_x86_64_mnemonic_strings_str6[sizeof("vpcmpuq")];
    char spasm_x86_64_mnemonic_strings_str7[sizeof("vpcmpeqq")];
    char spasm_x86_64_mnemonic_strings_str8[sizeof("vpcmpgtq")];
    char spasm_x86_64_mnemonic_strings_str9[sizeof("vpcmpd")];
    char spasm_x86_64_mnemonic_strings_str10[sizeof("vpcmpud")];
    char spasm_x86_64_mnemonic_strings_str11[sizeof("vpcmpeqd")];
    char spasm_x86_64_mnemonic_strings_str12[sizeof("vpcmpgtd")];
    char spasm_x86_64_mnemonic_strings_str13[sizeof("vpcmpw")];
    char spasm_x86_64_mnemonic_strings_str14[sizeof("vpcmpuw")];
    char spasm_x86_64_mnemonic_strings_str15[sizeof("vpcmpeqw")];
    char spasm_x86_64_mnemonic_strings_str16[sizeof("vpcmpgtw")];
    char spasm_x86_64_mnemonic_strings_str17[sizeof("vdppd")];
    char spasm_x86_64_mnemonic_strings_str18[sizeof("vpcompressq")];
    char spasm_x86_64_mnemonic_strings_str19[sizeof("vpconflictq")];
    char spasm_x86_64_mnemonic_strings_str20[sizeof("vprolq")];
    char spasm_x86_64_mnemonic_strings_str21[sizeof("vprorq")];
    char spasm_x86_64_mnemonic_strings_str22[sizeof("vprolvq")];
    char spasm_x86_64_mnemonic_strings_str23[sizeof("vprorvq")];
    char spasm_x86_64_mnemonic_strings_str24[sizeof("vpcompressd")];
    char spasm_x86_64_mnemonic_strings_str25[sizeof("vpconflictd")];
    char spasm_x86_64_mnemonic_strings_str26[sizeof("vdpps")];
    char spasm_x86_64_mnemonic_strings_str27[sizeof("vprold")];
    char spasm_x86_64_mnemonic_strings_str28[sizeof("vprord")];
    char spasm_x86_64_mnemonic_strings_str29[sizeof("vprolvd")];
    char spasm_x86_64_mnemonic_strings_str30[sizeof("vprorvd")];
    char spasm_x86_64_mnemonic_strings_str31[sizeof("vpclmulqdq")];
    char spasm_x86_64_mnemonic_strings_str32[sizeof("stc")];
    char spasm_x86_64_mnemonic_strings_str33[sizeof("vpsllq")];
    char spasm_x86_64_mnemonic_strings_str34[sizeof("vpslldq")];
    char spasm_x86_64_mnemonic_strings_str35[sizeof("vpsllvq")];
    char spasm_x86_64_mnemonic_strings_str36[sizeof("vpopcntq")];
    char spasm_x86_64_mnemonic_strings_str37[sizeof("vpslld")];
    char spasm_x86_64_mnemonic_strings_str38[sizeof("vpsllvd")];
    char spasm_x86_64_mnemonic_strings_str39[sizeof("vpopcntd")];
    char spasm_x86_64_mnemonic_strings_str40[sizeof("vpsllw")];
    char spasm_x86_64_mnemonic_strings_str41[sizeof("vpsllvw")];
    char spasm_x86_64_mnemonic_strings_str42[sizeof("vporq")];
    char spasm_x86_64_mnemonic_strings_str43[sizeof("vpord")];
    char spasm_x86_64_mnemonic_strings_str44[sizeof("psllq")];
    char spasm_x86_64_mnemonic_strings_str45[sizeof("pslldq")];
    char spasm_x86_64_mnemonic_strings_str46[sizeof("pslld")];
    char spasm_x86_64_mnemonic_strings_str47[sizeof("vpsraq")];
    char spasm_x86_64_mnemonic_strings_str48[sizeof("vpsrlq")];
    char spasm_x86_64_mnemonic_strings_str49[sizeof("vpsravq")];
    char spasm_x86_64_mnemonic_strings_str50[sizeof("vpsrlvq")];
    char spasm_x86_64_mnemonic_strings_str51[sizeof("vpsrldq")];
    char spasm_x86_64_mnemonic_strings_str52[sizeof("psllw")];
    char spasm_x86_64_mnemonic_strings_str53[sizeof("vcomisd")];
    char spasm_x86_64_mnemonic_strings_str54[sizeof("vpsrad")];
    char spasm_x86_64_mnemonic_strings_str55[sizeof("vpsrld")];
    char spasm_x86_64_mnemonic_strings_str56[sizeof("vpsravd")];
    char spasm_x86_64_mnemonic_strings_str57[sizeof("vpsrlvd")];
    char spasm_x86_64_mnemonic_strings_str58[sizeof("vmpsadbw")];
    char spasm_x86_64_mnemonic_strings_str59[sizeof("vcompresspd")];
    char spasm_x86_64_mnemonic_strings_str60[sizeof("vpsraw")];
    char spasm_x86_64_mnemonic_strings_str61[sizeof("vpsrlw")];
    char spasm_x86_64_mnemonic_strings_str62[sizeof("vpsravw")];
    char spasm_x86_64_mnemonic_strings_str63[sizeof("vpsrlvw")];
    char spasm_x86_64_mnemonic_strings_str64[sizeof("vcomiss")];
    char spasm_x86_64_mnemonic_strings_str65[sizeof("vplzcntq")];
    char spasm_x86_64_mnemonic_strings_str66[sizeof("vcompressps")];
    char spasm_x86_64_mnemonic_strings_str67[sizeof("vplzcntd")];
    char spasm_x86_64_mnemonic_strings_str68[sizeof("vpcmpestrm")];
    char spasm_x86_64_mnemonic_strings_str69[sizeof("vpcmpistrm")];
    char spasm_x86_64_mnemonic_strings_str70[sizeof("vpblendmq")];
    char spasm_x86_64_mnemonic_strings_str71[sizeof("vdbpsadbw")];
    char spasm_x86_64_mnemonic_strings_str72[sizeof("vpblendd")];
    char spasm_x86_64_mnemonic_strings_str73[sizeof("vpblendmd")];
    char spasm_x86_64_mnemonic_strings_str74[sizeof("vpblendw")];
    char spasm_x86_64_mnemonic_strings_str75[sizeof("vpblendmw")];
    char spasm_x86_64_mnemonic_strings_str76[sizeof("cmpsd")];
    char spasm_x86_64_mnemonic_strings_str77[sizeof("pmuldq")];
    char spasm_x86_64_mnemonic_strings_str78[sizeof("pmuludq")];
    char spasm_x86_64_mnemonic_strings_str79[sizeof("cmp")];
    char spasm_x86_64_mnemonic_strings_str80[sizeof("pmulld")];
    char spasm_x86_64_mnemonic_strings_str81[sizeof("cmpss")];
    char spasm_x86_64_mnemonic_strings_str82[sizeof("pmulhw")];
    char spasm_x86_64_mnemonic_strings_str83[sizeof("pmullw")];
    char spasm_x86_64_mnemonic_strings_str84[sizeof("pmulhuw")];
    char spasm_x86_64_mnemonic_strings_str85[sizeof("pmulhrsw")];
    char spasm_x86_64_mnemonic_strings_str86[sizeof("pclmulqdq")];
    char spasm_x86_64_mnemonic_strings_str87[sizeof("bt")];
    char spasm_x86_64_mnemonic_strings_str88[sizeof("vpsignd")];
    char spasm_x86_64_mnemonic_strings_str89[sizeof("vpbroadcastq")];
    char spasm_x86_64_mnemonic_strings_str90[sizeof("vpsignw")];
    char spasm_x86_64_mnemonic_strings_str91[sizeof("vpbroadcastmb2q")];
    char spasm_x86_64_mnemonic_strings_str92[sizeof("vpbroadcastd")];
    char spasm_x86_64_mnemonic_strings_str93[sizeof("cmppd")];
    char spasm_x86_64_mnemonic_strings_str94[sizeof("vpbroadcastmw2d")];
    char spasm_x86_64_mnemonic_strings_str95[sizeof("vpbroadcastw")];
    char spasm_x86_64_mnemonic_strings_str96[sizeof("bts")];
    char spasm_x86_64_mnemonic_strings_str97[sizeof("vmulpd")];
    char spasm_x86_64_mnemonic_strings_str98[sizeof("vmulsd")];
    char spasm_x86_64_mnemonic_strings_str99[sizeof("cmpps")];
    char spasm_x86_64_mnemonic_strings_str100[sizeof("cdq")];
    char spasm_x86_64_mnemonic_strings_str101[sizeof("vpcmpb")];
    char spasm_x86_64_mnemonic_strings_str102[sizeof("vpcmpub")];
    char spasm_x86_64_mnemonic_strings_str103[sizeof("vpcmpeqb")];
    char spasm_x86_64_mnemonic_strings_str104[sizeof("vpcmpgtb")];
    char spasm_x86_64_mnemonic_strings_str105[sizeof("vmulps")];
    char spasm_x86_64_mnemonic_strings_str106[sizeof("vmulss")];
    char spasm_x86_64_mnemonic_strings_str107[sizeof("vbroadcastsd")];
    char spasm_x86_64_mnemonic_strings_str108[sizeof("vbroadcastf128")];
    char spasm_x86_64_mnemonic_strings_str109[sizeof("vbroadcasti128")];
    char spasm_x86_64_mnemonic_strings_str110[sizeof("vbroadcastf32x8")];
    char spasm_x86_64_mnemonic_strings_str111[sizeof("vbroadcasti32x8")];
    char spasm_x86_64_mnemonic_strings_str112[sizeof("vbroadcastss")];
    char spasm_x86_64_mnemonic_strings_str113[sizeof("vrcp14pd")];
    char spasm_x86_64_mnemonic_strings_str114[sizeof("vrcp14sd")];
    char spasm_x86_64_mnemonic_strings_str115[sizeof("vbroadcastf32x2")];
    char spasm_x86_64_mnemonic_strings_str116[sizeof("vbroadcasti64x2")];
    char spasm_x86_64_mnemonic_strings_str117[sizeof("vbroadcasti32x2")];
    char spasm_x86_64_mnemonic_strings_str118[sizeof("vbroadcastf64x2")];
    char spasm_x86_64_mnemonic_strings_str119[sizeof("vbroadcastf32x4")];
    char spasm_x86_64_mnemonic_strings_str120[sizeof("vbroadcasti64x4")];
    char spasm_x86_64_mnemonic_strings_str121[sizeof("vbroadcasti32x4")];
    char spasm_x86_64_mnemonic_strings_str122[sizeof("vbroadcastf64x4")];
    char spasm_x86_64_mnemonic_strings_str123[sizeof("vrcpps")];
    char spasm_x86_64_mnemonic_strings_str124[sizeof("vrcpss")];
    char spasm_x86_64_mnemonic_strings_str125[sizeof("rcpss")];
    char spasm_x86_64_mnemonic_strings_str126[sizeof("vrcp14ps")];
    char spasm_x86_64_mnemonic_strings_str127[sizeof("vrcp14ss")];
    char spasm_x86_64_mnemonic_strings_str128[sizeof("crc32")];
    char spasm_x86_64_mnemonic_strings_str129[sizeof("cpuid")];
    char spasm_x86_64_mnemonic_strings_str130[sizeof("cmc")];
    char spasm_x86_64_mnemonic_strings_str131[sizeof("vsqrtpd")];
    char spasm_x86_64_mnemonic_strings_str132[sizeof("vsqrtsd")];
    char spasm_x86_64_mnemonic_strings_str133[sizeof("btc")];
    char spasm_x86_64_mnemonic_strings_str134[sizeof("std")];
    char spasm_x86_64_mnemonic_strings_str135[sizeof("vsqrtps")];
    char spasm_x86_64_mnemonic_strings_str136[sizeof("vsqrtss")];
    char spasm_x86_64_mnemonic_strings_str137[sizeof("vpunpckhdq")];
    char spasm_x86_64_mnemonic_strings_str138[sizeof("vpunpckldq")];
    char spasm_x86_64_mnemonic_strings_str139[sizeof("vpunpckhqdq")];
    char spasm_x86_64_mnemonic_strings_str140[sizeof("vpunpcklqdq")];
    char spasm_x86_64_mnemonic_strings_str141[sizeof("rcpps")];
    char spasm_x86_64_mnemonic_strings_str142[sizeof("psrad")];
    char spasm_x86_64_mnemonic_strings_str143[sizeof("vpunpckhwd")];
    char spasm_x86_64_mnemonic_strings_str144[sizeof("vpunpcklwd")];
    char spasm_x86_64_mnemonic_strings_str145[sizeof("psraw")];
    char spasm_x86_64_mnemonic_strings_str146[sizeof("vpunpckhbw")];
    char spasm_x86_64_mnemonic_strings_str147[sizeof("vpunpcklbw")];
    char spasm_x86_64_mnemonic_strings_str148[sizeof("vpor")];
    char spasm_x86_64_mnemonic_strings_str149[sizeof("pop")];
    char spasm_x86_64_mnemonic_strings_str150[sizeof("vscalefpd")];
    char spasm_x86_64_mnemonic_strings_str151[sizeof("vscalefsd")];
    char spasm_x86_64_mnemonic_strings_str152[sizeof("vscatterdpd")];
    char spasm_x86_64_mnemonic_strings_str153[sizeof("vscatterqpd")];
    char spasm_x86_64_mnemonic_strings_str154[sizeof("vscalefps")];
    char spasm_x86_64_mnemonic_strings_str155[sizeof("vscalefss")];
    char spasm_x86_64_mnemonic_strings_str156[sizeof("vscatterdps")];
    char spasm_x86_64_mnemonic_strings_str157[sizeof("vscatterqps")];
    char spasm_x86_64_mnemonic_strings_str158[sizeof("dec")];
    char spasm_x86_64_mnemonic_strings_str159[sizeof("bsr")];
    char spasm_x86_64_mnemonic_strings_str160[sizeof("vmaskmovpd")];
    char spasm_x86_64_mnemonic_strings_str161[sizeof("ud2")];
    char spasm_x86_64_mnemonic_strings_str162[sizeof("cwd")];
    char spasm_x86_64_mnemonic_strings_str163[sizeof("vmaskmovps")];
    char spasm_x86_64_mnemonic_strings_str164[sizeof("dppd")];
    char spasm_x86_64_mnemonic_strings_str165[sizeof("vpblendmb")];
    char spasm_x86_64_mnemonic_strings_str166[sizeof("vpblendvb")];
    char spasm_x86_64_mnemonic_strings_str167[sizeof("btr")];
    char spasm_x86_64_mnemonic_strings_str168[sizeof("vpsadbw")];
    char spasm_x86_64_mnemonic_strings_str169[sizeof("vpsignb")];
    char spasm_x86_64_mnemonic_strings_str170[sizeof("cqo")];
    char spasm_x86_64_mnemonic_strings_str171[sizeof("vorpd")];
    char spasm_x86_64_mnemonic_strings_str172[sizeof("vpbroadcastb")];
    char spasm_x86_64_mnemonic_strings_str173[sizeof("rsqrtps")];
    char spasm_x86_64_mnemonic_strings_str174[sizeof("rsqrtss")];
    char spasm_x86_64_mnemonic_strings_str175[sizeof("vorps")];
    char spasm_x86_64_mnemonic_strings_str176[sizeof("vpandq")];
    char spasm_x86_64_mnemonic_strings_str177[sizeof("vpandnq")];
    char spasm_x86_64_mnemonic_strings_str178[sizeof("movmskpd")];
    char spasm_x86_64_mnemonic_strings_str179[sizeof("vpand")];
    char spasm_x86_64_mnemonic_strings_str180[sizeof("vpandd")];
    char spasm_x86_64_mnemonic_strings_str181[sizeof("vpandnd")];
    char spasm_x86_64_mnemonic_strings_str182[sizeof("vucomisd")];
    char spasm_x86_64_mnemonic_strings_str183[sizeof("movsd")];
    char spasm_x86_64_mnemonic_strings_str184[sizeof("movsxd")];
    char spasm_x86_64_mnemonic_strings_str185[sizeof("movmskps")];
    char spasm_x86_64_mnemonic_strings_str186[sizeof("rcr")];
    char spasm_x86_64_mnemonic_strings_str187[sizeof("vucomiss")];
    char spasm_x86_64_mnemonic_strings_str188[sizeof("movss")];
    char spasm_x86_64_mnemonic_strings_str189[sizeof("mwait")];
    char spasm_x86_64_mnemonic_strings_str190[sizeof("sbb")];
    char spasm_x86_64_mnemonic_strings_str191[sizeof("mpsadbw")];
    char spasm_x86_64_mnemonic_strings_str192[sizeof("movlpd")];
    char spasm_x86_64_mnemonic_strings_str193[sizeof("rdrand")];
    char spasm_x86_64_mnemonic_strings_str194[sizeof("vpalignr")];
    char spasm_x86_64_mnemonic_strings_str195[sizeof("movshdup")];
    char spasm_x86_64_mnemonic_strings_str196[sizeof("movsldup")];
    char spasm_x86_64_mnemonic_strings_str197[sizeof("movlps")];
    char spasm_x86_64_mnemonic_strings_str198[sizeof("movlhps")];
    char spasm_x86_64_mnemonic_strings_str199[sizeof("mov")];
    char spasm_x86_64_mnemonic_strings_str200[sizeof("subsd")];
    char spasm_x86_64_mnemonic_strings_str201[sizeof("ucomisd")];
    char spasm_x86_64_mnemonic_strings_str202[sizeof("subss")];
    char spasm_x86_64_mnemonic_strings_str203[sizeof("ucomiss")];
    char spasm_x86_64_mnemonic_strings_str204[sizeof("adc")];
    char spasm_x86_64_mnemonic_strings_str205[sizeof("orps")];
    char spasm_x86_64_mnemonic_strings_str206[sizeof("por")];
    char spasm_x86_64_mnemonic_strings_str207[sizeof("subpd")];
    char spasm_x86_64_mnemonic_strings_str208[sizeof("subps")];
    char spasm_x86_64_mnemonic_strings_str209[sizeof("cvtsi2sd")];
    char spasm_x86_64_mnemonic_strings_str210[sizeof("cvtss2sd")];
    char spasm_x86_64_mnemonic_strings_str211[sizeof("pabsd")];
    char spasm_x86_64_mnemonic_strings_str212[sizeof("cvtsd2ss")];
    char spasm_x86_64_mnemonic_strings_str213[sizeof("cvtsi2ss")];
    char spasm_x86_64_mnemonic_strings_str214[sizeof("shr")];
    char spasm_x86_64_mnemonic_strings_str215[sizeof("pabsw")];
    char spasm_x86_64_mnemonic_strings_str216[sizeof("sha1msg1")];
    char spasm_x86_64_mnemonic_strings_str217[sizeof("cvtpd2dq")];
    char spasm_x86_64_mnemonic_strings_str218[sizeof("cvtps2dq")];
    char spasm_x86_64_mnemonic_strings_str219[sizeof("sha1msg2")];
    char spasm_x86_64_mnemonic_strings_str220[sizeof("sha1rnds4")];
    char spasm_x86_64_mnemonic_strings_str221[sizeof("cvtpi2pd")];
    char spasm_x86_64_mnemonic_strings_str222[sizeof("cvtps2pd")];
    char spasm_x86_64_mnemonic_strings_str223[sizeof("sha256msg1")];
    char spasm_x86_64_mnemonic_strings_str224[sizeof("rdtscp")];
    char spasm_x86_64_mnemonic_strings_str225[sizeof("cvtpd2ps")];
    char spasm_x86_64_mnemonic_strings_str226[sizeof("cvtpi2ps")];
    char spasm_x86_64_mnemonic_strings_str227[sizeof("psadbw")];
    char spasm_x86_64_mnemonic_strings_str228[sizeof("sha256msg2")];
    char spasm_x86_64_mnemonic_strings_str229[sizeof("sha256rnds2")];
    char spasm_x86_64_mnemonic_strings_str230[sizeof("vrangepd")];
    char spasm_x86_64_mnemonic_strings_str231[sizeof("vrangesd")];
    char spasm_x86_64_mnemonic_strings_str232[sizeof("sar")];
    char spasm_x86_64_mnemonic_strings_str233[sizeof("vrangeps")];
    char spasm_x86_64_mnemonic_strings_str234[sizeof("vrangess")];
    char spasm_x86_64_mnemonic_strings_str235[sizeof("mulsd")];
    char spasm_x86_64_mnemonic_strings_str236[sizeof("movntdq")];
    char spasm_x86_64_mnemonic_strings_str237[sizeof("vstmxcsr")];
    char spasm_x86_64_mnemonic_strings_str238[sizeof("mulss")];
    char spasm_x86_64_mnemonic_strings_str239[sizeof("movntpd")];
    char spasm_x86_64_mnemonic_strings_str240[sizeof("movntsd")];
    char spasm_x86_64_mnemonic_strings_str241[sizeof("vpaddq")];
    char spasm_x86_64_mnemonic_strings_str242[sizeof("movntps")];
    char spasm_x86_64_mnemonic_strings_str243[sizeof("movntss")];
    char spasm_x86_64_mnemonic_strings_str244[sizeof("vpaddd")];
    char spasm_x86_64_mnemonic_strings_str245[sizeof("vpaddw")];
    char spasm_x86_64_mnemonic_strings_str246[sizeof("vpaddsw")];
    char spasm_x86_64_mnemonic_strings_str247[sizeof("vpaddusw")];
    char spasm_x86_64_mnemonic_strings_str248[sizeof("mulpd")];
    char spasm_x86_64_mnemonic_strings_str249[sizeof("or")];
    char spasm_x86_64_mnemonic_strings_str250[sizeof("sub")];
    char spasm_x86_64_mnemonic_strings_str251[sizeof("mulps")];
    char spasm_x86_64_mnemonic_strings_str252[sizeof("vrsqrt14pd")];
    char spasm_x86_64_mnemonic_strings_str253[sizeof("vrsqrt14sd")];
    char spasm_x86_64_mnemonic_strings_str254[sizeof("rdtsc")];
    char spasm_x86_64_mnemonic_strings_str255[sizeof("vrsqrtps")];
    char spasm_x86_64_mnemonic_strings_str256[sizeof("vrsqrtss")];
    char spasm_x86_64_mnemonic_strings_str257[sizeof("vrsqrt14ps")];
    char spasm_x86_64_mnemonic_strings_str258[sizeof("vrsqrt14ss")];
    char spasm_x86_64_mnemonic_strings_str259[sizeof("ror")];
    char spasm_x86_64_mnemonic_strings_str260[sizeof("sets")];
    char spasm_x86_64_mnemonic_strings_str261[sizeof("add")];
    char spasm_x86_64_mnemonic_strings_str262[sizeof("pmaddwd")];
    char spasm_x86_64_mnemonic_strings_str263[sizeof("pmaddubsw")];
    char spasm_x86_64_mnemonic_strings_str264[sizeof("addsd")];
    char spasm_x86_64_mnemonic_strings_str265[sizeof("valignq")];
    char spasm_x86_64_mnemonic_strings_str266[sizeof("addsubpd")];
    char spasm_x86_64_mnemonic_strings_str267[sizeof("valignd")];
    char spasm_x86_64_mnemonic_strings_str268[sizeof("addss")];
    char spasm_x86_64_mnemonic_strings_str269[sizeof("addsubps")];
    char spasm_x86_64_mnemonic_strings_str270[sizeof("movapd")];
    char spasm_x86_64_mnemonic_strings_str271[sizeof("setp")];
    char spasm_x86_64_mnemonic_strings_str272[sizeof("vpgatherdq")];
    char spasm_x86_64_mnemonic_strings_str273[sizeof("vpgatherqq")];
    char spasm_x86_64_mnemonic_strings_str274[sizeof("pabsb")];
    char spasm_x86_64_mnemonic_strings_str275[sizeof("movaps")];
    char spasm_x86_64_mnemonic_strings_str276[sizeof("vpgatherdd")];
    char spasm_x86_64_mnemonic_strings_str277[sizeof("vpgatherqd")];
    char spasm_x86_64_mnemonic_strings_str278[sizeof("addpd")];
    char spasm_x86_64_mnemonic_strings_str279[sizeof("roundpd")];
    char spasm_x86_64_mnemonic_strings_str280[sizeof("roundsd")];
    char spasm_x86_64_mnemonic_strings_str281[sizeof("vmaskmovdqu")];
    char spasm_x86_64_mnemonic_strings_str282[sizeof("addps")];
    char spasm_x86_64_mnemonic_strings_str283[sizeof("roundps")];
    char spasm_x86_64_mnemonic_strings_str284[sizeof("roundss")];
    char spasm_x86_64_mnemonic_strings_str285[sizeof("shrd")];
    char spasm_x86_64_mnemonic_strings_str286[sizeof("punpckhdq")];
    char spasm_x86_64_mnemonic_strings_str287[sizeof("punpckldq")];
    char spasm_x86_64_mnemonic_strings_str288[sizeof("punpckhqdq")];
    char spasm_x86_64_mnemonic_strings_str289[sizeof("punpcklqdq")];
    char spasm_x86_64_mnemonic_strings_str290[sizeof("punpckhwd")];
    char spasm_x86_64_mnemonic_strings_str291[sizeof("punpcklwd")];
    char spasm_x86_64_mnemonic_strings_str292[sizeof("punpckhbw")];
    char spasm_x86_64_mnemonic_strings_str293[sizeof("punpcklbw")];
    char spasm_x86_64_mnemonic_strings_str294[sizeof("packssdw")];
    char spasm_x86_64_mnemonic_strings_str295[sizeof("packusdw")];
    char spasm_x86_64_mnemonic_strings_str296[sizeof("pause")];
    char spasm_x86_64_mnemonic_strings_str297[sizeof("vunpckhpd")];
    char spasm_x86_64_mnemonic_strings_str298[sizeof("vunpcklpd")];
    char spasm_x86_64_mnemonic_strings_str299[sizeof("vunpckhps")];
    char spasm_x86_64_mnemonic_strings_str300[sizeof("vunpcklps")];
    char spasm_x86_64_mnemonic_strings_str301[sizeof("movd")];
    char spasm_x86_64_mnemonic_strings_str302[sizeof("movq")];
    char spasm_x86_64_mnemonic_strings_str303[sizeof("vpaddb")];
    char spasm_x86_64_mnemonic_strings_str304[sizeof("vpaddsb")];
    char spasm_x86_64_mnemonic_strings_str305[sizeof("vpaddusb")];
    char spasm_x86_64_mnemonic_strings_str306[sizeof("pdep")];
    char spasm_x86_64_mnemonic_strings_str307[sizeof("psubq")];
    char spasm_x86_64_mnemonic_strings_str308[sizeof("psubd")];
    char spasm_x86_64_mnemonic_strings_str309[sizeof("psubw")];
    char spasm_x86_64_mnemonic_strings_str310[sizeof("psubsw")];
    char spasm_x86_64_mnemonic_strings_str311[sizeof("psubusw")];
    char spasm_x86_64_mnemonic_strings_str312[sizeof("movddup")];
    char spasm_x86_64_mnemonic_strings_str313[sizeof("sha1nexte")];
    char spasm_x86_64_mnemonic_strings_str314[sizeof("vtestpd")];
    char spasm_x86_64_mnemonic_strings_str315[sizeof("ptest")];
    char spasm_x86_64_mnemonic_strings_str316[sizeof("vtestps")];
    char spasm_x86_64_mnemonic_strings_str317[sizeof("setns")];
    char spasm_x86_64_mnemonic_strings_str318[sizeof("palignr")];
    char spasm_x86_64_mnemonic_strings_str319[sizeof("ret")];
    char spasm_x86_64_mnemonic_strings_str320[sizeof("shld")];
    char spasm_x86_64_mnemonic_strings_str321[sizeof("orpd")];
    char spasm_x86_64_mnemonic_strings_str322[sizeof("vsubpd")];
    char spasm_x86_64_mnemonic_strings_str323[sizeof("vsubsd")];
    char spasm_x86_64_mnemonic_strings_str324[sizeof("setnp")];
    char spasm_x86_64_mnemonic_strings_str325[sizeof("vpermq")];
    char spasm_x86_64_mnemonic_strings_str326[sizeof("vsubps")];
    char spasm_x86_64_mnemonic_strings_str327[sizeof("vsubss")];
    char spasm_x86_64_mnemonic_strings_str328[sizeof("vpermi2q")];
    char spasm_x86_64_mnemonic_strings_str329[sizeof("vpermt2q")];
    char spasm_x86_64_mnemonic_strings_str330[sizeof("vpermd")];
    char spasm_x86_64_mnemonic_strings_str331[sizeof("vpermpd")];
    char spasm_x86_64_mnemonic_strings_str332[sizeof("vpermi2d")];
    char spasm_x86_64_mnemonic_strings_str333[sizeof("vpermt2d")];
    char spasm_x86_64_mnemonic_strings_str334[sizeof("vpermi2pd")];
    char spasm_x86_64_mnemonic_strings_str335[sizeof("vpermt2pd")];
    char spasm_x86_64_mnemonic_strings_str336[sizeof("vpermilpd")];
    char spasm_x86_64_mnemonic_strings_str337[sizeof("vpermw")];
    char spasm_x86_64_mnemonic_strings_str338[sizeof("vpermi2w")];
    char spasm_x86_64_mnemonic_strings_str339[sizeof("vpermt2w")];
    char spasm_x86_64_mnemonic_strings_str340[sizeof("vperm2f128")];
    char spasm_x86_64_mnemonic_strings_str341[sizeof("vperm2i128")];
    char spasm_x86_64_mnemonic_strings_str342[sizeof("vpermps")];
    char spasm_x86_64_mnemonic_strings_str343[sizeof("vpermi2ps")];
    char spasm_x86_64_mnemonic_strings_str344[sizeof("vpermt2ps")];
    char spasm_x86_64_mnemonic_strings_str345[sizeof("vpermilps")];
    char spasm_x86_64_mnemonic_strings_str346[sizeof("cvtdq2pd")];
    char spasm_x86_64_mnemonic_strings_str347[sizeof("cvtdq2ps")];
    char spasm_x86_64_mnemonic_strings_str348[sizeof("vpmovm2q")];
    char spasm_x86_64_mnemonic_strings_str349[sizeof("vpmovsxbq")];
    char spasm_x86_64_mnemonic_strings_str350[sizeof("vpmovzxwq")];
    char spasm_x86_64_mnemonic_strings_str351[sizeof("vpmovzxdq")];
    char spasm_x86_64_mnemonic_strings_str352[sizeof("vpmovzxbq")];
    char spasm_x86_64_mnemonic_strings_str353[sizeof("vpmovsxwq")];
    char spasm_x86_64_mnemonic_strings_str354[sizeof("vpmovsxdq")];
    char spasm_x86_64_mnemonic_strings_str355[sizeof("vpmovqd")];
    char spasm_x86_64_mnemonic_strings_str356[sizeof("vpmovm2d")];
    char spasm_x86_64_mnemonic_strings_str357[sizeof("vpmovsqd")];
    char spasm_x86_64_mnemonic_strings_str358[sizeof("vpmovsxbd")];
    char spasm_x86_64_mnemonic_strings_str359[sizeof("vpmovzxwd")];
    char spasm_x86_64_mnemonic_strings_str360[sizeof("vpmovzxbd")];
    char spasm_x86_64_mnemonic_strings_str361[sizeof("vpmovusqd")];
    char spasm_x86_64_mnemonic_strings_str362[sizeof("vpmovsxwd")];
    char spasm_x86_64_mnemonic_strings_str363[sizeof("vpmovdw")];
    char spasm_x86_64_mnemonic_strings_str364[sizeof("vpmovqw")];
    char spasm_x86_64_mnemonic_strings_str365[sizeof("vpmovm2w")];
    char spasm_x86_64_mnemonic_strings_str366[sizeof("vpmovsqw")];
    char spasm_x86_64_mnemonic_strings_str367[sizeof("vpmovsdw")];
    char spasm_x86_64_mnemonic_strings_str368[sizeof("vpmovsxbw")];
    char spasm_x86_64_mnemonic_strings_str369[sizeof("vpmovzxbw")];
    char spasm_x86_64_mnemonic_strings_str370[sizeof("vpmovusqw")];
    char spasm_x86_64_mnemonic_strings_str371[sizeof("vpmovusdw")];
    char spasm_x86_64_mnemonic_strings_str372[sizeof("vrndscalepd")];
    char spasm_x86_64_mnemonic_strings_str373[sizeof("vrndscalesd")];
    char spasm_x86_64_mnemonic_strings_str374[sizeof("setnc")];
    char spasm_x86_64_mnemonic_strings_str375[sizeof("vrndscaleps")];
    char spasm_x86_64_mnemonic_strings_str376[sizeof("vrndscaless")];
    char spasm_x86_64_mnemonic_strings_str377[sizeof("phaddd")];
    char spasm_x86_64_mnemonic_strings_str378[sizeof("phaddw")];
    char spasm_x86_64_mnemonic_strings_str379[sizeof("phaddsw")];
    char spasm_x86_64_mnemonic_strings_str380[sizeof("packsswb")];
    char spasm_x86_64_mnemonic_strings_str381[sizeof("packuswb")];
    char spasm_x86_64_mnemonic_strings_str382[sizeof("aesimc")];
    char spasm_x86_64_mnemonic_strings_str383[sizeof("setle")];
    char spasm_x86_64_mnemonic_strings_str384[sizeof("vhaddpd")];
    char spasm_x86_64_mnemonic_strings_str385[sizeof("setpe")];
    char spasm_x86_64_mnemonic_strings_str386[sizeof("pcmpeqq")];
    char spasm_x86_64_mnemonic_strings_str387[sizeof("pcmpgtq")];
    char spasm_x86_64_mnemonic_strings_str388[sizeof("vhaddps")];
    char spasm_x86_64_mnemonic_strings_str389[sizeof("pcmpeqd")];
    char spasm_x86_64_mnemonic_strings_str390[sizeof("pcmpgtd")];
    char spasm_x86_64_mnemonic_strings_str391[sizeof("seto")];
    char spasm_x86_64_mnemonic_strings_str392[sizeof("vpabsq")];
    char spasm_x86_64_mnemonic_strings_str393[sizeof("pcmpeqw")];
    char spasm_x86_64_mnemonic_strings_str394[sizeof("pcmpgtw")];
    char spasm_x86_64_mnemonic_strings_str395[sizeof("vpabsd")];
    char spasm_x86_64_mnemonic_strings_str396[sizeof("vpabsw")];
    char spasm_x86_64_mnemonic_strings_str397[sizeof("psubb")];
    char spasm_x86_64_mnemonic_strings_str398[sizeof("psubsb")];
    char spasm_x86_64_mnemonic_strings_str399[sizeof("psubusb")];
    char spasm_x86_64_mnemonic_strings_str400[sizeof("vpminsq")];
    char spasm_x86_64_mnemonic_strings_str401[sizeof("vpminuq")];
    char spasm_x86_64_mnemonic_strings_str402[sizeof("setpo")];
    char spasm_x86_64_mnemonic_strings_str403[sizeof("setnb")];
    char spasm_x86_64_mnemonic_strings_str404[sizeof("vcmppd")];
    char spasm_x86_64_mnemonic_strings_str405[sizeof("vcmpsd")];
    char spasm_x86_64_mnemonic_strings_str406[sizeof("vpminsd")];
    char spasm_x86_64_mnemonic_strings_str407[sizeof("vpminud")];
    char spasm_x86_64_mnemonic_strings_str408[sizeof("vpminsw")];
    char spasm_x86_64_mnemonic_strings_str409[sizeof("vpminuw")];
    char spasm_x86_64_mnemonic_strings_str410[sizeof("vcmpps")];
    char spasm_x86_64_mnemonic_strings_str411[sizeof("vcmpss")];
    char spasm_x86_64_mnemonic_strings_str412[sizeof("vpmovb2m")];
    char spasm_x86_64_mnemonic_strings_str413[sizeof("vpmovw2m")];
    char spasm_x86_64_mnemonic_strings_str414[sizeof("vpmovq2m")];
    char spasm_x86_64_mnemonic_strings_str415[sizeof("vpmovd2m")];
    char spasm_x86_64_mnemonic_strings_str416[sizeof("movntdqa")];
    char spasm_x86_64_mnemonic_strings_str417[sizeof("vpscatterdq")];
    char spasm_x86_64_mnemonic_strings_str418[sizeof("vpscatterqq")];
    char spasm_x86_64_mnemonic_strings_str419[sizeof("monitor")];
    char spasm_x86_64_mnemonic_strings_str420[sizeof("vpscatterdd")];
    char spasm_x86_64_mnemonic_strings_str421[sizeof("vpscatterqd")];
    char spasm_x86_64_mnemonic_strings_str422[sizeof("vpermb")];
    char spasm_x86_64_mnemonic_strings_str423[sizeof("vpermi2b")];
    char spasm_x86_64_mnemonic_strings_str424[sizeof("vpermt2b")];
    char spasm_x86_64_mnemonic_strings_str425[sizeof("paddq")];
    char spasm_x86_64_mnemonic_strings_str426[sizeof("paddd")];
    char spasm_x86_64_mnemonic_strings_str427[sizeof("korw")];
    char spasm_x86_64_mnemonic_strings_str428[sizeof("paddw")];
    char spasm_x86_64_mnemonic_strings_str429[sizeof("paddsw")];
    char spasm_x86_64_mnemonic_strings_str430[sizeof("paddusw")];
    char spasm_x86_64_mnemonic_strings_str431[sizeof("vpmovdb")];
    char spasm_x86_64_mnemonic_strings_str432[sizeof("vpmovwb")];
    char spasm_x86_64_mnemonic_strings_str433[sizeof("vpmovqb")];
    char spasm_x86_64_mnemonic_strings_str434[sizeof("vpmovm2b")];
    char spasm_x86_64_mnemonic_strings_str435[sizeof("vpmovswb")];
    char spasm_x86_64_mnemonic_strings_str436[sizeof("vpmovsqb")];
    char spasm_x86_64_mnemonic_strings_str437[sizeof("vpmovsdb")];
    char spasm_x86_64_mnemonic_strings_str438[sizeof("vpmovmskb")];
    char spasm_x86_64_mnemonic_strings_str439[sizeof("vpmovuswb")];
    char spasm_x86_64_mnemonic_strings_str440[sizeof("vpmovusqb")];
    char spasm_x86_64_mnemonic_strings_str441[sizeof("vpmovusdb")];
    char spasm_x86_64_mnemonic_strings_str442[sizeof("aeskeygenassist")];
    char spasm_x86_64_mnemonic_strings_str443[sizeof("pcmpestrm")];
    char spasm_x86_64_mnemonic_strings_str444[sizeof("pcmpistrm")];
    char spasm_x86_64_mnemonic_strings_str445[sizeof("vfnmadd132pd")];
    char spasm_x86_64_mnemonic_strings_str446[sizeof("vfnmsub231sd")];
    char spasm_x86_64_mnemonic_strings_str447[sizeof("vfnmsub231pd")];
    char spasm_x86_64_mnemonic_strings_str448[sizeof("vfnmsub213sd")];
    char spasm_x86_64_mnemonic_strings_str449[sizeof("vfnmsub213pd")];
    char spasm_x86_64_mnemonic_strings_str450[sizeof("vfnmsub132sd")];
    char spasm_x86_64_mnemonic_strings_str451[sizeof("vfnmsub132pd")];
    char spasm_x86_64_mnemonic_strings_str452[sizeof("vfnmadd231sd")];
    char spasm_x86_64_mnemonic_strings_str453[sizeof("vfnmadd231pd")];
    char spasm_x86_64_mnemonic_strings_str454[sizeof("vfnmadd213sd")];
    char spasm_x86_64_mnemonic_strings_str455[sizeof("vfnmadd213pd")];
    char spasm_x86_64_mnemonic_strings_str456[sizeof("vfnmadd132sd")];
    char spasm_x86_64_mnemonic_strings_str457[sizeof("setne")];
    char spasm_x86_64_mnemonic_strings_str458[sizeof("setnae")];
    char spasm_x86_64_mnemonic_strings_str459[sizeof("setnle")];
    char spasm_x86_64_mnemonic_strings_str460[sizeof("setnge")];
    char spasm_x86_64_mnemonic_strings_str461[sizeof("setnbe")];
    char spasm_x86_64_mnemonic_strings_str462[sizeof("vaddpd")];
    char spasm_x86_64_mnemonic_strings_str463[sizeof("vaddsd")];
    char spasm_x86_64_mnemonic_strings_str464[sizeof("vfnmadd132ps")];
    char spasm_x86_64_mnemonic_strings_str465[sizeof("vfnmsub231ss")];
    char spasm_x86_64_mnemonic_strings_str466[sizeof("vfnmsub231ps")];
    char spasm_x86_64_mnemonic_strings_str467[sizeof("vfnmsub213ss")];
    char spasm_x86_64_mnemonic_strings_str468[sizeof("vfnmsub213ps")];
    char spasm_x86_64_mnemonic_strings_str469[sizeof("vfnmsub132ss")];
    char spasm_x86_64_mnemonic_strings_str470[sizeof("vfnmsub132ps")];
    char spasm_x86_64_mnemonic_strings_str471[sizeof("vfnmadd231ss")];
    char spasm_x86_64_mnemonic_strings_str472[sizeof("vfnmadd231ps")];
    char spasm_x86_64_mnemonic_strings_str473[sizeof("vfnmadd213ss")];
    char spasm_x86_64_mnemonic_strings_str474[sizeof("vfnmadd213ps")];
    char spasm_x86_64_mnemonic_strings_str475[sizeof("vfnmadd132ss")];
    char spasm_x86_64_mnemonic_strings_str476[sizeof("vaddsubpd")];
    char spasm_x86_64_mnemonic_strings_str477[sizeof("pand")];
    char spasm_x86_64_mnemonic_strings_str478[sizeof("vaddps")];
    char spasm_x86_64_mnemonic_strings_str479[sizeof("vaddss")];
    char spasm_x86_64_mnemonic_strings_str480[sizeof("vaddsubps")];
    char spasm_x86_64_mnemonic_strings_str481[sizeof("aesdeclast")];
    char spasm_x86_64_mnemonic_strings_str482[sizeof("nop")];
    char spasm_x86_64_mnemonic_strings_str483[sizeof("setno")];
    char spasm_x86_64_mnemonic_strings_str484[sizeof("vandpd")];
    char spasm_x86_64_mnemonic_strings_str485[sizeof("vandnpd")];
    char spasm_x86_64_mnemonic_strings_str486[sizeof("hsubpd")];
    char spasm_x86_64_mnemonic_strings_str487[sizeof("pcmpeqb")];
    char spasm_x86_64_mnemonic_strings_str488[sizeof("pcmpgtb")];
    char spasm_x86_64_mnemonic_strings_str489[sizeof("vandps")];
    char spasm_x86_64_mnemonic_strings_str490[sizeof("vandnps")];
    char spasm_x86_64_mnemonic_strings_str491[sizeof("hsubps")];
    char spasm_x86_64_mnemonic_strings_str492[sizeof("vpabsb")];
    char spasm_x86_64_mnemonic_strings_str493[sizeof("vpmaxsq")];
    char spasm_x86_64_mnemonic_strings_str494[sizeof("vpmaxuq")];
    char spasm_x86_64_mnemonic_strings_str495[sizeof("movdqu")];
    char spasm_x86_64_mnemonic_strings_str496[sizeof("vpmaskmovq")];
    char spasm_x86_64_mnemonic_strings_str497[sizeof("vpmadd52huq")];
    char spasm_x86_64_mnemonic_strings_str498[sizeof("vpmadd52luq")];
    char spasm_x86_64_mnemonic_strings_str499[sizeof("vpmaxsd")];
    char spasm_x86_64_mnemonic_strings_str500[sizeof("vpmaxud")];
    char spasm_x86_64_mnemonic_strings_str501[sizeof("vpmaddwd")];
    char spasm_x86_64_mnemonic_strings_str502[sizeof("vpmaskmovd")];
    char spasm_x86_64_mnemonic_strings_str503[sizeof("vpmaxsw")];
    char spasm_x86_64_mnemonic_strings_str504[sizeof("vpmaxuw")];
    char spasm_x86_64_mnemonic_strings_str505[sizeof("vpmaddubsw")];
    char spasm_x86_64_mnemonic_strings_str506[sizeof("pmaxsd")];
    char spasm_x86_64_mnemonic_strings_str507[sizeof("pmaxud")];
    char spasm_x86_64_mnemonic_strings_str508[sizeof("vpackssdw")];
    char spasm_x86_64_mnemonic_strings_str509[sizeof("vpackusdw")];
    char spasm_x86_64_mnemonic_strings_str510[sizeof("aesdec")];
    char spasm_x86_64_mnemonic_strings_str511[sizeof("pmaxsw")];
    char spasm_x86_64_mnemonic_strings_str512[sizeof("pmaxuw")];
    char spasm_x86_64_mnemonic_strings_str513[sizeof("divsd")];
    char spasm_x86_64_mnemonic_strings_str514[sizeof("vpminsb")];
    char spasm_x86_64_mnemonic_strings_str515[sizeof("vpminub")];
    char spasm_x86_64_mnemonic_strings_str516[sizeof("pavgw")];
    char spasm_x86_64_mnemonic_strings_str517[sizeof("divss")];
    char spasm_x86_64_mnemonic_strings_str518[sizeof("setae")];
    char spasm_x86_64_mnemonic_strings_str519[sizeof("movdqa")];
    char spasm_x86_64_mnemonic_strings_str520[sizeof("emms")];
    char spasm_x86_64_mnemonic_strings_str521[sizeof("vmaxpd")];
    char spasm_x86_64_mnemonic_strings_str522[sizeof("vmaxsd")];
    char spasm_x86_64_mnemonic_strings_str523[sizeof("divpd")];
    char spasm_x86_64_mnemonic_strings_str524[sizeof("vmaxps")];
    char spasm_x86_64_mnemonic_strings_str525[sizeof("vmaxss")];
    char spasm_x86_64_mnemonic_strings_str526[sizeof("div")];
    char spasm_x86_64_mnemonic_strings_str527[sizeof("divps")];
    char spasm_x86_64_mnemonic_strings_str528[sizeof("setna")];
    char spasm_x86_64_mnemonic_strings_str529[sizeof("vaesdeclast")];
    char spasm_x86_64_mnemonic_strings_str530[sizeof("vaesenclast")];
    char spasm_x86_64_mnemonic_strings_str531[sizeof("vaeskeygenassist")];
    char spasm_x86_64_mnemonic_strings_str532[sizeof("vpandn")];
    char spasm_x86_64_mnemonic_strings_str533[sizeof("paddb")];
    char spasm_x86_64_mnemonic_strings_str534[sizeof("paddsb")];
    char spasm_x86_64_mnemonic_strings_str535[sizeof("paddusb")];
    char spasm_x86_64_mnemonic_strings_str536[sizeof("maskmovdqu")];
    char spasm_x86_64_mnemonic_strings_str537[sizeof("cmpxchg8b")];
    char spasm_x86_64_mnemonic_strings_str538[sizeof("cmpxchg16b")];
    char spasm_x86_64_mnemonic_strings_str539[sizeof("vpcmpestri")];
    char spasm_x86_64_mnemonic_strings_str540[sizeof("vpcmpistri")];
    char spasm_x86_64_mnemonic_strings_str541[sizeof("vphminposuw")];
    char spasm_x86_64_mnemonic_strings_str542[sizeof("vphsubd")];
    char spasm_x86_64_mnemonic_strings_str543[sizeof("vphsubw")];
    char spasm_x86_64_mnemonic_strings_str544[sizeof("vphsubsw")];
    char spasm_x86_64_mnemonic_strings_str545[sizeof("popcnt")];
    char spasm_x86_64_mnemonic_strings_str546[sizeof("vaesdec")];
    char spasm_x86_64_mnemonic_strings_str547[sizeof("vaesimc")];
    char spasm_x86_64_mnemonic_strings_str548[sizeof("vaesenc")];
    char spasm_x86_64_mnemonic_strings_str549[sizeof("pmovsxbq")];
    char spasm_x86_64_mnemonic_strings_str550[sizeof("pmovzxwq")];
    char spasm_x86_64_mnemonic_strings_str551[sizeof("pmovzxdq")];
    char spasm_x86_64_mnemonic_strings_str552[sizeof("pmovzxbq")];
    char spasm_x86_64_mnemonic_strings_str553[sizeof("pmovsxwq")];
    char spasm_x86_64_mnemonic_strings_str554[sizeof("pmovsxdq")];
    char spasm_x86_64_mnemonic_strings_str555[sizeof("pmovsxbd")];
    char spasm_x86_64_mnemonic_strings_str556[sizeof("pmovzxwd")];
    char spasm_x86_64_mnemonic_strings_str557[sizeof("pmovzxbd")];
    char spasm_x86_64_mnemonic_strings_str558[sizeof("pmovsxwd")];
    char spasm_x86_64_mnemonic_strings_str559[sizeof("pmovsxbw")];
    char spasm_x86_64_mnemonic_strings_str560[sizeof("pmovzxbw")];
    char spasm_x86_64_mnemonic_strings_str561[sizeof("vreducepd")];
    char spasm_x86_64_mnemonic_strings_str562[sizeof("vreducesd")];
    char spasm_x86_64_mnemonic_strings_str563[sizeof("phminposuw")];
    char spasm_x86_64_mnemonic_strings_str564[sizeof("vreduceps")];
    char spasm_x86_64_mnemonic_strings_str565[sizeof("vreducess")];
    char spasm_x86_64_mnemonic_strings_str566[sizeof("seta")];
    char spasm_x86_64_mnemonic_strings_str567[sizeof("vmovq")];
    char spasm_x86_64_mnemonic_strings_str568[sizeof("vmovntdq")];
    char spasm_x86_64_mnemonic_strings_str569[sizeof("comisd")];
    char spasm_x86_64_mnemonic_strings_str570[sizeof("vmovd")];
    char spasm_x86_64_mnemonic_strings_str571[sizeof("vmovsd")];
    char spasm_x86_64_mnemonic_strings_str572[sizeof("vmovapd")];
    char spasm_x86_64_mnemonic_strings_str573[sizeof("vmovupd")];
    char spasm_x86_64_mnemonic_strings_str574[sizeof("vmovlpd")];
    char spasm_x86_64_mnemonic_strings_str575[sizeof("vmovhpd")];
    char spasm_x86_64_mnemonic_strings_str576[sizeof("vmovntpd")];
    char spasm_x86_64_mnemonic_strings_str577[sizeof("vmovmskpd")];
    char spasm_x86_64_mnemonic_strings_str578[sizeof("vpmaxsb")];
    char spasm_x86_64_mnemonic_strings_str579[sizeof("vpmaxub")];
    char spasm_x86_64_mnemonic_strings_str580[sizeof("vmovdqu8")];
    char spasm_x86_64_mnemonic_strings_str581[sizeof("comiss")];
    char spasm_x86_64_mnemonic_strings_str582[sizeof("vmovss")];
    char spasm_x86_64_mnemonic_strings_str583[sizeof("vmovaps")];
    char spasm_x86_64_mnemonic_strings_str584[sizeof("vmovups")];
    char spasm_x86_64_mnemonic_strings_str585[sizeof("vmovlps")];
    char spasm_x86_64_mnemonic_strings_str586[sizeof("vmovhps")];
    char spasm_x86_64_mnemonic_strings_str587[sizeof("vmovhlps")];
    char spasm_x86_64_mnemonic_strings_str588[sizeof("vmovntps")];
    char spasm_x86_64_mnemonic_strings_str589[sizeof("vmovlhps")];
    char spasm_x86_64_mnemonic_strings_str590[sizeof("vmovmskps")];
    char spasm_x86_64_mnemonic_strings_str591[sizeof("vpacksswb")];
    char spasm_x86_64_mnemonic_strings_str592[sizeof("vpackuswb")];
    char spasm_x86_64_mnemonic_strings_str593[sizeof("vmovdqa32")];
    char spasm_x86_64_mnemonic_strings_str594[sizeof("vmovdqu32")];
    char spasm_x86_64_mnemonic_strings_str595[sizeof("vmovdqa64")];
    char spasm_x86_64_mnemonic_strings_str596[sizeof("vmovdqu64")];
    char spasm_x86_64_mnemonic_strings_str597[sizeof("pmaxsb")];
    char spasm_x86_64_mnemonic_strings_str598[sizeof("pmaxub")];
    char spasm_x86_64_mnemonic_strings_str599[sizeof("vmovdqu16")];
    char spasm_x86_64_mnemonic_strings_str600[sizeof("pavgb")];
    char spasm_x86_64_mnemonic_strings_str601[sizeof("vmovddup")];
    char spasm_x86_64_mnemonic_strings_str602[sizeof("vmovshdup")];
    char spasm_x86_64_mnemonic_strings_str603[sizeof("vmovsldup")];
    char spasm_x86_64_mnemonic_strings_str604[sizeof("rdseed")];
    char spasm_x86_64_mnemonic_strings_str605[sizeof("cmovs")];
    char spasm_x86_64_mnemonic_strings_str606[sizeof("cmovns")];
    char spasm_x86_64_mnemonic_strings_str607[sizeof("tzcnt")];
    char spasm_x86_64_mnemonic_strings_str608[sizeof("vpshufd")];
    char spasm_x86_64_mnemonic_strings_str609[sizeof("cmovp")];
    char spasm_x86_64_mnemonic_strings_str610[sizeof("cmovnp")];
    char spasm_x86_64_mnemonic_strings_str611[sizeof("vpshufhw")];
    char spasm_x86_64_mnemonic_strings_str612[sizeof("vpshuflw")];
    char spasm_x86_64_mnemonic_strings_str613[sizeof("haddpd")];
    char spasm_x86_64_mnemonic_strings_str614[sizeof("vpavgw")];
    char spasm_x86_64_mnemonic_strings_str615[sizeof("haddps")];
    char spasm_x86_64_mnemonic_strings_str616[sizeof("movbe")];
    char spasm_x86_64_mnemonic_strings_str617[sizeof("kord")];
    char spasm_x86_64_mnemonic_strings_str618[sizeof("korq")];
    char spasm_x86_64_mnemonic_strings_str619[sizeof("sqrtpd")];
    char spasm_x86_64_mnemonic_strings_str620[sizeof("sqrtsd")];
    char spasm_x86_64_mnemonic_strings_str621[sizeof("sqrtps")];
    char spasm_x86_64_mnemonic_strings_str622[sizeof("sqrtss")];
    char spasm_x86_64_mnemonic_strings_str623[sizeof("clc")];
    char spasm_x86_64_mnemonic_strings_str624[sizeof("kunpckdq")];
    char spasm_x86_64_mnemonic_strings_str625[sizeof("kunpckwd")];
    char spasm_x86_64_mnemonic_strings_str626[sizeof("kunpckbw")];
    char spasm_x86_64_mnemonic_strings_str627[sizeof("cmovc")];
    char spasm_x86_64_mnemonic_strings_str628[sizeof("cmovnc")];
    char spasm_x86_64_mnemonic_strings_str629[sizeof("and")];
    char spasm_x86_64_mnemonic_strings_str630[sizeof("pmovmskb")];
    char spasm_x86_64_mnemonic_strings_str631[sizeof("pblendw")];
    char spasm_x86_64_mnemonic_strings_str632[sizeof("js")];
    char spasm_x86_64_mnemonic_strings_str633[sizeof("ktestq")];
    char spasm_x86_64_mnemonic_strings_str634[sizeof("ktestd")];
    char spasm_x86_64_mnemonic_strings_str635[sizeof("pinsrq")];
    char spasm_x86_64_mnemonic_strings_str636[sizeof("ktestw")];
    char spasm_x86_64_mnemonic_strings_str637[sizeof("not")];
    char spasm_x86_64_mnemonic_strings_str638[sizeof("pinsrd")];
    char spasm_x86_64_mnemonic_strings_str639[sizeof("pinsrw")];
    char spasm_x86_64_mnemonic_strings_str640[sizeof("jp")];
    char spasm_x86_64_mnemonic_strings_str641[sizeof("vblendpd")];
    char spasm_x86_64_mnemonic_strings_str642[sizeof("vblendmpd")];
    char spasm_x86_64_mnemonic_strings_str643[sizeof("vblendvpd")];
    char spasm_x86_64_mnemonic_strings_str644[sizeof("vphaddd")];
    char spasm_x86_64_mnemonic_strings_str645[sizeof("andpd")];
    char spasm_x86_64_mnemonic_strings_str646[sizeof("vphaddw")];
    char spasm_x86_64_mnemonic_strings_str647[sizeof("vphaddsw")];
    char spasm_x86_64_mnemonic_strings_str648[sizeof("vblendps")];
    char spasm_x86_64_mnemonic_strings_str649[sizeof("vblendmps")];
    char spasm_x86_64_mnemonic_strings_str650[sizeof("vblendvps")];
    char spasm_x86_64_mnemonic_strings_str651[sizeof("andps")];
    char spasm_x86_64_mnemonic_strings_str652[sizeof("setb")];
    char spasm_x86_64_mnemonic_strings_str653[sizeof("vxorpd")];
    char spasm_x86_64_mnemonic_strings_str654[sizeof("cmovb")];
    char spasm_x86_64_mnemonic_strings_str655[sizeof("cmovnb")];
    char spasm_x86_64_mnemonic_strings_str656[sizeof("vinsertf128")];
    char spasm_x86_64_mnemonic_strings_str657[sizeof("vinserti128")];
    char spasm_x86_64_mnemonic_strings_str658[sizeof("vinsertf32x8")];
    char spasm_x86_64_mnemonic_strings_str659[sizeof("vinserti32x8")];
    char spasm_x86_64_mnemonic_strings_str660[sizeof("vxorps")];
    char spasm_x86_64_mnemonic_strings_str661[sizeof("vinsertps")];
    char spasm_x86_64_mnemonic_strings_str662[sizeof("vinsertf64x2")];
    char spasm_x86_64_mnemonic_strings_str663[sizeof("vinserti64x2")];
    char spasm_x86_64_mnemonic_strings_str664[sizeof("vinsertf32x4")];
    char spasm_x86_64_mnemonic_strings_str665[sizeof("vinserti64x4")];
    char spasm_x86_64_mnemonic_strings_str666[sizeof("vinserti32x4")];
    char spasm_x86_64_mnemonic_strings_str667[sizeof("vinsertf64x4")];
    char spasm_x86_64_mnemonic_strings_str668[sizeof("vcvtpd2dq")];
    char spasm_x86_64_mnemonic_strings_str669[sizeof("vcvtps2qq")];
    char spasm_x86_64_mnemonic_strings_str670[sizeof("vcvtps2dq")];
    char spasm_x86_64_mnemonic_strings_str671[sizeof("vcvtpd2qq")];
    char spasm_x86_64_mnemonic_strings_str672[sizeof("vcvtpd2udq")];
    char spasm_x86_64_mnemonic_strings_str673[sizeof("vcvttps2qq")];
    char spasm_x86_64_mnemonic_strings_str674[sizeof("vcvttps2dq")];
    char spasm_x86_64_mnemonic_strings_str675[sizeof("vcvttpd2qq")];
    char spasm_x86_64_mnemonic_strings_str676[sizeof("vcvttpd2dq")];
    char spasm_x86_64_mnemonic_strings_str677[sizeof("vcvtps2uqq")];
    char spasm_x86_64_mnemonic_strings_str678[sizeof("vcvtps2udq")];
    char spasm_x86_64_mnemonic_strings_str679[sizeof("vcvtpd2uqq")];
    char spasm_x86_64_mnemonic_strings_str680[sizeof("vcvttpd2udq")];
    char spasm_x86_64_mnemonic_strings_str681[sizeof("vcvttps2uqq")];
    char spasm_x86_64_mnemonic_strings_str682[sizeof("vcvttps2udq")];
    char spasm_x86_64_mnemonic_strings_str683[sizeof("vcvttpd2uqq")];
    char spasm_x86_64_mnemonic_strings_str684[sizeof("vpshufb")];
    char spasm_x86_64_mnemonic_strings_str685[sizeof("vcvtdq2pd")];
    char spasm_x86_64_mnemonic_strings_str686[sizeof("vcvtss2sd")];
    char spasm_x86_64_mnemonic_strings_str687[sizeof("vcvtsi2sd")];
    char spasm_x86_64_mnemonic_strings_str688[sizeof("vcvtqq2pd")];
    char spasm_x86_64_mnemonic_strings_str689[sizeof("vcvtps2pd")];
    char spasm_x86_64_mnemonic_strings_str690[sizeof("vcvtudq2pd")];
    char spasm_x86_64_mnemonic_strings_str691[sizeof("vcvtusi2sd")];
    char spasm_x86_64_mnemonic_strings_str692[sizeof("vcvtuqq2pd")];
    char spasm_x86_64_mnemonic_strings_str693[sizeof("vpavgb")];
    char spasm_x86_64_mnemonic_strings_str694[sizeof("vcvtdq2ps")];
    char spasm_x86_64_mnemonic_strings_str695[sizeof("vcvtsi2ss")];
    char spasm_x86_64_mnemonic_strings_str696[sizeof("vcvtsd2ss")];
    char spasm_x86_64_mnemonic_strings_str697[sizeof("vcvtqq2ps")];
    char spasm_x86_64_mnemonic_strings_str698[sizeof("vcvtph2ps")];
    char spasm_x86_64_mnemonic_strings_str699[sizeof("vcvtpd2ps")];
    char spasm_x86_64_mnemonic_strings_str700[sizeof("vcvtudq2ps")];
    char spasm_x86_64_mnemonic_strings_str701[sizeof("vcvtusi2ss")];
    char spasm_x86_64_mnemonic_strings_str702[sizeof("vcvtuqq2ps")];
    char spasm_x86_64_mnemonic_strings_str703[sizeof("vfmsub132pd")];
    char spasm_x86_64_mnemonic_strings_str704[sizeof("vfmsub231sd")];
    char spasm_x86_64_mnemonic_strings_str705[sizeof("vfmsub231pd")];
    char spasm_x86_64_mnemonic_strings_str706[sizeof("vfmsub213sd")];
    char spasm_x86_64_mnemonic_strings_str707[sizeof("vfmsub213pd")];
    char spasm_x86_64_mnemonic_strings_str708[sizeof("vfmsub132sd")];
    char spasm_x86_64_mnemonic_strings_str709[sizeof("vfmsubadd132pd")];
    char spasm_x86_64_mnemonic_strings_str710[sizeof("vfmsubadd231pd")];
    char spasm_x86_64_mnemonic_strings_str711[sizeof("vfmsubadd213pd")];
    char spasm_x86_64_mnemonic_strings_str712[sizeof("minsd")];
    char spasm_x86_64_mnemonic_strings_str713[sizeof("vfmsub132ps")];
    char spasm_x86_64_mnemonic_strings_str714[sizeof("vfmsub231ss")];
    char spasm_x86_64_mnemonic_strings_str715[sizeof("vfmsub231ps")];
    char spasm_x86_64_mnemonic_strings_str716[sizeof("vfmsub213ss")];
    char spasm_x86_64_mnemonic_strings_str717[sizeof("vfmsub213ps")];
    char spasm_x86_64_mnemonic_strings_str718[sizeof("vfmsub132ss")];
    char spasm_x86_64_mnemonic_strings_str719[sizeof("vfmsubadd132ps")];
    char spasm_x86_64_mnemonic_strings_str720[sizeof("vfmsubadd231ps")];
    char spasm_x86_64_mnemonic_strings_str721[sizeof("vfmsubadd213ps")];
    char spasm_x86_64_mnemonic_strings_str722[sizeof("minss")];
    char spasm_x86_64_mnemonic_strings_str723[sizeof("vptestmq")];
    char spasm_x86_64_mnemonic_strings_str724[sizeof("vptestnmq")];
    char spasm_x86_64_mnemonic_strings_str725[sizeof("vpternlogq")];
    char spasm_x86_64_mnemonic_strings_str726[sizeof("jmp")];
    char spasm_x86_64_mnemonic_strings_str727[sizeof("vptestmd")];
    char spasm_x86_64_mnemonic_strings_str728[sizeof("vptestnmd")];
    char spasm_x86_64_mnemonic_strings_str729[sizeof("vpternlogd")];
    char spasm_x86_64_mnemonic_strings_str730[sizeof("vptestmw")];
    char spasm_x86_64_mnemonic_strings_str731[sizeof("vptestnmw")];
    char spasm_x86_64_mnemonic_strings_str732[sizeof("cld")];
    char spasm_x86_64_mnemonic_strings_str733[sizeof("minpd")];
    char spasm_x86_64_mnemonic_strings_str734[sizeof("setbe")];
    char spasm_x86_64_mnemonic_strings_str735[sizeof("minps")];
    char spasm_x86_64_mnemonic_strings_str736[sizeof("rcl")];
    char spasm_x86_64_mnemonic_strings_str737[sizeof("cmove")];
    char spasm_x86_64_mnemonic_strings_str738[sizeof("cmovae")];
    char spasm_x86_64_mnemonic_strings_str739[sizeof("cmovpe")];
    char spasm_x86_64_mnemonic_strings_str740[sizeof("cmovne")];
    char spasm_x86_64_mnemonic_strings_str741[sizeof("cmovle")];
    char spasm_x86_64_mnemonic_strings_str742[sizeof("cmovge")];
    char spasm_x86_64_mnemonic_strings_str743[sizeof("cmovbe")];
    char spasm_x86_64_mnemonic_strings_str744[sizeof("cmovnae")];
    char spasm_x86_64_mnemonic_strings_str745[sizeof("cmovnle")];
    char spasm_x86_64_mnemonic_strings_str746[sizeof("cmovnge")];
    char spasm_x86_64_mnemonic_strings_str747[sizeof("cmovnbe")];
    char spasm_x86_64_mnemonic_strings_str748[sizeof("setc")];
    char spasm_x86_64_mnemonic_strings_str749[sizeof("vpextrq")];
    char spasm_x86_64_mnemonic_strings_str750[sizeof("vptest")];
    char spasm_x86_64_mnemonic_strings_str751[sizeof("vpexpandq")];
    char spasm_x86_64_mnemonic_strings_str752[sizeof("vpextrd")];
    char spasm_x86_64_mnemonic_strings_str753[sizeof("vpexpandd")];
    char spasm_x86_64_mnemonic_strings_str754[sizeof("setge")];
    char spasm_x86_64_mnemonic_strings_str755[sizeof("vpextrw")];
    char spasm_x86_64_mnemonic_strings_str756[sizeof("andnpd")];
    char spasm_x86_64_mnemonic_strings_str757[sizeof("pblendvb")];
    char spasm_x86_64_mnemonic_strings_str758[sizeof("jc")];
    char spasm_x86_64_mnemonic_strings_str759[sizeof("andnps")];
    char spasm_x86_64_mnemonic_strings_str760[sizeof("cbw")];
    char spasm_x86_64_mnemonic_strings_str761[sizeof("ktestb")];
    char spasm_x86_64_mnemonic_strings_str762[sizeof("vfpclasspd")];
    char spasm_x86_64_mnemonic_strings_str763[sizeof("vfpclasssd")];
    char spasm_x86_64_mnemonic_strings_str764[sizeof("pxor")];
    char spasm_x86_64_mnemonic_strings_str765[sizeof("cmovo")];
    char spasm_x86_64_mnemonic_strings_str766[sizeof("cmovno")];
    char spasm_x86_64_mnemonic_strings_str767[sizeof("cmovpo")];
    char spasm_x86_64_mnemonic_strings_str768[sizeof("pinsrb")];
    char spasm_x86_64_mnemonic_strings_str769[sizeof("vfpclassps")];
    char spasm_x86_64_mnemonic_strings_str770[sizeof("vfpclassss")];
    char spasm_x86_64_mnemonic_strings_str771[sizeof("vpxorq")];
    char spasm_x86_64_mnemonic_strings_str772[sizeof("cvtsd2si")];
    char spasm_x86_64_mnemonic_strings_str773[sizeof("cvtss2si")];
    char spasm_x86_64_mnemonic_strings_str774[sizeof("vpxord")];
    char spasm_x86_64_mnemonic_strings_str775[sizeof("vmovdqu")];
    char spasm_x86_64_mnemonic_strings_str776[sizeof("movhpd")];
    char spasm_x86_64_mnemonic_strings_str777[sizeof("cdqe")];
    char spasm_x86_64_mnemonic_strings_str778[sizeof("movhps")];
    char spasm_x86_64_mnemonic_strings_str779[sizeof("movhlps")];
    char spasm_x86_64_mnemonic_strings_str780[sizeof("blsr")];
    char spasm_x86_64_mnemonic_strings_str781[sizeof("vpsubq")];
    char spasm_x86_64_mnemonic_strings_str782[sizeof("vpsubd")];
    char spasm_x86_64_mnemonic_strings_str783[sizeof("setng")];
    char spasm_x86_64_mnemonic_strings_str784[sizeof("vpsubw")];
    char spasm_x86_64_mnemonic_strings_str785[sizeof("vpsubsw")];
    char spasm_x86_64_mnemonic_strings_str786[sizeof("vpsubusw")];
    char spasm_x86_64_mnemonic_strings_str787[sizeof("shl")];
    char spasm_x86_64_mnemonic_strings_str788[sizeof("vmovdqa")];
    char spasm_x86_64_mnemonic_strings_str789[sizeof("vmovntdqa")];
    char spasm_x86_64_mnemonic_strings_str790[sizeof("vpinsrq")];
    char spasm_x86_64_mnemonic_strings_str791[sizeof("vpinsrd")];
    char spasm_x86_64_mnemonic_strings_str792[sizeof("vpinsrw")];
    char spasm_x86_64_mnemonic_strings_str793[sizeof("xorpd")];
    char spasm_x86_64_mnemonic_strings_str794[sizeof("vldmxcsr")];
    char spasm_x86_64_mnemonic_strings_str795[sizeof("movnti")];
    char spasm_x86_64_mnemonic_strings_str796[sizeof("kaddq")];
    char spasm_x86_64_mnemonic_strings_str797[sizeof("xorps")];
    char spasm_x86_64_mnemonic_strings_str798[sizeof("setz")];
    char spasm_x86_64_mnemonic_strings_str799[sizeof("kaddd")];
    char spasm_x86_64_mnemonic_strings_str800[sizeof("cmova")];
    char spasm_x86_64_mnemonic_strings_str801[sizeof("cmovna")];
    char spasm_x86_64_mnemonic_strings_str802[sizeof("kaddw")];
    char spasm_x86_64_mnemonic_strings_str803[sizeof("sal")];
    char spasm_x86_64_mnemonic_strings_str804[sizeof("test")];
    char spasm_x86_64_mnemonic_strings_str805[sizeof("vptestmb")];
    char spasm_x86_64_mnemonic_strings_str806[sizeof("vptestnmb")];
    char spasm_x86_64_mnemonic_strings_str807[sizeof("bsf")];
    char spasm_x86_64_mnemonic_strings_str808[sizeof("femms")];
    char spasm_x86_64_mnemonic_strings_str809[sizeof("pminsd")];
    char spasm_x86_64_mnemonic_strings_str810[sizeof("pminud")];
    char spasm_x86_64_mnemonic_strings_str811[sizeof("cwde")];
    char spasm_x86_64_mnemonic_strings_str812[sizeof("pminsw")];
    char spasm_x86_64_mnemonic_strings_str813[sizeof("pminuw")];
    char spasm_x86_64_mnemonic_strings_str814[sizeof("kandq")];
    char spasm_x86_64_mnemonic_strings_str815[sizeof("kandnq")];
    char spasm_x86_64_mnemonic_strings_str816[sizeof("mwaitx")];
    char spasm_x86_64_mnemonic_strings_str817[sizeof("kandd")];
    char spasm_x86_64_mnemonic_strings_str818[sizeof("kandnd")];
    char spasm_x86_64_mnemonic_strings_str819[sizeof("kandw")];
    char spasm_x86_64_mnemonic_strings_str820[sizeof("kandnw")];
    char spasm_x86_64_mnemonic_strings_str821[sizeof("jb")];
    char spasm_x86_64_mnemonic_strings_str822[sizeof("vpextrb")];
    char spasm_x86_64_mnemonic_strings_str823[sizeof("movzx")];
    char spasm_x86_64_mnemonic_strings_str824[sizeof("vminpd")];
    char spasm_x86_64_mnemonic_strings_str825[sizeof("vminsd")];
    char spasm_x86_64_mnemonic_strings_str826[sizeof("jpo")];
    char spasm_x86_64_mnemonic_strings_str827[sizeof("movsx")];
    char spasm_x86_64_mnemonic_strings_str828[sizeof("mul")];
    char spasm_x86_64_mnemonic_strings_str829[sizeof("vminps")];
    char spasm_x86_64_mnemonic_strings_str830[sizeof("vminss")];
    char spasm_x86_64_mnemonic_strings_str831[sizeof("vfmadd132pd")];
    char spasm_x86_64_mnemonic_strings_str832[sizeof("vfmadd231sd")];
    char spasm_x86_64_mnemonic_strings_str833[sizeof("vfmadd231pd")];
    char spasm_x86_64_mnemonic_strings_str834[sizeof("vfmadd213sd")];
    char spasm_x86_64_mnemonic_strings_str835[sizeof("vfmadd213pd")];
    char spasm_x86_64_mnemonic_strings_str836[sizeof("vfmadd132sd")];
    char spasm_x86_64_mnemonic_strings_str837[sizeof("rol")];
    char spasm_x86_64_mnemonic_strings_str838[sizeof("vfmaddsub132pd")];
    char spasm_x86_64_mnemonic_strings_str839[sizeof("vfmaddsub231pd")];
    char spasm_x86_64_mnemonic_strings_str840[sizeof("vfmaddsub213pd")];
    char spasm_x86_64_mnemonic_strings_str841[sizeof("vroundpd")];
    char spasm_x86_64_mnemonic_strings_str842[sizeof("vroundsd")];
    char spasm_x86_64_mnemonic_strings_str843[sizeof("vfmadd132ps")];
    char spasm_x86_64_mnemonic_strings_str844[sizeof("vfmadd231ss")];
    char spasm_x86_64_mnemonic_strings_str845[sizeof("vfmadd231ps")];
    char spasm_x86_64_mnemonic_strings_str846[sizeof("vfmadd213ss")];
    char spasm_x86_64_mnemonic_strings_str847[sizeof("vfmadd213ps")];
    char spasm_x86_64_mnemonic_strings_str848[sizeof("vfmadd132ss")];
    char spasm_x86_64_mnemonic_strings_str849[sizeof("vpxor")];
    char spasm_x86_64_mnemonic_strings_str850[sizeof("vfmaddsub132ps")];
    char spasm_x86_64_mnemonic_strings_str851[sizeof("vfmaddsub231ps")];
    char spasm_x86_64_mnemonic_strings_str852[sizeof("vfmaddsub213ps")];
    char spasm_x86_64_mnemonic_strings_str853[sizeof("vroundps")];
    char spasm_x86_64_mnemonic_strings_str854[sizeof("vroundss")];
    char spasm_x86_64_mnemonic_strings_str855[sizeof("stmxcsr")];
    char spasm_x86_64_mnemonic_strings_str856[sizeof("sfence")];
    char spasm_x86_64_mnemonic_strings_str857[sizeof("bswap")];
    char spasm_x86_64_mnemonic_strings_str858[sizeof("xor")];
    char spasm_x86_64_mnemonic_strings_str859[sizeof("vpsubb")];
    char spasm_x86_64_mnemonic_strings_str860[sizeof("vpsubsb")];
    char spasm_x86_64_mnemonic_strings_str861[sizeof("vpsubusb")];
    char spasm_x86_64_mnemonic_strings_str862[sizeof("pandn")];
    char spasm_x86_64_mnemonic_strings_str863[sizeof("call")];
    char spasm_x86_64_mnemonic_strings_str864[sizeof("shufpd")];
    char spasm_x86_64_mnemonic_strings_str865[sizeof("cvttpd2dq")];
    char spasm_x86_64_mnemonic_strings_str866[sizeof("cvttps2dq")];
    char spasm_x86_64_mnemonic_strings_str867[sizeof("aesenclast")];
    char spasm_x86_64_mnemonic_strings_str868[sizeof("vcvtps2ph")];
    char spasm_x86_64_mnemonic_strings_str869[sizeof("vpinsrb")];
    char spasm_x86_64_mnemonic_strings_str870[sizeof("shufps")];
    char spasm_x86_64_mnemonic_strings_str871[sizeof("setl")];
    char spasm_x86_64_mnemonic_strings_str872[sizeof("korb")];
    char spasm_x86_64_mnemonic_strings_str873[sizeof("kaddb")];
    char spasm_x86_64_mnemonic_strings_str874[sizeof("setnz")];
    char spasm_x86_64_mnemonic_strings_str875[sizeof("cmpxchg")];
    char spasm_x86_64_mnemonic_strings_str876[sizeof("vexpandpd")];
    char spasm_x86_64_mnemonic_strings_str877[sizeof("aesenc")];
    char spasm_x86_64_mnemonic_strings_str878[sizeof("vexpandps")];
    char spasm_x86_64_mnemonic_strings_str879[sizeof("pminsb")];
    char spasm_x86_64_mnemonic_strings_str880[sizeof("pminub")];
    char spasm_x86_64_mnemonic_strings_str881[sizeof("mfence")];
    char spasm_x86_64_mnemonic_strings_str882[sizeof("kandb")];
    char spasm_x86_64_mnemonic_strings_str883[sizeof("kandnb")];
    char spasm_x86_64_mnemonic_strings_str884[sizeof("kmovq")];
    char spasm_x86_64_mnemonic_strings_str885[sizeof("je")];
    char spasm_x86_64_mnemonic_strings_str886[sizeof("kmovd")];
    char spasm_x86_64_mnemonic_strings_str887[sizeof("kmovw")];
    char spasm_x86_64_mnemonic_strings_str888[sizeof("phsubd")];
    char spasm_x86_64_mnemonic_strings_str889[sizeof("kshiftlq")];
    char spasm_x86_64_mnemonic_strings_str890[sizeof("kshiftrq")];
    char spasm_x86_64_mnemonic_strings_str891[sizeof("phsubw")];
    char spasm_x86_64_mnemonic_strings_str892[sizeof("phsubsw")];
    char spasm_x86_64_mnemonic_strings_str893[sizeof("kshiftld")];
    char spasm_x86_64_mnemonic_strings_str894[sizeof("kshiftrd")];
    char spasm_x86_64_mnemonic_strings_str895[sizeof("movupd")];
    char spasm_x86_64_mnemonic_strings_str896[sizeof("kshiftlw")];
    char spasm_x86_64_mnemonic_strings_str897[sizeof("kshiftrw")];
    char spasm_x86_64_mnemonic_strings_str898[sizeof("movups")];
    char spasm_x86_64_mnemonic_strings_str899[sizeof("push")];
    char spasm_x86_64_mnemonic_strings_str900[sizeof("inc")];
    char spasm_x86_64_mnemonic_strings_str901[sizeof("vhsubpd")];
    char spasm_x86_64_mnemonic_strings_str902[sizeof("vhsubps")];
    char spasm_x86_64_mnemonic_strings_str903[sizeof("unpckhpd")];
    char spasm_x86_64_mnemonic_strings_str904[sizeof("unpcklpd")];
    char spasm_x86_64_mnemonic_strings_str905[sizeof("sete")];
    char spasm_x86_64_mnemonic_strings_str906[sizeof("unpckhps")];
    char spasm_x86_64_mnemonic_strings_str907[sizeof("unpcklps")];
    char spasm_x86_64_mnemonic_strings_str908[sizeof("setnl")];
    char spasm_x86_64_mnemonic_strings_str909[sizeof("extrq")];
    char spasm_x86_64_mnemonic_strings_str910[sizeof("jo")];
    char spasm_x86_64_mnemonic_strings_str911[sizeof("extractps")];
    char spasm_x86_64_mnemonic_strings_str912[sizeof("lea")];
    char spasm_x86_64_mnemonic_strings_str913[sizeof("maxsd")];
    char spasm_x86_64_mnemonic_strings_str914[sizeof("pcmpestri")];
    char spasm_x86_64_mnemonic_strings_str915[sizeof("pcmpistri")];
    char spasm_x86_64_mnemonic_strings_str916[sizeof("maxss")];
    char spasm_x86_64_mnemonic_strings_str917[sizeof("vzeroupper")];
    char spasm_x86_64_mnemonic_strings_str918[sizeof("maxpd")];
    char spasm_x86_64_mnemonic_strings_str919[sizeof("maxps")];
    char spasm_x86_64_mnemonic_strings_str920[sizeof("kmovb")];
    char spasm_x86_64_mnemonic_strings_str921[sizeof("kshiftlb")];
    char spasm_x86_64_mnemonic_strings_str922[sizeof("kshiftrb")];
    char spasm_x86_64_mnemonic_strings_str923[sizeof("kxorq")];
    char spasm_x86_64_mnemonic_strings_str924[sizeof("blsmsk")];
    char spasm_x86_64_mnemonic_strings_str925[sizeof("kxord")];
    char spasm_x86_64_mnemonic_strings_str926[sizeof("kxorw")];
    char spasm_x86_64_mnemonic_strings_str927[sizeof("monitorx")];
    char spasm_x86_64_mnemonic_strings_str928[sizeof("psignd")];
    char spasm_x86_64_mnemonic_strings_str929[sizeof("lddqu")];
    char spasm_x86_64_mnemonic_strings_str930[sizeof("psignw")];
    char spasm_x86_64_mnemonic_strings_str931[sizeof("cmovg")];
    char spasm_x86_64_mnemonic_strings_str932[sizeof("cmovng")];
    char spasm_x86_64_mnemonic_strings_str933[sizeof("ja")];
    char spasm_x86_64_mnemonic_strings_str934[sizeof("setg")];
    char spasm_x86_64_mnemonic_strings_str935[sizeof("jnp")];
    char spasm_x86_64_mnemonic_strings_str936[sizeof("vlddqu")];
    char spasm_x86_64_mnemonic_strings_str937[sizeof("neg")];
    char spasm_x86_64_mnemonic_strings_str938[sizeof("jns")];
    char spasm_x86_64_mnemonic_strings_str939[sizeof("clflushopt")];
    char spasm_x86_64_mnemonic_strings_str940[sizeof("blendpd")];
    char spasm_x86_64_mnemonic_strings_str941[sizeof("blendvpd")];
    char spasm_x86_64_mnemonic_strings_str942[sizeof("blendps")];
    char spasm_x86_64_mnemonic_strings_str943[sizeof("blendvps")];
    char spasm_x86_64_mnemonic_strings_str944[sizeof("int")];
    char spasm_x86_64_mnemonic_strings_str945[sizeof("jnc")];
    char spasm_x86_64_mnemonic_strings_str946[sizeof("kxorb")];
    char spasm_x86_64_mnemonic_strings_str947[sizeof("prefetcht0")];
    char spasm_x86_64_mnemonic_strings_str948[sizeof("prefetcht1")];
    char spasm_x86_64_mnemonic_strings_str949[sizeof("prefetchwt1")];
    char spasm_x86_64_mnemonic_strings_str950[sizeof("prefetchw")];
    char spasm_x86_64_mnemonic_strings_str951[sizeof("prefetcht2")];
    char spasm_x86_64_mnemonic_strings_str952[sizeof("xadd")];
    char spasm_x86_64_mnemonic_strings_str953[sizeof("psignb")];
    char spasm_x86_64_mnemonic_strings_str954[sizeof("andn")];
    char spasm_x86_64_mnemonic_strings_str955[sizeof("kxnorq")];
    char spasm_x86_64_mnemonic_strings_str956[sizeof("kortestq")];
    char spasm_x86_64_mnemonic_strings_str957[sizeof("kxnord")];
    char spasm_x86_64_mnemonic_strings_str958[sizeof("kortestd")];
    char spasm_x86_64_mnemonic_strings_str959[sizeof("kxnorw")];
    char spasm_x86_64_mnemonic_strings_str960[sizeof("kortestw")];
    char spasm_x86_64_mnemonic_strings_str961[sizeof("vpmuldq")];
    char spasm_x86_64_mnemonic_strings_str962[sizeof("vpmullq")];
    char spasm_x86_64_mnemonic_strings_str963[sizeof("vpmuludq")];
    char spasm_x86_64_mnemonic_strings_str964[sizeof("vpmulld")];
    char spasm_x86_64_mnemonic_strings_str965[sizeof("jpe")];
    char spasm_x86_64_mnemonic_strings_str966[sizeof("vpmulhw")];
    char spasm_x86_64_mnemonic_strings_str967[sizeof("vpmullw")];
    char spasm_x86_64_mnemonic_strings_str968[sizeof("vpmulhuw")];
    char spasm_x86_64_mnemonic_strings_str969[sizeof("vpmulhrsw")];
    char spasm_x86_64_mnemonic_strings_str970[sizeof("cmovz")];
    char spasm_x86_64_mnemonic_strings_str971[sizeof("cmovnz")];
    char spasm_x86_64_mnemonic_strings_str972[sizeof("vgatherdpd")];
    char spasm_x86_64_mnemonic_strings_str973[sizeof("vgatherqpd")];
    char spasm_x86_64_mnemonic_strings_str974[sizeof("vgatherdps")];
    char spasm_x86_64_mnemonic_strings_str975[sizeof("vgatherqps")];
    char spasm_x86_64_mnemonic_strings_str976[sizeof("jnb")];
    char spasm_x86_64_mnemonic_strings_str977[sizeof("lzcnt")];
    char spasm_x86_64_mnemonic_strings_str978[sizeof("jno")];
    char spasm_x86_64_mnemonic_strings_str979[sizeof("imul")];
    char spasm_x86_64_mnemonic_strings_str980[sizeof("shrx")];
    char spasm_x86_64_mnemonic_strings_str981[sizeof("cmovl")];
    char spasm_x86_64_mnemonic_strings_str982[sizeof("cmovnl")];
    char spasm_x86_64_mnemonic_strings_str983[sizeof("jbe")];
    char spasm_x86_64_mnemonic_strings_str984[sizeof("kxnorb")];
    char spasm_x86_64_mnemonic_strings_str985[sizeof("kortestb")];
    char spasm_x86_64_mnemonic_strings_str986[sizeof("clflush")];
    char spasm_x86_64_mnemonic_strings_str987[sizeof("adcx")];
    char spasm_x86_64_mnemonic_strings_str988[sizeof("vpmultishiftqb")];
    char spasm_x86_64_mnemonic_strings_str989[sizeof("sarx")];
    char spasm_x86_64_mnemonic_strings_str990[sizeof("vdivpd")];
    char spasm_x86_64_mnemonic_strings_str991[sizeof("vdivsd")];
    char spasm_x86_64_mnemonic_strings_str992[sizeof("adox")];
    char spasm_x86_64_mnemonic_strings_str993[sizeof("vdivps")];
    char spasm_x86_64_mnemonic_strings_str994[sizeof("vdivss")];
    char spasm_x86_64_mnemonic_strings_str995[sizeof("vcvtsd2si")];
    char spasm_x86_64_mnemonic_strings_str996[sizeof("vcvtss2si")];
    char spasm_x86_64_mnemonic_strings_str997[sizeof("vcvtsd2usi")];
    char spasm_x86_64_mnemonic_strings_str998[sizeof("vcvttss2si")];
    char spasm_x86_64_mnemonic_strings_str999[sizeof("vcvttsd2si")];
    char spasm_x86_64_mnemonic_strings_str1000[sizeof("vcvtss2usi")];
    char spasm_x86_64_mnemonic_strings_str1001[sizeof("vcvttsd2usi")];
    char spasm_x86_64_mnemonic_strings_str1002[sizeof("vcvttss2usi")];
    char spasm_x86_64_mnemonic_strings_str1003[sizeof("shlx")];
    char spasm_x86_64_mnemonic_strings_str1004[sizeof("rorx")];
    char spasm_x86_64_mnemonic_strings_str1005[sizeof("blsi")];
    char spasm_x86_64_mnemonic_strings_str1006[sizeof("prefetch")];
    char spasm_x86_64_mnemonic_strings_str1007[sizeof("pshufd")];
    char spasm_x86_64_mnemonic_strings_str1008[sizeof("pshufhw")];
    char spasm_x86_64_mnemonic_strings_str1009[sizeof("pshuflw")];
    char spasm_x86_64_mnemonic_strings_str1010[sizeof("prefetchnta")];
    char spasm_x86_64_mnemonic_strings_str1011[sizeof("vshufpd")];
    char spasm_x86_64_mnemonic_strings_str1012[sizeof("clzero")];
    char spasm_x86_64_mnemonic_strings_str1013[sizeof("vshufps")];
    char spasm_x86_64_mnemonic_strings_str1014[sizeof("mulx")];
    char spasm_x86_64_mnemonic_strings_str1015[sizeof("vshuff64x2")];
    char spasm_x86_64_mnemonic_strings_str1016[sizeof("vshufi64x2")];
    char spasm_x86_64_mnemonic_strings_str1017[sizeof("vshuff32x4")];
    char spasm_x86_64_mnemonic_strings_str1018[sizeof("vshufi32x4")];
    char spasm_x86_64_mnemonic_strings_str1019[sizeof("jna")];
    char spasm_x86_64_mnemonic_strings_str1020[sizeof("jae")];
    char spasm_x86_64_mnemonic_strings_str1021[sizeof("knotq")];
    char spasm_x86_64_mnemonic_strings_str1022[sizeof("knotd")];
    char spasm_x86_64_mnemonic_strings_str1023[sizeof("knotw")];
    char spasm_x86_64_mnemonic_strings_str1024[sizeof("pshufb")];
    char spasm_x86_64_mnemonic_strings_str1025[sizeof("vgetexppd")];
    char spasm_x86_64_mnemonic_strings_str1026[sizeof("vgetexpsd")];
    char spasm_x86_64_mnemonic_strings_str1027[sizeof("vgetmantpd")];
    char spasm_x86_64_mnemonic_strings_str1028[sizeof("vgetmantsd")];
    char spasm_x86_64_mnemonic_strings_str1029[sizeof("cvttsd2si")];
    char spasm_x86_64_mnemonic_strings_str1030[sizeof("cvttss2si")];
    char spasm_x86_64_mnemonic_strings_str1031[sizeof("vgetexpps")];
    char spasm_x86_64_mnemonic_strings_str1032[sizeof("vgetexpss")];
    char spasm_x86_64_mnemonic_strings_str1033[sizeof("vgetmantps")];
    char spasm_x86_64_mnemonic_strings_str1034[sizeof("vgetmantss")];
    char spasm_x86_64_mnemonic_strings_str1035[sizeof("ldmxcsr")];
    char spasm_x86_64_mnemonic_strings_str1036[sizeof("vfixupimmpd")];
    char spasm_x86_64_mnemonic_strings_str1037[sizeof("vfixupimmsd")];
    char spasm_x86_64_mnemonic_strings_str1038[sizeof("vfixupimmps")];
    char spasm_x86_64_mnemonic_strings_str1039[sizeof("vfixupimmss")];
    char spasm_x86_64_mnemonic_strings_str1040[sizeof("lfence")];
    char spasm_x86_64_mnemonic_strings_str1041[sizeof("knotb")];
    char spasm_x86_64_mnemonic_strings_str1042[sizeof("insertq")];
    char spasm_x86_64_mnemonic_strings_str1043[sizeof("insertps")];
    char spasm_x86_64_mnemonic_strings_str1044[sizeof("vzeroall")];
    char spasm_x86_64_mnemonic_strings_str1045[sizeof("jne")];
    char spasm_x86_64_mnemonic_strings_str1046[sizeof("jg")];
    char spasm_x86_64_mnemonic_strings_str1047[sizeof("pextrq")];
    char spasm_x86_64_mnemonic_strings_str1048[sizeof("pextrd")];
    char spasm_x86_64_mnemonic_strings_str1049[sizeof("pextrw")];
    char spasm_x86_64_mnemonic_strings_str1050[sizeof("pext")];
    char spasm_x86_64_mnemonic_strings_str1051[sizeof("vextractf128")];
    char spasm_x86_64_mnemonic_strings_str1052[sizeof("vextracti128")];
    char spasm_x86_64_mnemonic_strings_str1053[sizeof("vextractf32x8")];
    char spasm_x86_64_mnemonic_strings_str1054[sizeof("vextracti32x8")];
    char spasm_x86_64_mnemonic_strings_str1055[sizeof("vextractps")];
    char spasm_x86_64_mnemonic_strings_str1056[sizeof("vextractf64x2")];
    char spasm_x86_64_mnemonic_strings_str1057[sizeof("vextracti64x2")];
    char spasm_x86_64_mnemonic_strings_str1058[sizeof("vextractf32x4")];
    char spasm_x86_64_mnemonic_strings_str1059[sizeof("vextracti64x4")];
    char spasm_x86_64_mnemonic_strings_str1060[sizeof("vextracti32x4")];
    char spasm_x86_64_mnemonic_strings_str1061[sizeof("vextractf64x4")];
    char spasm_x86_64_mnemonic_strings_str1062[sizeof("jge")];
    char spasm_x86_64_mnemonic_strings_str1063[sizeof("jnz")];
    char spasm_x86_64_mnemonic_strings_str1064[sizeof("pextrb")];
    char spasm_x86_64_mnemonic_strings_str1065[sizeof("jng")];
    char spasm_x86_64_mnemonic_strings_str1066[sizeof("bextr")];
    char spasm_x86_64_mnemonic_strings_str1067[sizeof("jrcxz")];
    char spasm_x86_64_mnemonic_strings_str1068[sizeof("clwb")];
    char spasm_x86_64_mnemonic_strings_str1069[sizeof("jnl")];
    char spasm_x86_64_mnemonic_strings_str1070[sizeof("jle")];
    char spasm_x86_64_mnemonic_strings_str1071[sizeof("jz")];
    char spasm_x86_64_mnemonic_strings_str1072[sizeof("bzhi")];
    char spasm_x86_64_mnemonic_strings_str1073[sizeof("jecxz")];
    char spasm_x86_64_mnemonic_strings_str1074[sizeof("syscall")];
    char spasm_x86_64_mnemonic_strings_str1075[sizeof("jnbe")];
    char spasm_x86_64_mnemonic_strings_str1076[sizeof("jnle")];
    char spasm_x86_64_mnemonic_strings_str1077[sizeof("idiv")];
    char spasm_x86_64_mnemonic_strings_str1078[sizeof("jnae")];
    char spasm_x86_64_mnemonic_strings_str1079[sizeof("jl")];
    char spasm_x86_64_mnemonic_strings_str1080[sizeof("jnge")];
    char spasm_x86_64_mnemonic_strings_str1081[sizeof("xchg")];
    char spasm_x86_64_mnemonic_strings_str1082[sizeof("xlatb")];
    char spasm_x86_64_mnemonic_strings_str1083[sizeof("xgetbv")];
  };
static const struct spasm_x86_64_mnemonic_strings_t spasm_x86_64_mnemonic_strings_contents =
  {
    "dpps",
    "psrlq",
    "psrldq",
    "psrld",
    "psrlw",
    "vpcmpq",
    "vpcmpuq",
    "vpcmpeqq",
    "vpcmpgtq",
    "vpcmpd",
    "vpcmpud",
    "vpcmpeqd",
    "vpcmpgtd",
    "vpcmpw",
    "vpcmpuw",
    "vpcmpeqw",
    "vpcmpgtw",
    "vdppd",
    "vpcompressq",
    "vpconflictq",
    "vprolq",
    "vprorq",
    "vprolvq",
    "vprorvq",
    "vpcompressd",
    "vpconflictd",
    "vdpps",
    "vprold",
    "vprord",
    "vprolvd",
    "vprorvd",
    "vpclmulqdq",
    "stc",
    "vpsllq",
    "vpslldq",
    "vpsllvq",
    "vpopcntq",
    "vpslld",
    "vpsllvd",
    "vpopcntd",
    "vpsllw",
    "vpsllvw",
    "vporq",
    "vpord",
    "psllq",
    "pslldq",
    "pslld",
    "vpsraq",
    "vpsrlq",
    "vpsravq",
    "vpsrlvq",
    "vpsrldq",
    "psllw",
    "vcomisd",
    "vpsrad",
    "vpsrld",
    "vpsravd",
    "vpsrlvd",
    "vmpsadbw",
    "vcompresspd",
    "vpsraw",
    "vpsrlw",
    "vpsravw",
    "vpsrlvw",
    "vcomiss",
    "vplzcntq",
    "vcompressps",
    "vplzcntd",
    "vpcmpestrm",
    "vpcmpistrm",
    "vpblendmq",
    "vdbpsadbw",
    "vpblendd",
    "vpblendmd",
    "vpblendw",
    "vpblendmw",
    "cmpsd",
    "pmuldq",
    "pmuludq",
    "cmp",
    "pmulld",
    "cmpss",
    "pmulhw",
    "pmullw",
    "pmulhuw",
    "pmulhrsw",
    "pclmulqdq",
    "bt",
    "vpsignd",
    "vpbroadcastq",
    "vpsignw",
    "vpbroadcastmb2q",
    "vpbroadcastd",
    "cmppd",
    "vpbroadcastmw2d",
    "vpbroadcastw",
    "bts",
    "vmulpd",
    "vmulsd",
    "cmpps",
    "cdq",
    "vpcmpb",
    "vpcmpub",
    "vpcmpeqb",
    "vpcmpgtb",
    "vmulps",
    "vmulss",
    "vbroadcastsd",
    "vbroadcastf128",
    "vbroadcasti128",
    "vbroadcastf32x8",
    "vbroadcasti32x8",
    "vbroadcastss",
    "vrcp14pd",
    "vrcp14sd",
    "vbroadcastf32x2",
    "vbroadcasti64x2",
    "vbroadcasti32x2",
    "vbroadcastf64x2",
    "vbroadcastf32x4",
    "vbroadcasti64x4",
    "vbroadcasti32x4",
    "vbroadcastf64x4",
    "vrcpps",
    "vrcpss",
    "rcpss",
    "vrcp14ps",
    "vrcp14ss",
    "crc32",
    "cpuid",
    "cmc",
    "vsqrtpd",
    "vsqrtsd",
    "btc",
    "std",
    "vsqrtps",
    "vsqrtss",
    "vpunpckhdq",
    "vpunpckldq",
    "vpunpckhqdq",
    "vpunpcklqdq",
    "rcpps",
    "psrad",
    "vpunpckhwd",
    "vpunpcklwd",
    "psraw",
    "vpunpckhbw",
    "vpunpcklbw",
    "vpor",
    "pop",
    "vscalefpd",
    "vscalefsd",
    "vscatterdpd",
    "vscatterqpd",
    "vscalefps",
    "vscalefss",
    "vscatterdps",
    "vscatterqps",
    "dec",
    "bsr",
    "vmaskmovpd",
    "ud2",
    "cwd",
    "vmaskmovps",
    "dppd",
    "vpblendmb",
    "vpblendvb",
    "btr",
    "vpsadbw",
    "vpsignb",
    "cqo",
    "vorpd",
    "vpbroadcastb",
    "rsqrtps",
    "rsqrtss",
    "vorps",
    "vpandq",
    "vpandnq",
    "movmskpd",
    "vpand",
    "vpandd",
    "vpandnd",
    "vucomisd",
    "movsd",
    "movsxd",
    "movmskps",
    "rcr",
    "vucomiss",
    "movss",
    "mwait",
    "sbb",
    "mpsadbw",
    "movlpd",
    "rdrand",
    "vpalignr",
    "movshdup",
    "movsldup",
    "movlps",
    "movlhps",
    "mov",
    "subsd",
    "ucomisd",
    "subss",
    "ucomiss",
    "adc",
    "orps",
    "por",
    "subpd",
    "subps",
    "cvtsi2sd",
    "cvtss2sd",
    "pabsd",
    "cvtsd2ss",
    "cvtsi2ss",
    "shr",
    "pabsw",
    "sha1msg1",
    "cvtpd2dq",
    "cvtps2dq",
    "sha1msg2",
    "sha1rnds4",
    "cvtpi2pd",
    "cvtps2pd",
    "sha256msg1",
    "rdtscp",
    "cvtpd2ps",
    "cvtpi2ps",
    "psadbw",
    "sha256msg2",
    "sha256rnds2",
    "vrangepd",
    "vrangesd",
    "sar",
    "vrangeps",
    "vrangess",
    "mulsd",
    "movntdq",
    "vstmxcsr",
    "mulss",
    "movntpd",
    "movntsd",
    "vpaddq",
    "movntps",
    "movntss",
    "vpaddd",
    "vpaddw",
    "vpaddsw",
    "vpaddusw",
    "mulpd",
    "or",
    "sub",
    "mulps",
    "vrsqrt14pd",
    "vrsqrt14sd",
    "rdtsc",
    "vrsqrtps",
    "vrsqrtss",
    "vrsqrt14ps",
    "vrsqrt14ss",
    "ror",
    "sets",
    "add",
    "pmaddwd",
    "pmaddubsw",
    "addsd",
    "valignq",
    "addsubpd",
    "valignd",
    "addss",
    "addsubps",
    "movapd",
    "setp",
    "vpgatherdq",
    "vpgatherqq",
    "pabsb",
    "movaps",
    "vpgatherdd",
    "vpgatherqd",
    "addpd",
    "roundpd",
    "roundsd",
    "vmaskmovdqu",
    "addps",
    "roundps",
    "roundss",
    "shrd",
    "punpckhdq",
    "punpckldq",
    "punpckhqdq",
    "punpcklqdq",
    "punpckhwd",
    "punpcklwd",
    "punpckhbw",
    "punpcklbw",
    "packssdw",
    "packusdw",
    "pause",
    "vunpckhpd",
    "vunpcklpd",
    "vunpckhps",
    "vunpcklps",
    "movd",
    "movq",
    "vpaddb",
    "vpaddsb",
    "vpaddusb",
    "pdep",
    "psubq",
    "psubd",
    "psubw",
    "psubsw",
    "psubusw",
    "movddup",
    "sha1nexte",
    "vtestpd",
    "ptest",
    "vtestps",
    "setns",
    "palignr",
    "ret",
    "shld",
    "orpd",
    "vsubpd",
    "vsubsd",
    "setnp",
    "vpermq",
    "vsubps",
    "vsubss",
    "vpermi2q",
    "vpermt2q",
    "vpermd",
    "vpermpd",
    "vpermi2d",
    "vpermt2d",
    "vpermi2pd",
    "vpermt2pd",
    "vpermilpd",
    "vpermw",
    "vpermi2w",
    "vpermt2w",
    "vperm2f128",
    "vperm2i128",
    "vpermps",
    "vpermi2ps",
    "vpermt2ps",
    "vpermilps",
    "cvtdq2pd",
    "cvtdq2ps",
    "vpmovm2q",
    "vpmovsxbq",
    "vpmovzxwq",
    "vpmovzxdq",
    "vpmovzxbq",
    "vpmovsxwq",
    "vpmovsxdq",
    "vpmovqd",
    "vpmovm2d",
    "vpmovsqd",
    "vpmovsxbd",
    "vpmovzxwd",
    "vpmovzxbd",
    "vpmovusqd",
    "vpmovsxwd",
    "vpmovdw",
    "vpmovqw",
    "vpmovm2w",
    "vpmovsqw",
    "vpmovsdw",
    "vpmovsxbw",
    "vpmovzxbw",
    "vpmovusqw",
    "vpmovusdw",
    "vrndscalepd",
    "vrndscalesd",
    "setnc",
    "vrndscaleps",
    "vrndscaless",
    "phaddd",
    "phaddw",
    "phaddsw",
    "packsswb",
    "packuswb",
    "aesimc",
    "setle",
    "vhaddpd",
    "setpe",
    "pcmpeqq",
    "pcmpgtq",
    "vhaddps",
    "pcmpeqd",
    "pcmpgtd",
    "seto",
    "vpabsq",
    "pcmpeqw",
    "pcmpgtw",
    "vpabsd",
    "vpabsw",
    "psubb",
    "psubsb",
    "psubusb",
    "vpminsq",
    "vpminuq",
    "setpo",
    "setnb",
    "vcmppd",
    "vcmpsd",
    "vpminsd",
    "vpminud",
    "vpminsw",
    "vpminuw",
    "vcmpps",
    "vcmpss",
    "vpmovb2m",
    "vpmovw2m",
    "vpmovq2m",
    "vpmovd2m",
    "movntdqa",
    "vpscatterdq",
    "vpscatterqq",
    "monitor",
    "vpscatterdd",
    "vpscatterqd",
    "vpermb",
    "vpermi2b",
    "vpermt2b",
    "paddq",
    "paddd",
    "korw",
    "paddw",
    "paddsw",
    "paddusw",
    "vpmovdb",
    "vpmovwb",
    "vpmovqb",
    "vpmovm2b",
    "vpmovswb",
    "vpmovsqb",
    "vpmovsdb",
    "vpmovmskb",
    "vpmovuswb",
    "vpmovusqb",
    "vpmovusdb",
    "aeskeygenassist",
    "pcmpestrm",
    "pcmpistrm",
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
    "setne",
    "setnae",
    "setnle",
    "setnge",
    "setnbe",
    "vaddpd",
    "vaddsd",
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
    "vaddsubpd",
    "pand",
    "vaddps",
    "vaddss",
    "vaddsubps",
    "aesdeclast",
    "nop",
    "setno",
    "vandpd",
    "vandnpd",
    "hsubpd",
    "pcmpeqb",
    "pcmpgtb",
    "vandps",
    "vandnps",
    "hsubps",
    "vpabsb",
    "vpmaxsq",
    "vpmaxuq",
    "movdqu",
    "vpmaskmovq",
    "vpmadd52huq",
    "vpmadd52luq",
    "vpmaxsd",
    "vpmaxud",
    "vpmaddwd",
    "vpmaskmovd",
    "vpmaxsw",
    "vpmaxuw",
    "vpmaddubsw",
    "pmaxsd",
    "pmaxud",
    "vpackssdw",
    "vpackusdw",
    "aesdec",
    "pmaxsw",
    "pmaxuw",
    "divsd",
    "vpminsb",
    "vpminub",
    "pavgw",
    "divss",
    "setae",
    "movdqa",
    "emms",
    "vmaxpd",
    "vmaxsd",
    "divpd",
    "vmaxps",
    "vmaxss",
    "div",
    "divps",
    "setna",
    "vaesdeclast",
    "vaesenclast",
    "vaeskeygenassist",
    "vpandn",
    "paddb",
    "paddsb",
    "paddusb",
    "maskmovdqu",
    "cmpxchg8b",
    "cmpxchg16b",
    "vpcmpestri",
    "vpcmpistri",
    "vphminposuw",
    "vphsubd",
    "vphsubw",
    "vphsubsw",
    "popcnt",
    "vaesdec",
    "vaesimc",
    "vaesenc",
    "pmovsxbq",
    "pmovzxwq",
    "pmovzxdq",
    "pmovzxbq",
    "pmovsxwq",
    "pmovsxdq",
    "pmovsxbd",
    "pmovzxwd",
    "pmovzxbd",
    "pmovsxwd",
    "pmovsxbw",
    "pmovzxbw",
    "vreducepd",
    "vreducesd",
    "phminposuw",
    "vreduceps",
    "vreducess",
    "seta",
    "vmovq",
    "vmovntdq",
    "comisd",
    "vmovd",
    "vmovsd",
    "vmovapd",
    "vmovupd",
    "vmovlpd",
    "vmovhpd",
    "vmovntpd",
    "vmovmskpd",
    "vpmaxsb",
    "vpmaxub",
    "vmovdqu8",
    "comiss",
    "vmovss",
    "vmovaps",
    "vmovups",
    "vmovlps",
    "vmovhps",
    "vmovhlps",
    "vmovntps",
    "vmovlhps",
    "vmovmskps",
    "vpacksswb",
    "vpackuswb",
    "vmovdqa32",
    "vmovdqu32",
    "vmovdqa64",
    "vmovdqu64",
    "pmaxsb",
    "pmaxub",
    "vmovdqu16",
    "pavgb",
    "vmovddup",
    "vmovshdup",
    "vmovsldup",
    "rdseed",
    "cmovs",
    "cmovns",
    "tzcnt",
    "vpshufd",
    "cmovp",
    "cmovnp",
    "vpshufhw",
    "vpshuflw",
    "haddpd",
    "vpavgw",
    "haddps",
    "movbe",
    "kord",
    "korq",
    "sqrtpd",
    "sqrtsd",
    "sqrtps",
    "sqrtss",
    "clc",
    "kunpckdq",
    "kunpckwd",
    "kunpckbw",
    "cmovc",
    "cmovnc",
    "and",
    "pmovmskb",
    "pblendw",
    "js",
    "ktestq",
    "ktestd",
    "pinsrq",
    "ktestw",
    "not",
    "pinsrd",
    "pinsrw",
    "jp",
    "vblendpd",
    "vblendmpd",
    "vblendvpd",
    "vphaddd",
    "andpd",
    "vphaddw",
    "vphaddsw",
    "vblendps",
    "vblendmps",
    "vblendvps",
    "andps",
    "setb",
    "vxorpd",
    "cmovb",
    "cmovnb",
    "vinsertf128",
    "vinserti128",
    "vinsertf32x8",
    "vinserti32x8",
    "vxorps",
    "vinsertps",
    "vinsertf64x2",
    "vinserti64x2",
    "vinsertf32x4",
    "vinserti64x4",
    "vinserti32x4",
    "vinsertf64x4",
    "vcvtpd2dq",
    "vcvtps2qq",
    "vcvtps2dq",
    "vcvtpd2qq",
    "vcvtpd2udq",
    "vcvttps2qq",
    "vcvttps2dq",
    "vcvttpd2qq",
    "vcvttpd2dq",
    "vcvtps2uqq",
    "vcvtps2udq",
    "vcvtpd2uqq",
    "vcvttpd2udq",
    "vcvttps2uqq",
    "vcvttps2udq",
    "vcvttpd2uqq",
    "vpshufb",
    "vcvtdq2pd",
    "vcvtss2sd",
    "vcvtsi2sd",
    "vcvtqq2pd",
    "vcvtps2pd",
    "vcvtudq2pd",
    "vcvtusi2sd",
    "vcvtuqq2pd",
    "vpavgb",
    "vcvtdq2ps",
    "vcvtsi2ss",
    "vcvtsd2ss",
    "vcvtqq2ps",
    "vcvtph2ps",
    "vcvtpd2ps",
    "vcvtudq2ps",
    "vcvtusi2ss",
    "vcvtuqq2ps",
    "vfmsub132pd",
    "vfmsub231sd",
    "vfmsub231pd",
    "vfmsub213sd",
    "vfmsub213pd",
    "vfmsub132sd",
    "vfmsubadd132pd",
    "vfmsubadd231pd",
    "vfmsubadd213pd",
    "minsd",
    "vfmsub132ps",
    "vfmsub231ss",
    "vfmsub231ps",
    "vfmsub213ss",
    "vfmsub213ps",
    "vfmsub132ss",
    "vfmsubadd132ps",
    "vfmsubadd231ps",
    "vfmsubadd213ps",
    "minss",
    "vptestmq",
    "vptestnmq",
    "vpternlogq",
    "jmp",
    "vptestmd",
    "vptestnmd",
    "vpternlogd",
    "vptestmw",
    "vptestnmw",
    "cld",
    "minpd",
    "setbe",
    "minps",
    "rcl",
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
    "setc",
    "vpextrq",
    "vptest",
    "vpexpandq",
    "vpextrd",
    "vpexpandd",
    "setge",
    "vpextrw",
    "andnpd",
    "pblendvb",
    "jc",
    "andnps",
    "cbw",
    "ktestb",
    "vfpclasspd",
    "vfpclasssd",
    "pxor",
    "cmovo",
    "cmovno",
    "cmovpo",
    "pinsrb",
    "vfpclassps",
    "vfpclassss",
    "vpxorq",
    "cvtsd2si",
    "cvtss2si",
    "vpxord",
    "vmovdqu",
    "movhpd",
    "cdqe",
    "movhps",
    "movhlps",
    "blsr",
    "vpsubq",
    "vpsubd",
    "setng",
    "vpsubw",
    "vpsubsw",
    "vpsubusw",
    "shl",
    "vmovdqa",
    "vmovntdqa",
    "vpinsrq",
    "vpinsrd",
    "vpinsrw",
    "xorpd",
    "vldmxcsr",
    "movnti",
    "kaddq",
    "xorps",
    "setz",
    "kaddd",
    "cmova",
    "cmovna",
    "kaddw",
    "sal",
    "test",
    "vptestmb",
    "vptestnmb",
    "bsf",
    "femms",
    "pminsd",
    "pminud",
    "cwde",
    "pminsw",
    "pminuw",
    "kandq",
    "kandnq",
    "mwaitx",
    "kandd",
    "kandnd",
    "kandw",
    "kandnw",
    "jb",
    "vpextrb",
    "movzx",
    "vminpd",
    "vminsd",
    "jpo",
    "movsx",
    "mul",
    "vminps",
    "vminss",
    "vfmadd132pd",
    "vfmadd231sd",
    "vfmadd231pd",
    "vfmadd213sd",
    "vfmadd213pd",
    "vfmadd132sd",
    "rol",
    "vfmaddsub132pd",
    "vfmaddsub231pd",
    "vfmaddsub213pd",
    "vroundpd",
    "vroundsd",
    "vfmadd132ps",
    "vfmadd231ss",
    "vfmadd231ps",
    "vfmadd213ss",
    "vfmadd213ps",
    "vfmadd132ss",
    "vpxor",
    "vfmaddsub132ps",
    "vfmaddsub231ps",
    "vfmaddsub213ps",
    "vroundps",
    "vroundss",
    "stmxcsr",
    "sfence",
    "bswap",
    "xor",
    "vpsubb",
    "vpsubsb",
    "vpsubusb",
    "pandn",
    "call",
    "shufpd",
    "cvttpd2dq",
    "cvttps2dq",
    "aesenclast",
    "vcvtps2ph",
    "vpinsrb",
    "shufps",
    "setl",
    "korb",
    "kaddb",
    "setnz",
    "cmpxchg",
    "vexpandpd",
    "aesenc",
    "vexpandps",
    "pminsb",
    "pminub",
    "mfence",
    "kandb",
    "kandnb",
    "kmovq",
    "je",
    "kmovd",
    "kmovw",
    "phsubd",
    "kshiftlq",
    "kshiftrq",
    "phsubw",
    "phsubsw",
    "kshiftld",
    "kshiftrd",
    "movupd",
    "kshiftlw",
    "kshiftrw",
    "movups",
    "push",
    "inc",
    "vhsubpd",
    "vhsubps",
    "unpckhpd",
    "unpcklpd",
    "sete",
    "unpckhps",
    "unpcklps",
    "setnl",
    "extrq",
    "jo",
    "extractps",
    "lea",
    "maxsd",
    "pcmpestri",
    "pcmpistri",
    "maxss",
    "vzeroupper",
    "maxpd",
    "maxps",
    "kmovb",
    "kshiftlb",
    "kshiftrb",
    "kxorq",
    "blsmsk",
    "kxord",
    "kxorw",
    "monitorx",
    "psignd",
    "lddqu",
    "psignw",
    "cmovg",
    "cmovng",
    "ja",
    "setg",
    "jnp",
    "vlddqu",
    "neg",
    "jns",
    "clflushopt",
    "blendpd",
    "blendvpd",
    "blendps",
    "blendvps",
    "int",
    "jnc",
    "kxorb",
    "prefetcht0",
    "prefetcht1",
    "prefetchwt1",
    "prefetchw",
    "prefetcht2",
    "xadd",
    "psignb",
    "andn",
    "kxnorq",
    "kortestq",
    "kxnord",
    "kortestd",
    "kxnorw",
    "kortestw",
    "vpmuldq",
    "vpmullq",
    "vpmuludq",
    "vpmulld",
    "jpe",
    "vpmulhw",
    "vpmullw",
    "vpmulhuw",
    "vpmulhrsw",
    "cmovz",
    "cmovnz",
    "vgatherdpd",
    "vgatherqpd",
    "vgatherdps",
    "vgatherqps",
    "jnb",
    "lzcnt",
    "jno",
    "imul",
    "shrx",
    "cmovl",
    "cmovnl",
    "jbe",
    "kxnorb",
    "kortestb",
    "clflush",
    "adcx",
    "vpmultishiftqb",
    "sarx",
    "vdivpd",
    "vdivsd",
    "adox",
    "vdivps",
    "vdivss",
    "vcvtsd2si",
    "vcvtss2si",
    "vcvtsd2usi",
    "vcvttss2si",
    "vcvttsd2si",
    "vcvtss2usi",
    "vcvttsd2usi",
    "vcvttss2usi",
    "shlx",
    "rorx",
    "blsi",
    "prefetch",
    "pshufd",
    "pshufhw",
    "pshuflw",
    "prefetchnta",
    "vshufpd",
    "clzero",
    "vshufps",
    "mulx",
    "vshuff64x2",
    "vshufi64x2",
    "vshuff32x4",
    "vshufi32x4",
    "jna",
    "jae",
    "knotq",
    "knotd",
    "knotw",
    "pshufb",
    "vgetexppd",
    "vgetexpsd",
    "vgetmantpd",
    "vgetmantsd",
    "cvttsd2si",
    "cvttss2si",
    "vgetexpps",
    "vgetexpss",
    "vgetmantps",
    "vgetmantss",
    "ldmxcsr",
    "vfixupimmpd",
    "vfixupimmsd",
    "vfixupimmps",
    "vfixupimmss",
    "lfence",
    "knotb",
    "insertq",
    "insertps",
    "vzeroall",
    "jne",
    "jg",
    "pextrq",
    "pextrd",
    "pextrw",
    "pext",
    "vextractf128",
    "vextracti128",
    "vextractf32x8",
    "vextracti32x8",
    "vextractps",
    "vextractf64x2",
    "vextracti64x2",
    "vextractf32x4",
    "vextracti64x4",
    "vextracti32x4",
    "vextractf64x4",
    "jge",
    "jnz",
    "pextrb",
    "jng",
    "bextr",
    "jrcxz",
    "clwb",
    "jnl",
    "jle",
    "jz",
    "bzhi",
    "jecxz",
    "syscall",
    "jnbe",
    "jnle",
    "idiv",
    "jnae",
    "jl",
    "jnge",
    "xchg",
    "xlatb",
    "xgetbv"
  };
#define spasm_x86_64_mnemonic_strings ((const char *) &spasm_x86_64_mnemonic_strings_contents)

static const struct Spasm_x86_64_MnemonicKeyword spasm_x86_64_mnemonic_words[] =
  {
#line 146 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str0, 571, 2},
#line 423 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1, 1239, 3},
#line 422 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str2, 1238, 1},
#line 421 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str3, 1235, 3},
#line 424 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str4, 1242, 3},
#line 841 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str5, 3745, 6},
#line 844 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str6, 3763, 6},
#line 831 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str7, 3677, 10},
#line 837 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str8, 3721, 10},
#line 828 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str9, 3651, 6},
#line 843 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str10, 3757, 6},
#line 830 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str11, 3667, 10},
#line 836 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str12, 3711, 10},
#line 846 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str13, 3775, 6},
#line 845 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str14, 3769, 6},
#line 832 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str15, 3687, 10},
#line 838 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str16, 3731, 10},
#line 627 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str17, 2291, 2},
#line 848 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str18, 3787, 6},
#line 850 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str19, 3799, 6},
#line 972 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str20, 4615, 6},
#line 976 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str21, 4639, 6},
#line 974 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str22, 4627, 6},
#line 978 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str23, 4651, 6},
#line 847 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str24, 3781, 6},
#line 849 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str25, 3793, 6},
#line 628 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str26, 2293, 4},
#line 971 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str27, 4609, 6},
#line 975 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str28, 4633, 6},
#line 973 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str29, 4621, 6},
#line 977 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str30, 4645, 6},
#line 826 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str31, 3643, 2},
#line 516 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str32, 1668, 1},
#line 993 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str33, 4757, 18},
#line 992 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str34, 4749, 8},
#line 995 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str35, 4785, 10},
#line 967 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str36, 4591, 2},
#line 991 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str37, 4731, 18},
#line 994 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str38, 4775, 10},
#line 966 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str39, 4589, 2},
#line 997 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str40, 4801, 18},
#line 996 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str41, 4795, 6},
#line 970 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str42, 4603, 6},
#line 969 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str43, 4597, 6},
#line 417 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str44, 1223, 3},
#line 416 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str45, 1222, 1},
#line 415 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str46, 1219, 3},
#line 999 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str47, 4837, 12},
#line 1006 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str48, 4915, 18},
#line 1001 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str49, 4859, 6},
#line 1008 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str50, 4943, 10},
#line 1005 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str51, 4907, 8},
#line 418 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str52, 1226, 3},
#line 576 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str53, 1949, 4},
#line 998 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str54, 4819, 18},
#line 1004 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str55, 4889, 18},
#line 1000 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str56, 4849, 10},
#line 1007 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str57, 4933, 10},
#line 781 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str58, 3279, 4},
#line 578 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str59, 1957, 6},
#line 1003 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str60, 4871, 18},
#line 1010 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str61, 4959, 18},
#line 1002 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str62, 4865, 6},
#line 1009 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str63, 4953, 6},
#line 577 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str64, 1953, 4},
#line 895 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str65, 4063, 6},
#line 579 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str66, 1963, 6},
#line 894 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str67, 4057, 6},
#line 834 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str68, 3699, 2},
#line 840 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str69, 3743, 2},
#line 816 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str70, 3565, 6},
#line 622 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str71, 2257, 6},
#line 813 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str72, 3549, 4},
#line 815 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str73, 3559, 6},
#line 819 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str74, 3581, 4},
#line 817 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str75, 3571, 6},
#line 109 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str76, 467, 2},
#line 390 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str77, 1168, 2},
#line 396 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str78, 1180, 2},
#line 106 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str79, 429, 34},
#line 394 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str80, 1176, 2},
#line 110 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str81, 469, 2},
#line 393 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str82, 1174, 2},
#line 395 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str83, 1178, 2},
#line 392 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str84, 1172, 2},
#line 391 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str85, 1170, 2},
#line 333 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str86, 1050, 2},
#line 60 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str87, 184, 12},
#line 989 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str88, 4723, 4},
#line 824 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str89, 3617, 13},
#line 990 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str90, 4727, 4},
#line 822 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str91, 3611, 3},
#line 821 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str92, 3598, 13},
#line 107 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str93, 463, 2},
#line 823 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str94, 3614, 3},
#line 825 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str95, 3630, 13},
#line 63 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str96, 220, 12},
#line 782 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str97, 3283, 10},
#line 784 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str98, 3303, 4},
#line 108 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str99, 465, 2},
#line 67 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str100, 240, 1},
#line 827 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str101, 3645, 6},
#line 842 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str102, 3751, 6},
#line 829 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str103, 3657, 10},
#line 835 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str104, 3701, 10},
#line 783 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str105, 3293, 10},
#line 785 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str106, 3307, 4},
#line 570 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str107, 1905, 6},
#line 558 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str108, 1881, 1},
#line 564 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str109, 1892, 1},
#line 561 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str110, 1888, 1},
#line 567 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str111, 1901, 1},
#line 571 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str112, 1911, 10},
#line 1045 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str113, 5233, 6},
#line 1047 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str114, 5245, 2},
#line 559 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str115, 1882, 4},
#line 568 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str116, 1902, 2},
#line 565 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str117, 1893, 6},
#line 562 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str118, 1889, 2},
#line 560 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str119, 1886, 2},
#line 569 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str120, 1904, 1},
#line 566 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str121, 1899, 2},
#line 563 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str122, 1891, 1},
#line 1049 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str123, 5249, 4},
#line 1050 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str124, 5253, 2},
#line 446 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str125, 1315, 2},
#line 1046 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str126, 5239, 6},
#line 1048 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str127, 5247, 2},
#line 118 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str128, 487, 10},
#line 116 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str129, 485, 1},
#line 75 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str130, 248, 1},
#line 1083 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str131, 5385, 10},
#line 1085 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str132, 5405, 4},
#line 61 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str133, 196, 12},
#line 517 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str134, 1669, 1},
#line 1084 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str135, 5395, 10},
#line 1086 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str136, 5409, 4},
#line 1031 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str137, 5131, 10},
#line 1035 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str138, 5171, 10},
#line 1032 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str139, 5141, 10},
#line 1036 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str140, 5181, 10},
#line 445 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str141, 1313, 2},
#line 419 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str142, 1229, 3},
#line 1033 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str143, 5151, 10},
#line 1037 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str144, 5191, 10},
#line 420 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str145, 1232, 3},
#line 1030 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str146, 5121, 10},
#line 1034 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str147, 5161, 10},
#line 968 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str148, 4593, 4},
#line 397 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str149, 1182, 6},
#line 1069 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str150, 5321, 6},
#line 1071 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str151, 5333, 2},
#line 1073 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str152, 5337, 3},
#line 1075 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str153, 5343, 3},
#line 1070 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str154, 5327, 6},
#line 1072 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str155, 5335, 2},
#line 1074 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str156, 5340, 3},
#line 1076 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str157, 5346, 3},
#line 139 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str158, 545, 8},
#line 58 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str159, 176, 6},
#line 740 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str160, 2933, 4},
#line 529 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str161, 1744, 1},
#line 137 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str162, 543, 1},
#line 741 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str163, 2937, 4},
#line 145 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str164, 569, 2},
#line 814 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str165, 3553, 6},
#line 818 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str166, 3577, 4},
#line 62 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str167, 208, 12},
#line 979 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str168, 4657, 10},
#line 988 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str169, 4719, 4},
#line 117 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str170, 486, 1},
#line 786 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str171, 3311, 10},
#line 820 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str172, 3585, 13},
#line 460 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str173, 1411, 2},
#line 461 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str174, 1413, 2},
#line 787 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str175, 3321, 10},
#line 810 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str176, 3523, 6},
#line 809 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str177, 3517, 6},
#line 276 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str178, 866, 1},
#line 805 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str179, 3497, 4},
#line 806 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str180, 3501, 6},
#line 808 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str181, 3511, 6},
#line 1094 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str182, 5450, 4},
#line 286 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str183, 884, 4},
#line 291 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str184, 906, 2},
#line 277 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str185, 867, 1},
#line 447 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str186, 1317, 24},
#line 1095 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str187, 5454, 4},
#line 289 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str188, 892, 4},
#line 302 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str189, 948, 1},
#line 465 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str190, 1467, 34},
#line 295 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str191, 926, 2},
#line 274 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str192, 862, 2},
#line 448 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str193, 1341, 3},
#line 804 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str194, 3487, 10},
#line 287 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str195, 888, 2},
#line 288 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str196, 890, 2},
#line 275 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str197, 864, 2},
#line 273 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str198, 861, 1},
#line 262 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str199, 800, 28},
#line 522 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str200, 1709, 2},
#line 527 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str201, 1740, 2},
#line 523 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str202, 1711, 2},
#line 528 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str203, 1742, 2},
#line 27 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str204, 0, 34},
#line 309 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str205, 1003, 2},
#line 399 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str206, 1194, 2},
#line 520 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str207, 1705, 2},
#line 521 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str208, 1707, 2},
#line 129 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str209, 517, 4},
#line 131 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str210, 525, 2},
#line 311 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str211, 1007, 2},
#line 128 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str212, 515, 2},
#line 130 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str213, 521, 4},
#line 507 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str214, 1616, 24},
#line 312 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str215, 1009, 2},
#line 497 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str216, 1562, 2},
#line 121 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str217, 501, 2},
#line 125 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str218, 507, 2},
#line 498 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str219, 1564, 2},
#line 500 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str220, 1568, 2},
#line 123 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str221, 505, 1},
#line 126 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str222, 509, 2},
#line 501 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str223, 1570, 2},
#line 451 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str224, 1348, 1},
#line 122 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str225, 503, 2},
#line 124 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str226, 506, 1},
#line 407 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str227, 1203, 2},
#line 502 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str228, 1572, 2},
#line 503 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str229, 1574, 2},
#line 1041 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str230, 5217, 6},
#line 1043 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str231, 5229, 2},
#line 463 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str232, 1439, 24},
#line 1042 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str233, 5223, 6},
#line 1044 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str234, 5231, 2},
#line 299 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str235, 940, 2},
#line 278 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str236, 868, 1},
#line 1087 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str237, 5413, 1},
#line 300 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str238, 942, 2},
#line 281 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str239, 872, 1},
#line 283 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str240, 874, 1},
#line 798 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str241, 3427, 10},
#line 282 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str242, 873, 1},
#line 284 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str243, 875, 1},
#line 797 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str244, 3417, 10},
#line 803 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str245, 3477, 10},
#line 800 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str246, 3447, 10},
#line 802 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str247, 3467, 10},
#line 297 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str248, 936, 2},
#line 307 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str249, 967, 34},
#line 519 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str250, 1671, 34},
#line 298 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str251, 938, 2},
#line 1063 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str252, 5299, 6},
#line 1065 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str253, 5311, 2},
#line 450 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str254, 1347, 1},
#line 1067 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str255, 5315, 4},
#line 1068 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str256, 5319, 2},
#line 1064 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str257, 5305, 6},
#line 1066 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str258, 5313, 2},
#line 454 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str259, 1375, 24},
#line 494 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str260, 1557, 2},
#line 29 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str261, 38, 34},
#line 364 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str262, 1117, 2},
#line 363 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str263, 1115, 2},
#line 32 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str264, 76, 2},
#line 547 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str265, 1807, 6},
#line 34 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str266, 80, 2},
#line 546 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str267, 1801, 6},
#line 33 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str268, 78, 2},
#line 35 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str269, 82, 2},
#line 263 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str270, 828, 4},
#line 491 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str271, 1551, 2},
#line 880 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str272, 4000, 5},
#line 882 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str273, 4010, 5},
#line 310 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str274, 1005, 2},
#line 264 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str275, 832, 4},
#line 879 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str276, 3995, 5},
#line 881 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str277, 4005, 5},
#line 30 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str278, 72, 2},
#line 456 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str279, 1403, 2},
#line 458 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str280, 1407, 2},
#line 739 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str281, 2932, 1},
#line 31 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str282, 74, 2},
#line 457 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str283, 1405, 2},
#line 459 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str284, 1409, 2},
#line 508 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str285, 1640, 12},
#line 435 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str286, 1265, 2},
#line 439 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str287, 1273, 2},
#line 436 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str288, 1267, 2},
#line 440 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str289, 1275, 2},
#line 437 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str290, 1269, 2},
#line 441 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str291, 1277, 2},
#line 434 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str292, 1263, 2},
#line 438 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str293, 1271, 2},
#line 313 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str294, 1011, 2},
#line 315 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str295, 1015, 2},
#line 328 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str296, 1041, 1},
#line 1096 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str297, 5458, 10},
#line 1098 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str298, 5478, 10},
#line 1097 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str299, 5468, 10},
#line 1099 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str300, 5488, 10},
#line 266 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str301, 842, 4},
#line 285 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str302, 876, 8},
#line 796 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str303, 3407, 10},
#line 799 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str304, 3437, 10},
#line 801 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str305, 3457, 10},
#line 346 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str306, 1076, 4},
#line 427 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str307, 1249, 2},
#line 426 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str308, 1247, 2},
#line 432 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str309, 1259, 2},
#line 429 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str310, 1253, 2},
#line 431 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str311, 1257, 2},
#line 267 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str312, 846, 2},
#line 499 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str313, 1566, 2},
#line 1092 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str314, 5442, 4},
#line 433 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str315, 1261, 2},
#line 1093 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str316, 5446, 4},
#line 488 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str317, 1545, 2},
#line 325 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str318, 1035, 2},
#line 452 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str319, 1349, 2},
#line 505 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str320, 1600, 12},
#line 308 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str321, 1001, 2},
#line 1088 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str322, 5414, 10},
#line 1090 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str323, 5434, 4},
#line 487 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str324, 1543, 2},
#line 865 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str325, 3913, 10},
#line 1089 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str326, 5424, 10},
#line 1091 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str327, 5438, 4},
#line 859 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str328, 3845, 6},
#line 870 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str329, 3947, 6},
#line 854 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str330, 3815, 6},
#line 863 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str331, 3897, 10},
#line 856 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str332, 3827, 6},
#line 867 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str333, 3929, 6},
#line 857 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str334, 3833, 6},
#line 868 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str335, 3935, 6},
#line 861 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str336, 3857, 20},
#line 872 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str337, 3959, 6},
#line 860 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str338, 3851, 6},
#line 871 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str339, 3953, 6},
#line 851 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str340, 3805, 2},
#line 852 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str341, 3807, 2},
#line 864 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str342, 3907, 6},
#line 858 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str343, 3839, 6},
#line 869 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str344, 3941, 6},
#line 862 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str345, 3877, 20},
#line 119 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str346, 497, 2},
#line 120 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str347, 499, 2},
#line 924 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str348, 4277, 3},
#line 938 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str349, 4352, 10},
#line 956 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str350, 4497, 10},
#line 954 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str351, 4477, 10},
#line 952 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str352, 4457, 10},
#line 942 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str353, 4392, 10},
#line 940 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str354, 4372, 10},
#line 929 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str355, 4294, 6},
#line 923 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str356, 4274, 3},
#line 934 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str357, 4324, 6},
#line 937 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str358, 4342, 10},
#line 955 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str359, 4487, 10},
#line 951 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str360, 4447, 10},
#line 946 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str361, 4420, 6},
#line 941 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str362, 4382, 10},
#line 921 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str363, 4265, 6},
#line 930 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str364, 4300, 6},
#line 925 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str365, 4280, 3},
#line 935 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str366, 4330, 6},
#line 932 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str367, 4312, 6},
#line 939 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str368, 4362, 10},
#line 953 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str369, 4467, 10},
#line 947 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str370, 4426, 6},
#line 944 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str371, 4408, 6},
#line 1055 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str372, 5271, 6},
#line 1057 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str373, 5283, 2},
#line 480 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str374, 1529, 2},
#line 1056 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str375, 5277, 6},
#line 1058 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str376, 5285, 2},
#line 352 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str377, 1093, 2},
#line 354 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str378, 1097, 2},
#line 353 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str379, 1095, 2},
#line 314 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str380, 1013, 2},
#line 316 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str381, 1017, 2},
#line 41 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str382, 96, 2},
#line 475 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str383, 1519, 2},
#line 722 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str384, 2881, 4},
#line 492 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str385, 1553, 2},
#line 336 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str386, 1056, 2},
#line 342 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str387, 1068, 2},
#line 723 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str388, 2885, 4},
#line 335 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str389, 1054, 2},
#line 341 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str390, 1066, 2},
#line 490 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str391, 1549, 2},
#line 790 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str392, 3351, 6},
#line 337 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str393, 1058, 2},
#line 343 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str394, 1070, 2},
#line 789 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str395, 3341, 10},
#line 791 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str396, 3357, 10},
#line 425 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str397, 1245, 2},
#line 428 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str398, 1251, 2},
#line 430 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str399, 1255, 2},
#line 912 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str400, 4201, 6},
#line 916 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str401, 4237, 6},
#line 493 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str402, 1555, 2},
#line 478 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str403, 1525, 2},
#line 572 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str404, 1921, 10},
#line 574 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str405, 1941, 4},
#line 911 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str406, 4191, 10},
#line 915 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str407, 4227, 10},
#line 913 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str408, 4207, 10},
#line 917 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str409, 4243, 10},
#line 573 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str410, 1931, 10},
#line 575 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str411, 1945, 4},
#line 918 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str412, 4253, 3},
#line 949 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str413, 4438, 3},
#line 927 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str414, 4285, 3},
#line 919 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str415, 4256, 3},
#line 279 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str416, 869, 1},
#line 981 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str417, 4670, 3},
#line 983 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str418, 4676, 3},
#line 260 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str419, 798, 1},
#line 980 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str420, 4667, 3},
#line 982 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str421, 4673, 3},
#line 853 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str422, 3809, 6},
#line 855 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str423, 3821, 6},
#line 866 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str424, 3923, 6},
#line 319 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str425, 1023, 2},
#line 318 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str426, 1021, 2},
#line 221 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str427, 744, 1},
#line 324 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str428, 1033, 2},
#line 321 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str429, 1027, 2},
#line 323 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str430, 1031, 2},
#line 920 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str431, 4259, 6},
#line 950 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str432, 4441, 6},
#line 928 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str433, 4288, 6},
#line 922 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str434, 4271, 3},
#line 936 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str435, 4336, 6},
#line 933 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str436, 4318, 6},
#line 931 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str437, 4306, 6},
#line 926 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str438, 4283, 2},
#line 948 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str439, 4432, 6},
#line 945 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str440, 4414, 6},
#line 943 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str441, 4402, 6},
#line 42 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str442, 98, 2},
#line 339 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str443, 1062, 2},
#line 345 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str444, 1074, 2},
#line 682 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str445, 2645, 10},
#line 704 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str446, 2805, 4},
#line 702 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str447, 2785, 10},
#line 700 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str448, 2777, 4},
#line 698 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str449, 2757, 10},
#line 696 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str450, 2749, 4},
#line 694 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str451, 2729, 10},
#line 692 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str452, 2721, 4},
#line 690 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str453, 2701, 10},
#line 688 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str454, 2693, 4},
#line 686 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str455, 2673, 10},
#line 684 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str456, 2665, 4},
#line 481 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str457, 1531, 2},
#line 477 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str458, 1523, 2},
#line 485 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str459, 1539, 2},
#line 483 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str460, 1535, 2},
#line 479 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str461, 1527, 2},
#line 534 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str462, 1753, 10},
#line 536 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str463, 1773, 4},
#line 683 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str464, 2655, 10},
#line 705 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str465, 2809, 4},
#line 703 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str466, 2795, 10},
#line 701 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str467, 2781, 4},
#line 699 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str468, 2767, 10},
#line 697 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str469, 2753, 4},
#line 695 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str470, 2739, 10},
#line 693 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str471, 2725, 4},
#line 691 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str472, 2711, 10},
#line 689 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str473, 2697, 4},
#line 687 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str474, 2683, 10},
#line 685 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str475, 2669, 4},
#line 538 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str476, 1781, 4},
#line 326 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str477, 1037, 2},
#line 535 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str478, 1763, 10},
#line 537 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str479, 1777, 4},
#line 539 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str480, 1785, 4},
#line 38 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str481, 90, 2},
#line 305 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str482, 958, 1},
#line 486 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str483, 1541, 2},
#line 550 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str484, 1833, 10},
#line 548 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str485, 1813, 10},
#line 153 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str486, 583, 2},
#line 334 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str487, 1052, 2},
#line 340 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str488, 1064, 2},
#line 551 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str489, 1843, 10},
#line 549 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str490, 1823, 10},
#line 154 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str491, 585, 2},
#line 788 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str492, 3331, 10},
#line 904 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str493, 4129, 6},
#line 908 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str494, 4165, 6},
#line 269 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str495, 852, 4},
#line 901 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str496, 4105, 4},
#line 896 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str497, 4069, 6},
#line 897 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str498, 4075, 6},
#line 903 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str499, 4119, 10},
#line 907 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str500, 4155, 10},
#line 899 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str501, 4091, 10},
#line 900 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str502, 4101, 4},
#line 905 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str503, 4135, 10},
#line 909 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str504, 4171, 10},
#line 898 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str505, 4081, 10},
#line 366 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str506, 1121, 2},
#line 369 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str507, 1127, 2},
#line 792 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str508, 3367, 10},
#line 794 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str509, 3387, 10},
#line 37 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str510, 88, 2},
#line 367 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str511, 1123, 2},
#line 370 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str512, 1129, 2},
#line 143 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str513, 565, 2},
#line 910 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str514, 4181, 10},
#line 914 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str515, 4217, 10},
#line 330 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str516, 1044, 2},
#line 144 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str517, 567, 2},
#line 467 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str518, 1503, 2},
#line 268 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str519, 848, 4},
#line 147 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str520, 573, 1},
#line 742 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str521, 2941, 10},
#line 744 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str522, 2961, 4},
#line 141 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str523, 561, 2},
#line 743 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str524, 2951, 10},
#line 745 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str525, 2965, 4},
#line 140 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str526, 553, 8},
#line 142 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str527, 563, 2},
#line 476 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str528, 1521, 2},
#line 541 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str529, 1791, 2},
#line 543 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str530, 1795, 2},
#line 545 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str531, 1799, 2},
#line 807 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str532, 3507, 4},
#line 317 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str533, 1019, 2},
#line 320 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str534, 1025, 2},
#line 322 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str535, 1029, 2},
#line 250 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str536, 780, 1},
#line 113 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str537, 480, 1},
#line 112 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str538, 479, 1},
#line 833 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str539, 3697, 2},
#line 839 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str540, 3741, 2},
#line 886 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str541, 4027, 2},
#line 887 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str542, 4029, 4},
#line 889 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str543, 4037, 4},
#line 888 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str544, 4033, 4},
#line 398 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str545, 1188, 6},
#line 540 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str546, 1789, 2},
#line 544 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str547, 1797, 2},
#line 542 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str548, 1793, 2},
#line 379 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str549, 1146, 2},
#line 389 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str550, 1166, 2},
#line 387 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str551, 1162, 2},
#line 385 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str552, 1158, 2},
#line 383 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str553, 1154, 2},
#line 381 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str554, 1150, 2},
#line 378 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str555, 1144, 2},
#line 388 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str556, 1164, 2},
#line 384 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str557, 1156, 2},
#line 382 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str558, 1152, 2},
#line 380 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str559, 1148, 2},
#line 386 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str560, 1160, 2},
#line 1051 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str561, 5255, 6},
#line 1053 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str562, 5267, 2},
#line 355 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str563, 1099, 2},
#line 1052 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str564, 5261, 6},
#line 1054 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str565, 5269, 2},
#line 466 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str566, 1501, 2},
#line 774 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str567, 3187, 16},
#line 770 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str568, 3167, 5},
#line 114 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str569, 481, 2},
#line 752 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str570, 3037, 8},
#line 775 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str571, 3203, 8},
#line 750 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str572, 2997, 20},
#line 779 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str573, 3239, 20},
#line 766 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str574, 3155, 4},
#line 763 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str575, 3145, 4},
#line 772 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str576, 3177, 5},
#line 768 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str577, 3163, 2},
#line 902 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str578, 4109, 10},
#line 906 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str579, 4145, 10},
#line 761 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str580, 3131, 12},
#line 115 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str581, 483, 2},
#line 778 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str582, 3231, 8},
#line 751 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str583, 3017, 20},
#line 780 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str584, 3259, 20},
#line 767 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str585, 3159, 4},
#line 764 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str586, 3149, 4},
#line 762 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str587, 3143, 2},
#line 773 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str588, 3182, 5},
#line 765 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str589, 3153, 2},
#line 769 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str590, 3165, 2},
#line 793 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str591, 3377, 10},
#line 795 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str592, 3397, 10},
#line 755 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str593, 3063, 12},
#line 759 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str594, 3107, 12},
#line 756 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str595, 3075, 12},
#line 760 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str596, 3119, 12},
#line 365 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str597, 1119, 2},
#line 368 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str598, 1125, 2},
#line 758 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str599, 3095, 12},
#line 329 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str600, 1042, 2},
#line 753 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str601, 3045, 10},
#line 776 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str602, 3211, 10},
#line 777 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str603, 3221, 10},
#line 449 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str604, 1344, 3},
#line 104 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str605, 417, 6},
#line 98 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str606, 381, 6},
#line 526 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str607, 1734, 6},
#line 985 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str608, 4689, 10},
#line 101 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str609, 399, 6},
#line 97 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str610, 375, 6},
#line 986 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str611, 4699, 10},
#line 987 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str612, 4709, 10},
#line 151 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str613, 579, 2},
#line 812 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str614, 3539, 10},
#line 152 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str615, 581, 2},
#line 265 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str616, 836, 6},
#line 215 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str617, 738, 1},
#line 216 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str618, 739, 1},
#line 512 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str619, 1660, 2},
#line 514 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str620, 1664, 2},
#line 513 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str621, 1662, 2},
#line 515 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str622, 1666, 2},
#line 69 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str623, 242, 1},
#line 235 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str624, 758, 1},
#line 236 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str625, 759, 1},
#line 234 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str626, 757, 1},
#line 80 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str627, 273, 6},
#line 90 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str628, 333, 6},
#line 43 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str629, 100, 34},
#line 377 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str630, 1143, 1},
#line 332 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str631, 1048, 2},
#line 192 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str632, 697, 2},
#line 232 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str633, 755, 1},
#line 231 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str634, 754, 1},
#line 361 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str635, 1111, 2},
#line 233 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str636, 756, 1},
#line 306 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str637, 959, 8},
#line 360 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str638, 1109, 2},
#line 362 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str639, 1113, 2},
#line 188 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str640, 690, 2},
#line 554 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str641, 1865, 4},
#line 552 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str642, 1853, 6},
#line 556 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str643, 1873, 4},
#line 883 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str644, 4015, 4},
#line 47 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str645, 142, 2},
#line 885 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str646, 4023, 4},
#line 884 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str647, 4019, 4},
#line 555 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str648, 1869, 4},
#line 553 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str649, 1859, 6},
#line 557 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str650, 1877, 4},
#line 48 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str651, 144, 2},
#line 468 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str652, 1505, 2},
#line 1100 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str653, 5498, 10},
#line 78 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str654, 261, 6},
#line 88 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str655, 321, 6},
#line 726 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str656, 2897, 2},
#line 731 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str657, 2911, 2},
#line 728 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str658, 2903, 2},
#line 733 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str659, 2917, 2},
#line 1101 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str660, 5508, 10},
#line 736 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str661, 2925, 4},
#line 729 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str662, 2905, 4},
#line 734 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str663, 2919, 4},
#line 727 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str664, 2899, 4},
#line 735 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str665, 2923, 2},
#line 732 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str666, 2913, 4},
#line 730 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str667, 2909, 2},
#line 582 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str668, 1989, 10},
#line 591 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str669, 2067, 6},
#line 588 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str670, 2037, 10},
#line 584 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str671, 2009, 6},
#line 585 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str672, 2015, 6},
#line 609 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str673, 2183, 6},
#line 608 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str674, 2173, 10},
#line 605 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str675, 2155, 6},
#line 604 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str676, 2145, 10},
#line 593 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str677, 2079, 6},
#line 592 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str678, 2073, 6},
#line 586 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str679, 2021, 6},
#line 606 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str680, 2161, 6},
#line 611 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str681, 2195, 6},
#line 610 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str682, 2189, 6},
#line 607 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str683, 2167, 6},
#line 984 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str684, 4679, 10},
#line 580 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str685, 1969, 10},
#line 601 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str686, 2129, 4},
#line 599 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str687, 2113, 8},
#line 594 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str688, 2085, 6},
#line 589 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str689, 2047, 10},
#line 616 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str690, 2225, 6},
#line 620 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str691, 2249, 4},
#line 618 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str692, 2237, 6},
#line 811 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str693, 3529, 10},
#line 581 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str694, 1979, 10},
#line 600 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str695, 2121, 8},
#line 597 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str696, 2105, 4},
#line 595 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str697, 2091, 6},
#line 587 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str698, 2027, 10},
#line 583 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str699, 1999, 10},
#line 617 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str700, 2231, 6},
#line 621 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str701, 2253, 4},
#line 619 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str702, 2243, 6},
#line 664 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str703, 2501, 10},
#line 674 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str704, 2577, 4},
#line 672 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str705, 2557, 10},
#line 670 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str706, 2549, 4},
#line 668 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str707, 2529, 10},
#line 666 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str708, 2521, 4},
#line 676 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str709, 2585, 10},
#line 680 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str710, 2625, 10},
#line 678 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str711, 2605, 10},
#line 258 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str712, 794, 2},
#line 665 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str713, 2511, 10},
#line 675 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str714, 2581, 4},
#line 673 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str715, 2567, 10},
#line 671 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str716, 2553, 4},
#line 669 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str717, 2539, 10},
#line 667 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str718, 2525, 4},
#line 677 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str719, 2595, 10},
#line 681 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str720, 2635, 10},
#line 679 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str721, 2615, 10},
#line 259 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str722, 796, 2},
#line 1024 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str723, 5085, 6},
#line 1028 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str724, 5109, 6},
#line 1020 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str725, 5063, 6},
#line 172 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str726, 656, 4},
#line 1023 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str727, 5079, 6},
#line 1027 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str728, 5103, 6},
#line 1019 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str729, 5057, 6},
#line 1025 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str730, 5091, 6},
#line 1029 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str731, 5115, 6},
#line 70 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str732, 243, 1},
#line 256 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str733, 790, 2},
#line 469 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str734, 1507, 2},
#line 257 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str735, 792, 2},
#line 444 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str736, 1289, 24},
#line 81 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str737, 279, 6},
#line 77 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str738, 255, 6},
#line 102 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str739, 405, 6},
#line 91 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str740, 339, 6},
#line 85 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str741, 303, 6},
#line 83 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str742, 291, 6},
#line 79 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str743, 267, 6},
#line 87 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str744, 315, 6},
#line 95 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str745, 363, 6},
#line 93 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str746, 351, 6},
#line 89 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str747, 327, 6},
#line 470 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str748, 1509, 2},
#line 877 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str749, 3985, 4},
#line 1021 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str750, 5069, 4},
#line 874 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str751, 3971, 6},
#line 876 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str752, 3981, 4},
#line 873 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str753, 3965, 6},
#line 473 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str754, 1515, 2},
#line 878 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str755, 3989, 6},
#line 45 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str756, 138, 2},
#line 331 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str757, 1046, 2},
#line 165 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str758, 643, 2},
#line 46 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str759, 140, 2},
#line 66 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str760, 239, 1},
#line 230 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str761, 753, 1},
#line 706 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str762, 2813, 6},
#line 708 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str763, 2825, 2},
#line 443 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str764, 1287, 2},
#line 100 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str765, 393, 6},
#line 96 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str766, 369, 6},
#line 103 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str767, 411, 6},
#line 359 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str768, 1107, 2},
#line 707 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str769, 2819, 6},
#line 709 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str770, 2827, 2},
#line 1040 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str771, 5211, 6},
#line 127 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str772, 511, 4},
#line 132 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str773, 527, 4},
#line 1039 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str774, 5205, 6},
#line 757 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str775, 3087, 8},
#line 271 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str776, 857, 2},
#line 68 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str777, 241, 1},
#line 272 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str778, 859, 2},
#line 270 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str779, 856, 1},
#line 56 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str780, 166, 4},
#line 1013 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str781, 4997, 10},
#line 1012 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str782, 4987, 10},
#line 482 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str783, 1533, 2},
#line 1018 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str784, 5047, 10},
#line 1015 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str785, 5017, 10},
#line 1017 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str786, 5037, 10},
#line 504 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str787, 1576, 24},
#line 754 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str788, 3055, 8},
#line 771 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str789, 3172, 5},
#line 892 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str790, 4049, 4},
#line 891 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str791, 4045, 4},
#line 893 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str792, 4053, 4},
#line 1109 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str793, 5587, 2},
#line 738 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str794, 2931, 1},
#line 280 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str795, 870, 2},
#line 196 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str796, 703, 1},
#line 1110 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str797, 5589, 2},
#line 495 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str798, 1559, 2},
#line 195 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str799, 702, 1},
#line 76 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str800, 249, 6},
#line 86 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str801, 309, 6},
#line 197 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str802, 704, 1},
#line 462 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str803, 1415, 24},
#line 525 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str804, 1714, 20},
#line 1022 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str805, 5073, 6},
#line 1026 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str806, 5097, 6},
#line 57 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str807, 170, 6},
#line 150 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str808, 578, 1},
#line 372 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str809, 1133, 2},
#line 375 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str810, 1139, 2},
#line 138 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str811, 544, 1},
#line 373 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str812, 1135, 2},
#line 376 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str813, 1141, 2},
#line 204 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str814, 711, 1},
#line 202 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str815, 709, 1},
#line 303 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str816, 949, 1},
#line 199 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str817, 706, 1},
#line 201 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str818, 708, 1},
#line 205 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str819, 712, 1},
#line 203 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str820, 710, 1},
#line 163 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str821, 639, 2},
#line 875 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str822, 3977, 4},
#line 294 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str823, 916, 10},
#line 746 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str824, 2969, 10},
#line 748 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str825, 2989, 4},
#line 190 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str826, 694, 2},
#line 290 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str827, 896, 10},
#line 296 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str828, 928, 8},
#line 747 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str829, 2979, 10},
#line 749 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str830, 2993, 4},
#line 646 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str831, 2357, 10},
#line 656 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str832, 2433, 4},
#line 654 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str833, 2413, 10},
#line 652 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str834, 2405, 4},
#line 650 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str835, 2385, 10},
#line 648 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str836, 2377, 4},
#line 453 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str837, 1351, 24},
#line 658 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str838, 2441, 10},
#line 662 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str839, 2481, 10},
#line 660 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str840, 2461, 10},
#line 1059 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str841, 5287, 4},
#line 1061 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str842, 5295, 2},
#line 647 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str843, 2367, 10},
#line 657 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str844, 2437, 4},
#line 655 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str845, 2423, 10},
#line 653 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str846, 2409, 4},
#line 651 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str847, 2395, 10},
#line 649 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str848, 2381, 4},
#line 1038 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str849, 5201, 4},
#line 659 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str850, 2451, 10},
#line 663 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str851, 2491, 10},
#line 661 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str852, 2471, 10},
#line 1060 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str853, 5291, 4},
#line 1062 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str854, 5297, 2},
#line 518 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str855, 1670, 1},
#line 496 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str856, 1561, 1},
#line 59 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str857, 182, 2},
#line 1108 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str858, 5553, 34},
#line 1011 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str859, 4977, 10},
#line 1014 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str860, 5007, 10},
#line 1016 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str861, 5027, 10},
#line 327 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str862, 1039, 2},
#line 65 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str863, 236, 3},
#line 510 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str864, 1656, 2},
#line 133 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str865, 531, 2},
#line 134 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str866, 533, 2},
#line 40 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str867, 94, 2},
#line 590 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str868, 2057, 10},
#line 890 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str869, 4041, 4},
#line 511 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str870, 1658, 2},
#line 474 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str871, 1517, 2},
#line 214 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str872, 737, 1},
#line 194 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str873, 701, 1},
#line 489 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str874, 1547, 2},
#line 111 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str875, 471, 8},
#line 629 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str876, 2297, 6},
#line 39 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str877, 92, 2},
#line 630 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str878, 2303, 6},
#line 371 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str879, 1131, 2},
#line 374 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str880, 1137, 2},
#line 255 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str881, 789, 1},
#line 198 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str882, 705, 1},
#line 200 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str883, 707, 1},
#line 208 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str884, 723, 5},
#line 166 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str885, 645, 2},
#line 207 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str886, 718, 5},
#line 209 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str887, 728, 5},
#line 356 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str888, 1101, 2},
#line 224 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str889, 747, 1},
#line 228 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str890, 751, 1},
#line 358 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str891, 1105, 2},
#line 357 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str892, 1103, 2},
#line 223 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str893, 746, 1},
#line 227 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str894, 750, 1},
#line 292 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str895, 908, 4},
#line 225 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str896, 748, 1},
#line 229 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str897, 752, 1},
#line 293 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str898, 912, 4},
#line 442 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str899, 1279, 8},
#line 157 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str900, 621, 8},
#line 724 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str901, 2889, 4},
#line 725 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str902, 2893, 4},
#line 530 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str903, 1745, 2},
#line 532 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str904, 1749, 2},
#line 471 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str905, 1511, 2},
#line 531 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str906, 1747, 2},
#line 533 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str907, 1751, 2},
#line 484 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str908, 1537, 2},
#line 149 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str909, 576, 2},
#line 187 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str910, 688, 2},
#line 148 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str911, 574, 2},
#line 247 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str912, 770, 3},
#line 253 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str913, 785, 2},
#line 338 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str914, 1060, 2},
#line 344 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str915, 1072, 2},
#line 254 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str916, 787, 2},
#line 1103 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str917, 5519, 1},
#line 251 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str918, 781, 2},
#line 252 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str919, 783, 2},
#line 206 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str920, 713, 5},
#line 222 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str921, 745, 1},
#line 226 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str922, 749, 1},
#line 243 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str923, 766, 1},
#line 55 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str924, 162, 4},
#line 242 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str925, 765, 1},
#line 244 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str926, 767, 1},
#line 261 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str927, 799, 1},
#line 413 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str928, 1215, 2},
#line 245 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str929, 768, 1},
#line 414 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str930, 1217, 2},
#line 82 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str931, 285, 6},
#line 92 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str932, 345, 6},
#line 161 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str933, 635, 2},
#line 472 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str934, 1513, 2},
#line 184 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str935, 682, 2},
#line 737 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str936, 2929, 2},
#line 304 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str937, 950, 8},
#line 185 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str938, 684, 2},
#line 72 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str939, 245, 1},
#line 50 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str940, 150, 2},
#line 52 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str941, 154, 2},
#line 51 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str942, 152, 2},
#line 53 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str943, 156, 2},
#line 160 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str944, 633, 2},
#line 177 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str945, 668, 2},
#line 241 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str946, 764, 1},
#line 402 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str947, 1198, 1},
#line 403 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str948, 1199, 1},
#line 406 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str949, 1202, 1},
#line 405 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str950, 1201, 1},
#line 404 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str951, 1200, 1},
#line 1104 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str952, 5520, 8},
#line 412 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str953, 1213, 2},
#line 44 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str954, 134, 4},
#line 239 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str955, 762, 1},
#line 219 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str956, 742, 1},
#line 238 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str957, 761, 1},
#line 218 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str958, 741, 1},
#line 240 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str959, 763, 1},
#line 220 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str960, 743, 1},
#line 957 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str961, 4507, 10},
#line 962 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str962, 4557, 6},
#line 965 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str963, 4579, 10},
#line 961 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str964, 4547, 10},
#line 189 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str965, 692, 2},
#line 960 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str966, 4537, 10},
#line 963 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str967, 4563, 10},
#line 959 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str968, 4527, 10},
#line 958 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str969, 4517, 10},
#line 105 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str970, 423, 6},
#line 99 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str971, 387, 6},
#line 710 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str972, 2829, 5},
#line 712 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str973, 2839, 5},
#line 711 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str974, 2834, 5},
#line 713 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str975, 2844, 5},
#line 175 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str976, 664, 2},
#line 249 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str977, 774, 6},
#line 183 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str978, 680, 2},
#line 156 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str979, 595, 26},
#line 509 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str980, 1652, 4},
#line 84 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str981, 297, 6},
#line 94 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str982, 357, 6},
#line 164 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str983, 641, 2},
#line 237 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str984, 760, 1},
#line 217 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str985, 740, 1},
#line 71 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str986, 244, 1},
#line 28 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str987, 34, 4},
#line 964 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str988, 4573, 6},
#line 464 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str989, 1463, 4},
#line 623 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str990, 2263, 10},
#line 625 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str991, 2283, 4},
#line 36 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str992, 84, 4},
#line 624 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str993, 2273, 10},
#line 626 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str994, 2287, 4},
#line 596 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str995, 2097, 8},
#line 602 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str996, 2133, 8},
#line 598 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str997, 2109, 4},
#line 614 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str998, 2213, 8},
#line 612 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str999, 2201, 8},
#line 603 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1000, 2141, 4},
#line 613 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1001, 2209, 4},
#line 615 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1002, 2221, 4},
#line 506 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1003, 1612, 4},
#line 455 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1004, 1399, 4},
#line 54 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1005, 158, 4},
#line 400 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1006, 1196, 1},
#line 409 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1007, 1207, 2},
#line 410 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1008, 1209, 2},
#line 411 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1009, 1211, 2},
#line 401 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1010, 1197, 1},
#line 1081 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1011, 5365, 10},
#line 74 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1012, 247, 1},
#line 1082 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1013, 5375, 10},
#line 301 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1014, 944, 4},
#line 1078 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1015, 5353, 4},
#line 1080 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1016, 5361, 4},
#line 1077 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1017, 5349, 4},
#line 1079 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1018, 5357, 4},
#line 173 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1019, 660, 2},
#line 162 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1020, 637, 2},
#line 212 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1021, 735, 1},
#line 211 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1022, 734, 1},
#line 213 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1023, 736, 1},
#line 408 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1024, 1205, 2},
#line 714 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1025, 2849, 6},
#line 716 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1026, 2861, 2},
#line 718 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1027, 2865, 6},
#line 720 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1028, 2877, 2},
#line 135 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1029, 535, 4},
#line 136 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1030, 539, 4},
#line 715 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1031, 2855, 6},
#line 717 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1032, 2863, 2},
#line 719 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1033, 2871, 6},
#line 721 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1034, 2879, 2},
#line 246 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1035, 769, 1},
#line 642 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1036, 2341, 6},
#line 644 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1037, 2353, 2},
#line 643 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1038, 2347, 6},
#line 645 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1039, 2355, 2},
#line 248 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1040, 773, 1},
#line 210 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1041, 733, 1},
#line 159 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1042, 631, 2},
#line 158 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1043, 629, 2},
#line 1102 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1044, 5518, 1},
#line 178 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1045, 670, 2},
#line 168 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1046, 648, 2},
#line 350 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1047, 1088, 2},
#line 349 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1048, 1086, 2},
#line 351 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1049, 1090, 3},
#line 347 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1050, 1080, 4},
#line 631 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1051, 2309, 2},
#line 636 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1052, 2323, 2},
#line 633 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1053, 2315, 2},
#line 638 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1054, 2329, 2},
#line 641 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1055, 2337, 4},
#line 634 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1056, 2317, 4},
#line 639 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1057, 2331, 4},
#line 632 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1058, 2311, 4},
#line 640 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1059, 2335, 2},
#line 637 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1060, 2325, 4},
#line 635 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1061, 2321, 2},
#line 169 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1062, 650, 2},
#line 186 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1063, 686, 2},
#line 348 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1064, 1084, 2},
#line 179 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1065, 672, 2},
#line 49 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1066, 146, 4},
#line 191 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1067, 696, 1},
#line 73 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1068, 246, 1},
#line 181 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1069, 676, 2},
#line 171 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1070, 654, 2},
#line 193 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1071, 699, 2},
#line 64 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1072, 232, 4},
#line 167 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1073, 647, 1},
#line 524 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1074, 1713, 1},
#line 176 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1075, 666, 2},
#line 182 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1076, 678, 2},
#line 155 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1077, 587, 8},
#line 174 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1078, 662, 2},
#line 170 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1079, 652, 2},
#line 180 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1080, 674, 2},
#line 1105 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1081, 5528, 22},
#line 1107 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1082, 5551, 2},
#line 1106 "x86_64_mnemonics.gperf"
    {(int)(size_t)&((struct spasm_x86_64_mnemonic_strings_t *)0)->spasm_x86_64_mnemonic_strings_str1083, 5550, 1}
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
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,     0,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,     1,     2,    -1,    -1,    -1,     3,
       -1,    -1,    -1,     4,     5,     6, -1204,
    -1077,    -2,     9,    10, -1215,    -1,    13,
       14, -1213, -1069,    -2, -1073,    -2,    -1,
       17, -1220, -1066,    -2, -1239, -1237, -1235,
       -1,    26, -1233, -1231,    -1,    31, -1055,
       -2, -1057,    -2, -1060,    -2, -1062,    -2,
    -1064,    -2,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    32,    -1,    -1,    -1,    33,
    -1262,    36, -1050,    -2,    37,    38,    39,
       -1,    40,    41,    -1,    -1,    -1,    -1,
       -1,    42,    -1,    -1,    -1,    -1,    43,
       -1,    -1,    44,    45,    -1,    -1,    -1,
       46, -1358, -1346,    -1,    52,    53, -1342,
    -1321,    58,    59, -1313, -1306,    -1,    64,
       -1,    65,    -1,    66, -1022,    -2,    67,
       -1, -1311, -1016,    -2, -1024,    -2,    70,
       -1,    71,    -1,    72,    73, -1028,    -2,
       74,    75,    76,    77,    78,    -1,    79,
       -1,    80,    -1,    81,    -1, -1338,    84,
       85, -1002,    -2,    86,    87, -1030,    -2,
       -1,    88, -1035,    -3,    89,    90,    -1,
       91,    -1,    92,    93,    -1,    94,    95,
    -1037,    -2,    96, -1374,    99,   100,   101,
      102, -1367,  -981,    -2, -1372,    -1,   107,
     -979,    -2,  -987,    -2, -1408, -1401,    -1,
      112, -1381,  -971,    -2,    -1, -1397, -1394,
    -1392,   125, -1390,   128,  -958,    -2,  -961,
       -2,  -965,    -4,   129,  -969,    -4,    -1,
      130,  -974,    -2,    -1, -1406,   133,  -953,
       -2,  -976,    -2,   134,    -1, -1434,    -1,
    -1430, -1428,   141,   142,    -1, -1426,    -1,
      145,    -1, -1424,  -938,    -2,  -941,    -2,
     -945,    -2,  -947,    -2,    -1,   148,  -949,
       -2,    -1,    -1,    -1,    -1,    -1,   149,
       -1, -1448,    -1, -1446,  -932,    -2,  -934,
       -2,    -1, -1462,    -1, -1460,    -1,   158,
      159,   160,   161,   162,  -928,    -2,  -930,
       -2,    -1,   163,    -1,    -1,    -1,    -1,
       -1,    -1,   164,    -1,    -1,    -1,    -1,
       -1, -1479,  -919,    -2,   167,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,   168,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,   169,    -1,
       -1,    -1,   170,    -1,   171,    -1,   172,
       -1,    -1,    -1,    -1, -1531,   175,   176,
      177,   178,    -1,   179,   180,   181,   182,
      183,   184,   185,    -1,   186,  -911,    -2,
      187,   188,   189,    -1,    -1,   190,    -1,
      191,    -1,    -1,   192,   193,   194,    -1,
       -1,    -1, -1553,    -1,   197,   198,  -889,
       -2,    -1,    -1,    -1,    -1,    -1,   199,
       -1,   200,    -1,    -1,    -1,    -1,   201,
       -1,    -1,   202,    -1,    -1,    -1,    -1,
      203,    -1,   204,   205,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,   206,
       -1,    -1,   207,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,   208,    -1,    -1,    -1,
       -1,    -1,    -1,    -1, -1608,  -875,    -2,
       -1,    -1,    -1,   211,    -1, -1619,   214,
      215,   216,  -872,    -2,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1641,   219,    -1,   220,    -1, -1639,    -1,
      223,  -863,    -2,  -867,    -2,   224, -1645,
     -859,    -2,    -1,    -1,   227,    -1,    -1,
      228,   229,    -1,    -1,    -1,    -1,    -1,
    -1662,    -1,   232,  -854,    -2,    -1,    -1,
       -1, -1669,   235,  -851,    -2,    -1,    -1,
      236,   237,    -1,   238,    -1, -1679,  -845,
       -2,    -1,   241,    -1,    -1,    -1, -1688,
      244,  -842,    -2,    -1,   245,   246,   247,
       -1,    -1,    -1,   248,    -1,    -1,    -1,
       -1,    -1,   249,   250,   251, -1709,    -1,
      254,  -832,    -2,    -1, -1717,    -1, -1715,
     -827,    -2,  -829,    -2,    -1,    -1,    -1,
      259,    -1,   260,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,   261,    -1,    -1,    -1,
       -1,    -1,   262,    -1,    -1,    -1,    -1,
       -1,   263,    -1,    -1,    -1,   264,    -1,
      265,   266,    -1,    -1,    -1,   267,   268,
       -1,    -1,   269,    -1,    -1,    -1,    -1,
      270,   271,    -1,    -1,    -1, -1783,    -1,
      274,   275,    -1, -1775,  -808,    -2,   278,
    -1779,  -805,    -2,    -1,   281,  -812,    -2,
      282, -1787,  -801,    -2,    -1,    -1,   285,
       -1,    -1, -1806, -1796,  -796,    -2,    -1,
    -1800,  -794,    -2,    -1, -1804,  -792,    -2,
     -798,    -2, -1809,  -790,    -2,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,   296,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1, -1830,  -787,    -2,    -1,    -1,
       -1,    -1,    -1, -1841,    -1,   301,   302,
     -785,    -2,    -1,    -1,   303,   304,   305,
      306,   307,    -1,    -1,    -1,    -1,   308,
       -1,    -1,    -1,   309,   310,   311,    -1,
      312,    -1,   313,   314,   315,    -1,    -1,
       -1,    -1,    -1,    -1,   316,    -1,   317,
       -1,    -1,    -1,   318,   319,    -1,    -1,
      320,   321, -1888,    -1,   324,  -762,    -2,
       -1,    -1,   325, -1919, -1895,  -756,    -2,
      330,   331, -1917, -1915,   337,    -1, -1913,
    -1911,    -1,   342,    -1, -1909,  -741,    -3,
     -744,    -2,  -746,    -2,  -750,    -3,  -752,
       -2,  -758,    -2,   346,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,   347,    -1,    -1,
      348, -1934,  -735,    -6,   355, -1969, -1967,
       -1, -1951, -1949, -1943,  -716,    -4,    -1,
    -1947,  -712,    -2,  -719,    -3,  -721,    -2,
      374, -1956,   377,  -709,    -2,    -1,   378,
      379,    -1, -1965,    -1,   382,  -704,    -2,
     -726,    -5,  -728,    -2,    -1,    -1,    -1,
      383,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,   384,   385,
       -1,    -1,    -1,    -1, -1995,    -1,   388,
     -698,    -2, -2006,   391,    -1,   392, -2002,
     -691,    -2,    -1,   395,  -695,    -2,    -1,
      396,    -1,    -1,   397,   398,   399,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -2045,   402,   403, -2043,    -1, -2029,  -678,
       -2,    -1, -2040,    -1, -2035,  -674,    -2,
    -2038,  -672,    -4,  -676,    -2,   416,  -680,
       -2,  -684,    -2,    -1,    -1, -2050,  -667,
       -2,   419,    -1, -2060,   422,    -1, -2058,
     -661,    -2,  -664,    -2,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,   425,    -1,
       -1,    -1,    -1,   426,   427,    -1,    -1,
      428,   429,   430,    -1,    -1,    -1,    -1,
       -1, -2129, -2104, -2102,    -1,   442, -2100,
     -641,    -2,  -646,    -4,  -650,    -4, -2127,
       -1,   457, -2110,  -626,    -4,    -1, -2125,
    -2119,    -1,   476,    -1,   477,  -620,   -12,
    -2122,  -606,    -2,   480,  -622,    -2,  -639,
      -12,  -653,    -3,    -1,    -1,   481,    -1,
       -1,    -1,   482,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,   483,    -1,    -1,    -1,
       -1,   484,   485,    -1,   486,    -1, -2156,
     -597,    -2,   489,   490,    -1,   491,    -1,
      492, -2202,   495,    -1,   496, -2200, -2177,
      501,    -1,   502, -2174,  -581,    -2,   505,
     -585,    -2,    -1, -2198, -2196,   510,    -1,
    -2190,   513, -2187,  -570,    -2,   516,  -573,
       -2,    -1,   517,    -1,   518,  -576,    -2,
     -578,    -2,  -587,    -2,  -591,    -2,   519,
       -1,    -1,    -1,   520,    -1, -2211,  -563,
       -2,    -1,   523,    -1,    -1,    -1, -2220,
      526,  -560,    -2,   527,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,   528,    -1, -2233,
     -555,    -2,    -1,    -1,   531,    -1,   532,
      533,   534,   535,   536,   537,   538,    -1,
    -2248,  -545,    -2,    -1,    -1,   541,   542,
       -1,    -1,    -1,   543,   544,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,   545,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1, -2282,
     -538,    -3,    -1,    -1,    -1,    -1,    -1,
       -1, -2291,  -535,    -6,    -1,    -1, -2296,
     -529,    -4,    -1, -2300,  -525,    -2, -2304,
      563,  -523,    -2,    -1,    -1,    -1,    -1,
    -2311,  -520,    -2,    -1,    -1,    -1,   566,
      567,    -1,    -1,   568,   569,   570,   571,
    -2361,   576,   577, -2359,   580,   581,    -1,
      582, -2357, -2355,   590, -2353, -2351, -2349,
    -2340,   599,  -487,    -2,    -1,   600,    -1,
      601, -2347,  -482,    -2,  -489,    -2,  -491,
       -2,  -493,    -2,  -497,    -3,  -501,    -4,
     -506,    -2,  -512,    -4,    -1,    -1,   604,
      605,   606,    -1,    -1,    -1,    -1,   607,
       -1,    -1,   608,    -1,    -1,   609,   610,
    -2382,   613,  -473,    -2,    -1,   614,    -1,
       -1,    -1,   615,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,   616,    -1,
      617,   618, -2404,  -465,    -2,    -1,    -1,
       -1,    -1,    -1, -2412,  -463,    -2,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,   623,   624,    -1,    -1,    -1,    -1,
      625,    -1,    -1,    -1,   626,    -1,    -1,
       -1,   627,   628,    -1,    -1,   629,    -1,
       -1,    -1,    -1,   630,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,   631,    -1,   632,
       -1,    -1,    -1,   633,    -1,    -1,    -1,
       -1,   634,    -1,    -1,   635,   636,    -1,
       -1,   637,   638,    -1,    -1,    -1,   639,
       -1,    -1,   640,   641, -2491,   644,  -442,
       -2,   645,   646,   647,   648, -2498,  -435,
       -2,    -1,   651,    -1,    -1,    -1,    -1,
      652,    -1,    -1,    -1,    -1,    -1,   653,
       -1,    -1,    -1,   654,   655, -2524, -2522,
      660,   661,  -426,    -2,  -428,    -2, -2586,
    -2528,  -420,    -4, -2582, -2580, -2549,   684,
       -1, -2540, -2537,  -394,    -3,   693,  -399,
       -5,    -1, -2547, -2545,  -384,    -3,  -390,
       -6,  -404,    -4,    -1, -2553,  -381,    -6,
    -2556,  -375,    -3,    -1,   712, -2561,  -371,
       -6, -2564,  -365,    -3,    -1,   722,    -1,
      723,   724,   725,    -1,   726,   727,   728,
      729,    -1,   730,   731,  -412,    -8,  -416,
       -4,    -1,   732,  -422,    -2,   733,    -1,
      734,    -1,    -1,    -1,    -1,    -1,   735,
       -1,   736,   737, -2617, -2607,    -1,   748,
      749,   750,   751,  -340,    -4,   752,    -1,
      753,   754,   755,    -1,   756,   757,  -346,
       -6,   758,    -1,    -1,    -1,   759,    -1,
       -1,    -1,   760,    -1,    -1,   761, -2632,
     -322,    -2,   764,    -1,   765, -2649,   768,
    -2641,   771,  -315,    -2,    -1, -2646,   774,
     -312,    -2,   775,  -318,    -2,    -1,    -1,
      776,    -1,    -1,    -1,   777,    -1,    -1,
       -1,   778,   779,    -1,   780,   781,    -1,
       -1,    -1,    -1,   782,    -1,   783,    -1,
      784,   785,   786,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,   787,    -1,    -1,   788,
       -1,   789,    -1,   790,    -1,    -1,    -1,
       -1,   791,    -1,    -1,    -1,   792,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,   793,    -1,    -1,   794,   795,   796,
       -1,    -1,   797,   798,   799,   800,   801,
       -1,   802,    -1,    -1,    -1,    -1,   803,
      804,    -1,   805,   806,    -1,   807,   808,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1, -2746,  -275,    -2,   811, -2750,  -272,
       -2,   814,   815,   816,    -1,    -1,   817,
      818,    -1,    -1,   819,   820,   821,    -1,
       -1,    -1,   822,   823,    -1,    -1,    -1,
       -1,    -1,    -1, -2778,   826,   827,  -260,
       -2,    -1,    -1,   828, -2784,  -255,    -2,
       -1,    -1,    -1, -2810,   837,    -1, -2808,
    -2794,  -243,    -2,    -1, -2806,   849,    -1,
    -2804, -2802,  -231,    -2,  -234,    -3,  -241,
       -6,  -246,    -3,  -253,    -6,    -1,    -1,
      855,    -1,   856,    -1,   857,   858,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
      859,   860,   861,    -1,    -1,    -1,    -1,
      862,    -1,    -1,   863,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,   864,    -1,
       -1, -2856,    -1,   867,   868,   869,   870,
     -219,    -2,    -1,    -1,    -1,    -1,   871,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
      872,   873,   874,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,   875,    -1,
       -1,    -1,    -1,   876,    -1,    -1,    -1,
       -1,    -1,    -1,   877,   878, -2904,  -205,
       -2,    -1,    -1,   881,    -1,    -1,    -1,
       -1,    -1,    -1,   882,   883,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,   884,
       -1,    -1,    -1,   885,   886,    -1,    -1,
       -1,   887,    -1,    -1,    -1,   888,    -1,
       -1, -2944,   891,   892,  -195,    -2, -2947,
     -191,    -2,   895, -2951,  -188,    -2,    -1,
       -1,    -1,    -1,   898,    -1,    -1,    -1,
       -1,    -1,    -1,   899,    -1,    -1,   900,
       -1,   901,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,   902,    -1,    -1,    -1,    -1,
       -1, -2984,  -181,    -2,    -1,    -1,    -1,
       -1,   905, -2992,  -178,    -2,    -1,    -1,
       -1,   908,    -1,    -1,    -1,   909,    -1,
      910,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,   911,    -1,   912,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,   913,    -1,    -1, -3037,  -170,
       -2,    -1,    -1,   916,    -1,    -1,    -1,
       -1,    -1,   917,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,   918,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,   919,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,   920,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1, -3105,  -163,    -2,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,   923,
      924,    -1,    -1,    -1,   925,    -1,    -1,
       -1,   926,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
      927,    -1,    -1,    -1,    -1,    -1,    -1,
      928,    -1,   929,    -1,   930,    -1,   931,
      932,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,   933,    -1,   934,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,   935,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,   936,    -1,
       -1,    -1,   937,    -1,    -1,    -1,    -1,
       -1,    -1,   938,    -1,    -1,    -1,   939,
      940,   941,    -1,    -1,    -1,    -1,    -1,
       -1,   942,   943,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,   944,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,   945,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,   946,    -1,    -1,   947,   948,   949,
       -1,    -1,    -1,    -1,    -1,   950,    -1,
       -1,    -1,    -1,    -1,    -1,   951,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,   952,    -1,    -1,   953,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,   954,    -1,   955,
       -1,   956,    -1,    -1,   957,    -1,   958,
       -1,   959,    -1,   960,    -1,    -1,    -1,
       -1,    -1,    -1, -3351,   963,  -123,    -2,
       -1,   964,   965,    -1,    -1, -3361,   968,
      969,  -118,    -2,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,   970,   971,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -3410,  -112,    -2,    -1,    -1,    -1,    -1,
       -1, -3419,   976,  -110,    -2,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,   977,    -1,    -1,
      978,    -1,    -1,    -1,   979,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,   980,
       -1,    -1,   981,   982,    -1,    -1,    -1,
      983,   984,    -1,   985,    -1,    -1,    -1,
       -1,   986,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
      987,    -1,    -1,    -1,    -1,   988,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,   989,    -1,    -1, -3535,   992,
      -94,    -2,    -1,    -1,    -1,    -1, -3542,
      -91,    -2,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1, -3580, -3578, -3575,   -83,    -2,
     1003,   -87,    -4,   -89,    -2,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     1004,    -1,    -1,    -1,    -1,    -1,  1005,
       -1,    -1,    -1,  1006,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  1007,
       -1,    -1,    -1,    -1, -3638,   -76,    -2,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  1010,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  1011,    -1,    -1,    -1,    -1,
     1012,    -1,    -1,  1013,    -1,    -1,    -1,
     1014, -3680, -3678,   -67,    -2,   -69,    -2,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  1019,
       -1,    -1,  1020,    -1,    -1,    -1,    -1,
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
     1021,    -1,    -1,    -1,    -1,  1022,    -1,
       -1,    -1,  1023,  1024,    -1,    -1,    -1,
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
       -1, -3890, -3888,   -57,    -2,   -59,    -2,
    -3900,    -1, -3898, -3896,   -51,    -2,   -53,
       -2,   -55,    -2,    -1,  1035,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1, -3924,   -48,    -2,    -1,
       -1,    -1,    -1,    -1, -3932,   -46,    -2,
       -1,    -1,    -1,    -1,  1040,    -1,    -1,
       -1,    -1,  1041,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  1042,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  1043,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  1044,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  1045,    -1,
       -1,    -1,    -1,    -1,  1046,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     1047,    -1,    -1,    -1,    -1,  1048,    -1,
       -1,    -1,  1049,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  1050,    -1,    -1,    -1,    -1,    -1,
       -1,    -1, -4124, -4122,    -1,  1055,   -31,
       -2,   -33,    -2, -4130, -4128,   -26,    -4,
      -28,    -2,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  1062,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  1063,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  1064,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  1065,
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
       -1,    -1,  1066,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  1067,    -1,    -1,  1068,    -1,    -1,
       -1,  1069,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  1070,
       -1,    -1,    -1,    -1,    -1,  1071,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  1072,  1073,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  1074,    -1,    -1,    -1,    -1,  1075,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  1076,
       -1,    -1,    -1,    -1,  1077,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  1078,    -1,    -1,    -1,    -1,    -1,
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
       -1,    -1,    -1,  1079,    -1,    -1,    -1,
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
     1080,    -1,    -1,    -1,    -1,    -1,    -1,
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
       -1,    -1,    -1,    -1,    -1,    -1,  1081,
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
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  1082,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  1083
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
#line 1111 "x86_64_mnemonics.gperf"

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
