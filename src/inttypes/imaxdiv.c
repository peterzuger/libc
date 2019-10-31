/**
 * @file   libc/src/inttypes/imaxdiv.c
 * @author Peter Züger
 * @date   22.07.2018
 * @breif  7.8.2.2 The imaxdiv function
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
#include <inttypes.h>

imaxdiv_t imaxdiv(intmax_t numer, intmax_t denom){
    imaxdiv_t result;

    result.quot = numer / denom;
    result.rem = numer % denom;

    if (numer >= 0 && result.rem < 0){
        ++result.quot;
        result.rem -= denom;
    }

    return result;
}
