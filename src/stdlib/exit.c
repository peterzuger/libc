/**
 * @file   libc/src/stdlib/exit.c
 * @author Peter Züger
 * @date   18.10.2019
 * @brief  7.22.4.4  The exit function
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

extern void(*__atexit_functions[32])(void);
extern unsigned int __atexit_function_count;

_Noreturn void exit(int status){
    for(; __atexit_function_count;)
        __atexit_functions[--__atexit_function_count]();
    abort();
    (void)status;
    __builtin_unreachable();
}
