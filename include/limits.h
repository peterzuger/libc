/**
 * @file   libc/include/limits.h
 * @author Peter Züger
 * @date   28.01.2018
 * @note   part of the freestanding headers
 * @brief  Sizes of integer types
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
#ifndef __LIMITS_H__
#define __LIMITS_H__

#define SCHAR_MAX  __SCHAR_MAX__
#define SHRT_MAX   __SHRT_MAX__
#define INT_MAX    __INT_MAX__
#define LONG_MAX   __LONG_MAX__
#define LLONG_MAX  __LONG_LONG_MAX__

#define SCHAR_MIN  (-__SCHAR_MAX__-1)
#define SHRT_MIN   (-__SHRT_MAX__ -1)
#define INT_MIN    (-__INT_MAX__  -1)
#define LONG_MIN   (-__LONG_MAX__ -1L)
#define LLONG_MIN  (-__LONG_LONG_MAX__-1LL)

#define UCHAR_MAX  ((__SCHAR_MAX__*2)  +1)
#define USHRT_MAX  ((__SHRT_MAX__ *2)  +1)
#define UINT_MAX   ((__INT_MAX__  *2U) +1U)
#define ULONG_MAX  ((__LONG_MAX__ *2UL)+1UL)
#define ULLONG_MAX (__LONG_LONG_MAX__*2ULL+1ULL)

#define CHAR_BIT   __CHAR_BIT__

#ifndef MB_LEN_MAX
#define MB_LEN_MAX 1
#endif /* MB_LEN_MAX */

#ifdef __CHAR_UNSIGNED__  /* -funsigned-char */
#define CHAR_MIN 0
#define CHAR_MAX UCHAR_MAX
#else
#define CHAR_MIN SCHAR_MIN
#define CHAR_MAX __SCHAR_MAX__
#endif /* __CHAR_UNSIGNED__ */

#endif /* __LIMITS_H__ */
