/**
 * @file   libc/src/stdio/tmpfile.c
 * @author Peter Züger
 * @date   18.11.2021
 * @brief  7.21.4.3 The tmpfile function
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
#include <stdio.h>

#include <syscall.h>

extern FILE* __libc_get_FILE();

FILE* tmpfile(void){
    FILE* f = __libc_get_FILE();

    if(f)
        f->fd = _open("/tmp/", O_RDWR | O_TMPFILE, 0700);

    if(f->fd < 0)
        return NULL;

    f->buf.p = NULL;
    f->flags = __READ | __WRITE;

    return f;
}
