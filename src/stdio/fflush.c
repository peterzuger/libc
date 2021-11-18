/**
 * @file   libc/src/stdio/fflush.c
 * @author Peter Züger
 * @date   18.11.2021
 * @brief  7.21.5.2 The fflush function
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

int fflush(FILE* stream){
    if(stream->buf.p){
        if(stream->buf.pos && !(stream->flags & __EOF)){
            const char* p = stream->buf.p;
            while(1){
                size_t ret = (size_t)_write(stream->fd, p, stream->buf.pos);

                // _write failed
                if((ret == ((size_t)-1)) || (ret > stream->buf.pos)){
                    stream->flags |= __ERR;
                    return EOF;
                }

                stream->buf.pos -= ret;

                if(!stream->buf.pos)
                    break;
            }
        }
    }
    return 0;
}