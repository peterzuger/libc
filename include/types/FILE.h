/**
 * @file   libc/include/types/FILE.h
 * @author Peter Züger
 * @date   17.02.2018
 * @brief  FILE structure
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
#ifndef __TYPE_FILE_H__
#define __TYPE_FILE_H__

#include <types/size_t.h>

#if !defined(__FILE_DEFINED__)
# define __FILE_DEFINED__
# define __READ   ((int)(1 << 0))
# define __WRITE  ((int)(1 << 1))
# define __IOLBF  ((int)(1 << 2))
# define __MALLOC ((int)(1 << 3))
# define __EOF    ((int)(1 << 4))
# define __ERR    ((int)(1 << 5))
# define __APPEND ((int)(1 << 6))

struct __fbuf{
    char*  p;
    size_t len;
    size_t pos;
};

typedef struct{
    int           fd;
    int           flags;
    union{
        struct __fbuf buf;
        char          nbuf[1];
    };
    char          cbuf[1];
}FILE;
#endif /* !defined(__FILE_DEFINED__) */

#endif /* __TYPE_FILE_H__ */
