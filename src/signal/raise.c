/**
 * @file   libc/src/signal/raise.c
 * @author Peter Züger
 * @date   09.10.2019
 * @brief  7.14.2.1  The raise function implementation
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
#include <errno.h>
#include <signal.h>

#include <syscall.h>

extern void (*__signal_handlers[_SIG_MAX])(int);

int raise(int sig){
    if((sig < 0) || (sig >= _SIG_MAX)){
        errno = EINVAL;
        return -1;
    }

    void (*tmp)(int) = __signal_handlers[sig];

    if(tmp == SIG_DFL){
        return _kill(_getpid(), sig);
    }else if(tmp != SIG_IGN){
        __signal_handlers[sig] = SIG_DFL;
        tmp(sig);
    }

    return 0;
}
