/**
 * @file   libc/src/stdio/fopen.c
 * @author Peter Züger
 * @date   18.11.2021
 * @brief  7.21.5.3 The fopen function
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
#include <errno.h>
#include <stdio.h>

#include <syscall.h>

static int fopen_flags(const char* mstr, int* mode){
    int flags = 0;

    switch(mstr[0]){
    case 'r':
        flags |= __READ;
        *mode |= O_RDONLY;
        break;
    case 'w':
        flags |= __WRITE;
        *mode |= O_WRONLY | O_CREAT | O_TRUNC;
        break;
    case 'a':
        flags |= __WRITE | __APPEND;
        *mode |= O_WRONLY | O_CREAT | O_APPEND;
        break;
    default:
        errno = EINVAL;
        return 0;
    }

    while(*++mstr){
        switch(*mstr){
        case '+':
            flags |= __READ | __WRITE;
            *mode = (*mode & (~O_ACCMODE)) | O_RDWR;
            break;
        case 'b':
            break;
        case 'x':
            *mode |= O_EXCL;
            break;
        default:
            errno = EINVAL;
            return 0;
        }
    }

    return flags;
}

extern FILE* __libc_get_FILE();

FILE* fopen(const char* __restrict__ filename, const char* __restrict__ mode){
    int omode = 0;
    int flags = fopen_flags(mode, &omode);

    if(!flags)
        return NULL;

    FILE* f = __libc_get_FILE();

    if(f){
        f->fd = _open(filename, omode, 0666);

        if(f->fd < 0)
            return NULL;

        f->flags = flags;
    }

    return f;
}
