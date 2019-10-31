/**
 * @file   libc/include/types/size_t.h
 * @author Peter Züger
 * @date   05.02.2018
 * @brief  return type of sizeof
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
#ifndef __TYPE_SIZE_T_H__
#define __TYPE_SIZE_T_H__

#if defined(__SIZE_TYPE__) || defined(DOXYGEN)
# if !defined(__SIZE_T_DEFINED__)
#  define __SIZE_T_DEFINED__
typedef __SIZE_TYPE__ size_t;
typedef __SIZE_TYPE__ rsize_t;
# endif /* !defined(__SIZE_T_DEFINED__) */
#endif /* defined(__SIZE_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_SIZE_T_H__ */
