/**
 * @file   libc/src/stdio/fputc.c
 * @author Peter Züger
 * @date   18.11.2021
 * @brief  7.21.7.3 The fputc function
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

int fputc(int c, FILE *stream){
    if(stream->flags & __EOF)
        return EOF;

    if(stream->buf.p){
        stream->buf.p[stream->buf.pos++] = (char)c;
        if((stream->buf.pos == stream->buf.len) ||
           ((stream->flags & __IOLBF) && (((char)c) == '\n')))
            fflush(stream);
    }else{
        stream->nbuf[0] = (char)c;
        size_t ret = (size_t)_write(stream->fd, stream->nbuf, 1);
        stream->nbuf[0] = 0;
        if(ret != 1){
            stream->flags |= __ERR;
            return EOF;
        }
    }
    return c;
}
