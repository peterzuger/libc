/**
 * @file   libc/include/signal.h
 * @author Peter Züger
 * @date   07.02.2018
 * @brief  Signal handling
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
#ifndef __SIGNAL_H__
#define __SIGNAL_H__

#include <types/sig_atomic_t.h>

#include <macros/SIG_DFL.h>
#include <macros/SIG_IGN.h>
#include <macros/SIG_ERR.h>
#include <macros/SIG.h>

#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */


// 7.14.1 Specify signal handling
void (*signal(int sig, void (*func)(int)))(int);


// 7.14.2 Send signal
int raise(int sig);


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* __SIGNAL_H___ */
