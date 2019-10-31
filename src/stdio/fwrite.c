/**
 * @file   libc/src/stdio/fwrite.c
 * @author Peter Züger
 * @date   14.11.2018
 * @brief  7.21.8.2 The fwrite function
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

size_t fwrite(const void* __restrict__ ptr, size_t size, size_t nmemb,
              FILE* __restrict__ stream){
    const unsigned char* p = (const unsigned char*)ptr;

    if(size == 0)
        return 0;
    for(size_t n = 0; n < nmemb; n++){
        for(size_t m = 0; m < size; m++){
            if(fputc(*p, stream) != *p)
                return n;
            p++;
        }
    }
    return nmemb;
}
