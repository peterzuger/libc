/**
 * @file   libc/include/stdnoreturn.h
 * @author Peter Züger
 * @date   22.07.2018
 * @note   part of the freestanding headers
 * @brief  _Noreturn
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
#ifndef __STDNORETURN_H__
#define __STDNORETURN_H__

#if defined(__cplusplus)
# define _Noreturn [[noreturn]]
#else
# define noreturn _Noreturn
#endif /* defined(__cplusplus) */

#endif /* __STDNORETURN_H__ */
