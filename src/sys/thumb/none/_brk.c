/**
 * @file   libc/src/sys/thumb/none/_brk.c
 * @author Peter Züger
 * @date   18.11.2021
 * @brief  _brk syscall stub for NOSYS
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
#include <stdlib.h>

#include <syscall.h>

void* _brk(void* addr){
    extern char __heap_start__;
    extern char __heap_end__;

    if(addr == NULL)
        return &__heap_start__;

    if(addr > ((void*)&__heap_end__)){
        errno = ENOMEM;
        return NULL;
    }

    return addr;
}
