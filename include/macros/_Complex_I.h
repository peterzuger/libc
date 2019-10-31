/**
 * @file   libc/include/macros/_Complex_I.h
 * @author Peter Züger
 * @date   08.08.2018
 * @brief  _Complex_I macro
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
#ifndef __MACRO__COMPLEX_I_H__
#define __MACRO__COMPLEX_I_H__

#define _Complex_I (__extension__ 1.0iF)

#endif /* __MACRO__COMPLEX_I_H__ */
