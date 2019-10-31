/**
 * @file   libc/src/ctype/isalnum.c
 * @author Peter Züger
 * @date   09.08.2018
 * @brief  7.4.1.1 The isalnum function
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
#include <ctype.h>

/**
 * @brief alphanumerical character classification
 *
 * The isalnum function tests for any character for
 * which isalpha or isdigit is true.
 */
int isalnum(int c){
    return (isdigit(c) || isalpha(c));
}
