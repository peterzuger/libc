/**
 * @file   libc/src/sys/x86_64/linux/_getpid.c
 * @author Peter Züger
 * @date   18.11.2021
 * @brief  _getpid syscall implementation for linux
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
#include <errno.h>

#include <syscall.h>
#include <types/pid_t.h>

pid_t _getpid(void){
    int ret;

    __asm volatile(
        "syscall"
        : "=a" (ret)
        : "0"(__NR_getpid)
        : "rcx", "r8", "r9", "r10", "r11", "memory", "cc");

    if(ret < 0){
        errno = -(ret);
        ret = -1;
    }
    return ret;
}
