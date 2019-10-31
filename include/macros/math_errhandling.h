/**
 * @file   libc/include/macros/math_errhandling.h
 * @author Peter Züger
 * @date   24.07.2018
 * @brief  math error handling
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
#ifndef __MACRO_MATH_ERRHANDLING_H__
#define __MACRO_MATH_ERRHANDLING_H__

#include <macros/MATH_ERRNO.h>
#include <macros/MATH_ERREXCEPT.h>

#if defined(__FAST_MATH__)
# define math_errhandling  (MATH_ERREXCEPT)
#else
# define math_errhandling  (MATH_ERRNO | MATH_ERREXCEPT)
#endif

#endif /* __MACRO_MATH_ERRHANDLING_H__ */
