/**
 * @file   libc/src/stdio/fgetc.c
 * @author Peter Züger
 * @date   18.11.2021
 * @brief  7.21.7.1 The fgetc function
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
#include <syscall.h>

int fgetc(FILE* stream){
    if(stream->flags & __EOF)
        return EOF;

    // TODO: handle buffering

    unsigned char c;
    size_t ret = (size_t)_read(stream->fd, &c, 1);

    if(ret == 1)
        return (int)c;

    if(!ret)
        stream->flags |= __EOF;
    else if(ret == ((size_t)-1))
        stream->flags |= __ERR;

    return EOF;
}
