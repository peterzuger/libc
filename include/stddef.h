/**
 * @file   libc/include/stddef.h
 * @author Peter Züger
 * @date   28.01.2018
 * @note   part of the freestanding headers
 * @brief  Common definitions
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
#ifndef __STDDEF_H__
#define __STDDEF_H__

#include <types/ptrdiff_t.h>
#include <types/size_t.h>
#include <types/max_align_t.h>
#include <types/wchar_t.h>

#include <macros/NULL.h>

#define offsetof(t, d) __builtin_offsetof(t, d)

#endif /* __STDDEF_H__ */
