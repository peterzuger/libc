/**
 * @file   libc/src/sys/x86_64/linux/__libc_main.c
 * @author Peter Züger
 * @date   17.11.2021
 * @brief  __libc_main function call main and return to the host system
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
#include <stdlib.h>
#include <stdnoreturn.h>

extern void __libc_init(void);
extern int main(int argc, char** argv, char** envp);

noreturn void __libc_main(int argc, char** argv, char** envp){
    {
        extern void (*__preinit_array_start [])(int, char**, char**);
        extern void (*__preinit_array_end [])(int, char**, char**);

        size_t count = (size_t)(__preinit_array_end - __preinit_array_start);
        for(size_t i = 0; i < count; i++)
            __preinit_array_start[i](argc, argv, envp);
    }

    __libc_init();

    {
        extern void (*__init_array_start [])(int, char**, char**);
        extern void (*__init_array_end [])(int, char**, char**);

        size_t count = (size_t)(__init_array_end - __init_array_start);
        for(size_t i = 0; i < count; i++)
            __init_array_start[i](argc, argv, envp);
    }

    int ret = main(argc, argv, envp);

    {
        extern void (*__fini_array_start [])(void);
        extern void (*__fini_array_end [])(void);

        size_t count = (size_t)(__fini_array_end - __fini_array_start);
        for(size_t i = count; i > 0; i--)
            __fini_array_start[i - 1]();
    }

    exit(ret);
}
