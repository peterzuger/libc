/**
 * @file   libc/src/stdio/stdfiles.c
 * @author Peter Züger
 * @date   01.12.2018
 * @brief  stdio files
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
#include <stdio.h>
#include <string.h>

FILE __libc_files[FOPEN_MAX];

char __stdin_buf[BUFSIZ];
char __stdout_buf[BUFSIZ];
char __stderr_buf[BUFSIZ];

FILE* __stdin;
FILE* __stdout;
FILE* __stderr;

void __libc_init_files(void){
    memset(__libc_files, 0, sizeof(__libc_files));

    __stdin  = &__libc_files[0];
    __stdout = &__libc_files[1];
    __stderr = &__libc_files[2];

    __stdin->fd = 0;
    __stdin->flags = __READ | __IOLBF;
    __stdin->buf.p = __stdin_buf;
    __stdin->buf.len = BUFSIZ;

    __stdout->fd = 1;
    __stdout->flags = __WRITE | __IOLBF;
    __stdout->buf.p = __stdout_buf;
    __stdout->buf.len = BUFSIZ;

    __stderr->fd = 2;
    __stderr->flags = __WRITE | __IOLBF;
    __stderr->buf.p = __stderr_buf;
    __stderr->buf.len = BUFSIZ;
}

void __libc_fini_files(void){
    for(size_t i = 0; i < FOPEN_MAX; ++i)
        if(__libc_files[i].flags != 0)
            fclose(&__libc_files[i]);
}

FILE* __libc_get_FILE(){
    for(size_t i = 0; i < FOPEN_MAX; ++i){
        if(__libc_files[i].flags == 0){
            memset(&__libc_files[i], 0, sizeof(FILE));
            return &__libc_files[i];
        }
    }
    return NULL;
}
