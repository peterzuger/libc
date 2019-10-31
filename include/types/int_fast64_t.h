/**
 * @file   libc/include/types/int_fast64_t.h
 * @author Peter Züger
 * @date   08.04.2018
 * @brief  signed fast 64 bit integer
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
#ifndef __TYPE_INT_FAST64_T_H__
#define __TYPE_INT_FAST64_T_H__

#if defined(__INT_FAST64_TYPE__) || defined(DOXYGEN)
# if !defined(__INT_FAST64_T_DEFINED__)
#  define __INT_FAST64_T_DEFINED__
#  define INT_FAST64_MIN (-__INT_FAST64_MAX__-1)
#  define INT_FAST64_MAX (__INT_FAST64_MAX__)
typedef __INT_FAST64_TYPE__ int_fast64_t;
# endif /* !defined(__INT_FAST64_T_DEFINED__) */
#endif /* defined(__INT_FAST64_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_INT_FAST64_T_H__ */
