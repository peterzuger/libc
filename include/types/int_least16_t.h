/**
 * @file   libc/include/types/int_least16_t.h
 * @author Peter Züger
 * @date   08.04.2018
 * @brief  signed least 16 bit integer
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
#ifndef __TYPE_INT_LEAST16_T_H__
#define __TYPE_INT_LEAST16_T_H__

#if defined(__INT_LEAST16_TYPE__) || defined(DOXYGEN)
# if !defined(__INT_LEAST16_T_DEFINED__)
#  define __INT_LEAST16_T_DEFINED__
#  define INT_LEAST16_MIN (-__INT_LEAST16_MAX__-1)
#  define INT_LEAST16_MAX (__INT_LEAST16_MAX__)
typedef __INT_LEAST16_TYPE__ int_least16_t;
# endif /* !defined(__INT_LEAST16_T_DEFINED__) */
#endif /* defined(__INT_LEAST16_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_INT_LEAST16_T_H__ */
