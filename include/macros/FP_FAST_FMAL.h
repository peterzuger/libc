/**
 * @file   libc/include/macros/FP_FAST_FMAL.h
 * @author Peter Züger
 * @date   22.07.2018
 * @brief  fmal() speed
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
#ifndef __MACRO_FP_FAST_FMAL_H__
#define __MACRO_FP_FAST_FMAL_H__

#if defined(__FP_FAST_FMAL)
# define FP_FAST_FMAL 1
#endif /* __FP_FAST_FMAL */

#endif /* __MACRO_FP_FAST_FMAL_H__ */
