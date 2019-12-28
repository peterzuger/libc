/**
 * @file   libc/include/assert.h
 * @author Peter Züger
 * @date   07.02.2018
 * @brief  Diagnostics
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
#ifndef __ASSERT_H__
#define __ASSERT_H__

#include <stdnoreturn.h>

#if defined(NDEBUG)
# define assert(ignore) ((void)0)
#else
# define assert(a) (a?:__assert(#a,__FILE__,__LINE__,__PRETTY_FUNCTION__))
#endif /* defined(NDEBUG) */

#if !defined(__cplusplus)
#define static_assert _Static_assert
#endif /* !defined(__cplusplus) */

#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */


_Noreturn void __assert(const char* expr,const char* file,
                       const char* line,const char* func);


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* __ASSERT_H___ */
