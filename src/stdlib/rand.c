/**
 * @file   libc/src/stdlib/rand.c
 * @author Peter Züger
 * @date   08.02.2018
 * @brief  7.22.2.1 The rand function
 * @brief  7.22.2.2 The srand function
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
#include <stdlib.h>

static unsigned long int __rand_next = 1;

// RAND_MAX assumed to be 32767
int rand(void){
    __rand_next = __rand_next * 1103515245 + 12345;
    return (unsigned int)(__rand_next/65536) % 32768;
}

void srand(unsigned int seed){
    __rand_next = seed;
}
