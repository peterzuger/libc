/**
 * @file   libc/src/ctype/isspace.c
 * @author Peter Züger
 * @date   09.08.2018
 * @brief  7.4.1.10 The isspace function
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
 * @brief white-space character classification
 *
 * The isspace function tests for any character that is a standard white-space
 * character or is one of a locale-specific set of characters for which isalnum
 * is false. The standard white-space characters are the following:
 * space (' '), form feed ('\f'), new-line ('\n'), carriage return ('\r'),
 * horizontal tab ('\t'), and vertical tab ('\v'). In the "C" locale,
 * isspace returns true only for the standard white-space characters.
 */
int isspace(int c){
    return (((c>='\t')&&(c<='\r')) || (c==' '));
}
