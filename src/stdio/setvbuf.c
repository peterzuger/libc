/**
 * @file   libc/src/stdio/setvbuf.c
 * @author Peter Züger
 * @date   08.11.2021
 * @brief  7.21.5.6 The setvbuf function
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
#include <stdlib.h>

int setvbuf(FILE* __restrict__ stream, char* __restrict__ buf, int mode,
            size_t size){
    if((mode != _IOFBF) && (mode != _IOLBF) && (mode != _IONBF))
        return -1;

    fflush(stream);

    // only change mode, reuse buffer if the size matches
    if(!buf && stream->buf.p && stream->buf.len == size && mode != _IONBF){
        if(mode == _IOLBF)
            stream->flags |= __IOLBF;
        else
            stream->flags &= ~__IOLBF;
        return 0;
    }

    if(stream->flags & __MALLOC)
        free(stream->buf.p);
    stream->flags  &= ~(__IOLBF | __MALLOC);
    stream->buf.p   = NULL;
    stream->buf.len = 0;
    stream->buf.pos = 0;

    // stream is in _IONBF mode

    if(mode != _IONBF){
        if(!buf){
            size = size ? size : BUFSIZ;
            buf = malloc(size);
            if(!buf)
                return EOF;
            stream->flags |= __MALLOC;
        }

        stream->buf.p   = buf;
        stream->buf.len = size;

        // stream is in _IOFBF mode

        if(mode == _IOLBF)
            stream->flags |= __IOLBF;
    }

    return 0;
}
