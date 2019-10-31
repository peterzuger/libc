/**
 * @file   libc/src/stdio/fgets.c
 * @author Peter Züger
 * @date   14.11.2018
 * @brief  7.21.7.2 The fgets function
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

char *fgets(char* __restrict__ s, int n, FILE* __restrict__ stream){
    for(int m = 0; m < n; m++){
        int c = fgetc(stream);
        if(c == EOF)
            return NULL;
        s[m] = (char)c;
        if(c == '\n')
            return s;
    }
    return s;
}
