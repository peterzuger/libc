/**
 * @file   libc/src/sys/thumb/none/_start.c
 * @author Peter Züger
 * @date   18.11.2021
 * @brief  _start for thumb on NOSYS
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
#include <stdint.h>

extern int main(void);

void __attribute__((flatten)) _start(void){
    extern uint32_t __data_load__;
    extern uint32_t __data_start__;
    extern uint32_t __data_end__;

    // do global/static data initialization
    uint32_t *src  = &__data_load__;
    uint32_t *dest = &__data_start__;

    while( dest < &__data_end__ )
        *dest++ = *src++;

    extern uint32_t __bss_start__;
    extern uint32_t __bss_end__;

    // clear out uninitialized variables
    dest = &__bss_start__;
    while(dest < &__bss_end__)
        *dest++ = 0;

    {
        extern void (*__preinit_array_start [])(void) __attribute__((weak));
        extern void (*__preinit_array_end [])(void) __attribute__((weak));

        size_t count = (size_t)(__preinit_array_end - __preinit_array_start);
        for(size_t i = 0; i < count; i++)
            __preinit_array_start[i]();
    }

    {
        extern void (*__ctors_start__[])(void) __attribute__((weak));
        extern void (*__ctors_end__[])(void) __attribute__((weak));

        size_t count = (size_t)(__ctors_end__ - __ctors_start__);
        for(size_t i = 0; i < count; i++)
            __ctors_start__[i]();
    }

    {
        extern void (*__init_array_start [])(void) __attribute__((weak));
        extern void (*__init_array_end [])(void) __attribute__((weak));

        size_t count = (size_t)(__init_array_end - __init_array_start);
        for(size_t i = 0; i < count; i++)
            __init_array_start[i]();
    }

#pragma GCC diagnostic ignored "-Wpedantic"
    main();
#pragma GCC diagnostic warning "-Wpedantic"

    {
        extern void (*__fini_array_start [])(void) __attribute__((weak));
        extern void (*__fini_array_end [])(void) __attribute__((weak));

        size_t count = (size_t)(__fini_array_end - __fini_array_start);
        for(size_t i = count - 1; i; i--)
            __fini_array_start[i]();
    }

    {
        extern void (*__dtors_start__[])(void) __attribute__((weak));
        extern void (*__dtors_end__[])(void) __attribute__((weak));

        size_t count = (size_t)(__dtors_end__ - __dtors_start__);
        for(size_t i = count - 1; i; i--)
            __dtors_start__[i]();
    }

    while(1);
}
