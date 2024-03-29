/**
 * @file   libc/src/sys/thumb/none/_kill.c
 * @author Peter Züger
 * @date   18.11.2021
 * @brief  _kill syscall stub for NOSYS
 *
 * This file is part of libc (https://gitlab.com/peterzuger/libc).
 * Copyright (c) 2021 Peter Züger.
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
#include <syscall.h>

int _kill(int pid, int sig){
    (void)pid; (void)sig;

    // TODO: correctly pass the signal to swi
    __asm volatile ("swi %a0" :: "i" (1));
    return 0;
}
