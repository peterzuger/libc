/**
 * @file   libc/src/complex/creal.c
 * @author Peter Züger
 * @date   12.07.2018
 * @brief  7.3.9.6 The creal functions
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

double creal(double complex z){
    return __real__ z;
}

float crealf(float complex z){
    return __real__ z;
}

long double creall(long double complex z){
    return __real__ z;
}
