/**
 * @file   libc/include/macros/HUGE_VALF.h
 * @author Peter Züger
 * @date   22.07.2018
 * @brief  huge float value
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
#ifndef __MACRO_HUGE_VALF_H__
#define __MACRO_HUGE_VALF_H__

#define HUGE_VALF (__builtin_huge_valf())

#endif /* __MACRO_HUGE_VALF_H__ */
