/**
 * @file   libc/include/types/uint128_t.h
 * @author Peter Züger
 * @date   11.01.2020
 * @brief  unsigned 128 bit integer
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
#ifndef __TYPE_UINT128_T_H__
#define __TYPE_UINT128_T_H__

#if defined(__SIZEOF_INT128__) || defined(DOXYGEN)
# if !defined(__UINT128_T_DEFINED__)
#  define __UINT128_T_DEFINED__
#  define UINT128_MIN (0)
#  define UINT128_MAX ((__uint128_t)0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF)
#  define UINT128_C(c) ((__uint128_t)(c))
typedef __uint128_t uint128_t;
# endif /* !defined(__UINT128_T_DEFINED__) */
#endif /* defined(__SIZEOF_INT128__) || defined(DOXYGEN) */

#endif /* __TYPE_UINT128_T_H__ */
