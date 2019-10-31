/**
 * @file   libc/src/ctype/isblank.c
 * @author Peter Züger
 * @date   09.08.2018
 * @brief  7.4.1.3 The isblank function
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
 * @brief blank character classification
 *
 * The isblank function tests for any character that is a standard blank
 * character or is one of a locale-specific set of characters for which
 * isspace is true and that is used to separate words within a line of
 * text. The standard blank characters are the following: space (' '), and
 * horizontal tab ('\t'). In the "C" locale, isblank returns true only for
 * the standard blank characters.
 */
int isblank(int c){
    return ((c=='\t')||(c==' '));
}
