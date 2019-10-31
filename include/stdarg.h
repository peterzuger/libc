/**
 * @file   libc/include/stdarg.h
 * @author Peter Züger
 * @date   28.01.2018
 * @note   part of the freestanding headers
 * @brief  Variable arguments
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
#ifndef __STDARG_H__
#define __STDARG_H__

#include <types/va_list.h>

#define va_start(ap,param) __builtin_va_start(ap,param)
#define va_end(ap)         __builtin_va_end(ap)
#define va_arg(ap,type)    __builtin_va_arg(ap,type)
#define va_copy(d,s)       __builtin_va_copy(d,s)

#endif /* __STDARG_H__ */
