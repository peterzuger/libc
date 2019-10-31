/**
 * @file   libc/include/types/uint32_t.h
 * @author Peter Züger
 * @date   17.02.2018
 * @brief  unsigned 32 bit integer
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
#ifndef __TYPE_UINT32_T_H__
#define __TYPE_UINT32_T_H__

#if defined(__UINT32_TYPE__) || defined(DOXYGEN)
# if !defined(__UINT32_T_DEFINED__)
#  define __UINT32_T_DEFINED__
#  define UINT32_MIN (0)
#  define UINT32_MAX (__UINT32_MAX__)
#  define UINT32_C(c) __UINT32_C(c)
typedef __UINT32_TYPE__ uint32_t;
# endif /* !defined(__UINT32_T_DEFINED__) */
#endif /* defined(__UINT32_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_UINT32_T_H__ */
