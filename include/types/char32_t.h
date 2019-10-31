/**
 * @file   libc/include/types/char32_t.h
 * @author Peter Züger
 * @date   24.07.2018
 * @brief  32 bit char
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
#ifndef __TYPE_CHAR32_T_H__
#define __TYPE_CHAR32_T_H__

#if !defined(__cplusplus)
# if defined(__CHAR32_TYPE__) || defined(DOXYGEN)
#  if !defined(__CHAR32_T_DEFINED__)
#   define __CHAR32_T_DEFINED__
#   define CHAR32_MIN (-__CHAR32_MAX__-1)
#   define CHAR32_MAX (__CHAR32_MAX__)
typedef __CHAR32_TYPE__ char32_t;
#  endif /* !defined(__CHAR32_T_DEFINED__) */
# endif /* defined(__CHAR32_TYPE__) || defined(DOXYGEN) */
#endif /* !defined(__cplusplus) */

#endif /* __TYPE_CHAR32_T_H__ */
