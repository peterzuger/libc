/**
 * @file   libc/src/signal/signal.c
 * @author Peter Züger
 * @date   09.10.2019
 * @brief  7.14.1.1  The signal function implementation
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
#include <signal.h>

static void (*__signal_handlers[6])(int);

void (*signal(int sig, void (*func)(int)))(int){
    if((sig >= 0) && (sig <= 6)){
        void (*tmp)(int) = __signal_handlers[sig];
        __signal_handlers[sig] = func;
        return tmp;
    }
    return SIG_ERR;
}
