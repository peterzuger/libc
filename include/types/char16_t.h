/**
 * @file   libc/include/types/char16_t.h
 * @author Peter Züger
 * @date   24.07.2018
 * @brief  16 bit char
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
#ifndef __TYPE_CHAR16_T_H__
#define __TYPE_CHAR16_T_H__

#if !defined(__cplusplus)
# if defined(__CHAR16_TYPE__) || defined(DOXYGEN)
#  if !defined(__CHAR16_T_DEFINED__)
#   define __CHAR16_T_DEFINED__
#   define CHAR16_MIN (-__CHAR16_MAX__-1)
#   define CHAR16_MAX (__CHAR16_MAX__)
typedef __CHAR16_TYPE__ char16_t;
#  endif /* !defined(__CHAR16_T_DEFINED__) */
# endif /* defined(__CHAR16_TYPE__) || defined(DOXYGEN) */
#endif /* !defined(__cplusplus) */

#endif /* __TYPE_CHAR16_T_H__ */
