/**
 * @file   libc/include/types/va_list.h
 * @author Peter Züger
 * @date   05.02.2018
 * @brief  variable argument list
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
#ifndef __TYPE_VA_LIST_H__
#define __TYPE_VA_LIST_H__

#if !defined(__VA_LIST_DEFINED__)
# define __VA_LIST_DEFINED__
typedef __builtin_va_list va_list;
#endif /* !defined(__VA_LIST_DEFINED__) */

#endif /* __TYPE_VA_LIST_H__ */
