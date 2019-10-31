/**
 * @file   libc/include/macros/MB_CUR_MAX.h
 * @author Peter Züger
 * @date   02.12.2018
 * @brief  maximum number of bytes in a multibyte character
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
#ifndef __MACRO_MB_CUR_MAX_H__
#define __MACRO_MB_CUR_MAX_H__

#include <types/size_t.h>

#define MB_CUR_MAX ((size_t)4)

#endif /* __MACRO_MB_CUR_MAX_H__ */
