/**
 * @file   libc/include/macros/FE_EXCEPT.h
 * @author Peter Züger
 * @date   22.07.2018
 * @brief  Floation Point environment exceptions
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
#ifndef __MACROS_FE_EXCEPT_H__
#define __MACROS_FE_EXCEPT_H__

#define FE_DIVBYZERO
#define FE_INEXACT
#define FE_INVALID
#define FE_OVERFLOW
#define FE_UNDERFLOW

#define FE_ALL_EXCEPT

#endif /* __MACROS_FE_EXCEPT_H__ */
