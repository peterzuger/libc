/**
 * @file   libc/include/setjmp.h
 * @author Peter Züger
 * @date   07.02.2018
 * @brief  Nonlocal jumps
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
#ifndef __SETJMP_H__
#define __SETJMP_H__

#include <stdnoreturn.h>

#include <types/jmp_buf.h>

// 7.13.1 Save calling environment
#define setjmp(jmp_buf) (0)


#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */


// 7.13.2 Restore calling environment
_Noreturn void longjmp(jmp_buf env, int val);


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* __SETJMP_H___ */
