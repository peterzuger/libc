/**
 * @file   libc/include/macros/scanf_format.h
 * @author Peter Züger
 * @date   22.07.2018
 * @brief  scanf() format specifier
 *
 * This file is part of libc (https://gitlab.com/peterzuger/libc).
 * Copyright (c) 2019 Peter Züger.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __MACRO_SCANF_FORMAT_H__
#define __MACRO_SCANF_FORMAT_H__

/* scanf macros for signed integers */
#define SCNd8            "hhd"     /* int8_t */
#define SCNd16           "hd"      /* int16_t */
#define SCNd32           "d"       /* int32_t */
#define SCNd64           "lld"     /* int64_t */

#define SCNdLEAST8       "hhd"     /* int_least8_t */
#define SCNdLEAST16      "hd"      /* int_least16_t */
#define SCNdLEAST32      "d"       /* int_least32_t */
#define SCNdLEAST64      "lld"     /* int_least64_t */

#define SCNdFAST8        "hhd"     /* int_fast8_t */
#define SCNdFAST16       "hd"      /* int_fast16_t */
#define SCNdFAST32       "d"       /* int_fast32_t */
#define SCNdFAST64       "lld"     /* int_fast64_t */

#define SCNdMAX          "jd"      /* intmax_t */
#define SCNdPTR          "ld"      /* intptr_t */

#define SCNi8            "hhi"     /* int8_t */
#define SCNi16           "hi"      /* int16_t */
#define SCNi32           "i"       /* int32_t */
#define SCNi64           "lli"     /* int64_t */

#define SCNiLEAST8       "hhi"     /* int_least8_t */
#define SCNiLEAST16      "hi"      /* int_least16_t */
#define SCNiLEAST32      "i"       /* int_least32_t */
#define SCNiLEAST64      "lli"     /* int_least64_t */

#define SCNiFAST8        "hhi"     /* int_fast8_t */
#define SCNiFAST16       "hi"      /* int_fast16_t */
#define SCNiFAST32       "i"       /* int_fast32_t */
#define SCNiFAST64       "lli"     /* int_fast64_t */

#define SCNiMAX          "ji"      /* intmax_t */
#define SCNiPTR          "li"      /* intptr_t */

/* scanf macros for unsigned integers */
#define SCNo8            "hho"     /* uint8_t */
#define SCNo16           "ho"      /* uint16_t */
#define SCNo32           "o"       /* uint32_t */
#define SCNo64           "llo"     /* uint64_t */

#define SCNoLEAST8       "hho"     /* uint_least8_t */
#define SCNoLEAST16      "ho"      /* uint_least16_t */
#define SCNoLEAST32      "o"       /* uint_least32_t */
#define SCNoLEAST64      "llo"     /* uint_least64_t */

#define SCNoFAST8        "hho"     /* uint_fast8_t */
#define SCNoFAST16       "ho"      /* uint_fast16_t */
#define SCNoFAST32       "o"       /* uint_fast32_t */
#define SCNoFAST64       "llo"     /* uint_fast64_t */

#define SCNoMAX          "jo"      /* uintmax_t */
#define SCNoPTR          "lo"      /* uintptr_t */

#define SCNu8            "hhu"     /* uint8_t */
#define SCNu16           "hu"      /* uint16_t */
#define SCNu32           "u"       /* uint32_t */
#define SCNu64           "llu"     /* uint64_t */

#define SCNuLEAST8       "hhu"     /* uint_least8_t */
#define SCNuLEAST16      "hu"      /* uint_least16_t */
#define SCNuLEAST32      "u"       /* uint_least32_t */
#define SCNuLEAST64      "llu"     /* uint_least64_t */

#define SCNuFAST8        "hhu"     /* uint_fast8_t */
#define SCNuFAST16       "hu"      /* uint_fast16_t */
#define SCNuFAST32       "u"       /* uint_fast32_t */
#define SCNuFAST64       "llu"     /* uint_fast64_t */

#define SCNuMAX          "ju"      /* uintmax_t */
#define SCNuPTR          "lu"      /* uintptr_t */

#define SCNx8            "hhx"     /* uint8_t */
#define SCNx16           "hx"      /* uint16_t */
#define SCNx32           "x"       /* uint32_t */
#define SCNx64           "llx"     /* uint64_t */

#define SCNxLEAST8       "hhx"     /* uint_least8_t */
#define SCNxLEAST16      "hx"      /* uint_least16_t */
#define SCNxLEAST32      "x"       /* uint_least32_t */
#define SCNxLEAST64      "llx"     /* uint_least64_t */

#define SCNxFAST8        "hhx"     /* uint_fast8_t */
#define SCNxFAST16       "hx"      /* uint_fast16_t */
#define SCNxFAST32       "x"       /* uint_fast32_t */
#define SCNxFAST64       "llx"     /* uint_fast64_t */

#define SCNxMAX          "jx"      /* uintmax_t */
#define SCNxPTR          "lx"      /* uintptr_t */

#endif /* __MACRO_SCANF_FORMAT_H__ */
