/**
 * @file   libc/src/stdlib/abort.c
 * @author Peter Züger
 * @date   16.07.2018
 * @brief  7.2.1.1 The assert macro implementation
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
#include <stdlib.h>
#include <stdnoreturn.h>

/**
 * this executes a illegal instruction which triggers the NMI handler
 */
_Noreturn void abort(){
    __asm volatile (".word 0xe7f0def0\n"); /** arm+thumb illegal instruction */
    __asm volatile (".short 0xde00\n");    /** thumb illegal instruction */
    __asm volatile (".word 0xe7f000f0\n"); /** arm illegal instruction */
    for(;;);
}
