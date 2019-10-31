/**
 * @file   libc/include/types/float_t.h
 * @author Peter Züger
 * @date   22.07.2018
 * @brief  float type
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
#ifndef __TYPE_FLOAT_T_H__
#define __TYPE_FLOAT_T_H__

#if !defined(__FLOAT_T_DEFINED__)
# define __FLOAT_T_DEFINED__
# if __FLT_EVAL_METHOD__ == 0
typedef float float_t;
# elif __FLT_EVAL_METHOD__ == 1
typedef double float_t;
# elif __FLT_EVAL_METHOD__ == 2
typedef long double float_t;
# else
#  error FLT_EVAL_METHOD not 0,1 or 2
# endif /* __FLT_EVAL_METHOD__ */
#endif /* !defined(__FLOAT_T_DEFINED__) */

#endif /* __TYPE_FLOAT_T_H__ */
