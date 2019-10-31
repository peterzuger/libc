/**
 * @file   libc/src/complex/cimag.c
 * @author Peter Züger
 * @date   12.07.2018
 * @brief  7.3.9.2 The cimag functions
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
#include <complex.h>

double cimag(double complex z){
    return __imag__ z;
}

float cimagf(float complex z){
    return __imag__ z;
}

long double cimagl(long double complex z){
    return __imag__ z;
}
