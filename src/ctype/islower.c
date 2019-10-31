/**
 * @file   libc/src/ctype/islower.c
 * @author Peter Züger
 * @date   09.08.2018
 * @brief  7.4.1.7 The islower function
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
 * @brief lowercase character classification
 *
 * The islower function tests for any character that is a lowercase letter or
 * is one of a locale-specific set of characters for which none of iscntrl,
 * isdigit, ispunct, or isspace is true. In the "C" locale, islower returns
 * true only for the lowercase letters (as defined in 5.2.1).
 */
int islower(int c){
    return ((c>='a')&&(c<='z'));
}
