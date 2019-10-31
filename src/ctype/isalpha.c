/**
 * @file   libc/src/ctype/isalpha.c
 * @author Peter Züger
 * @date   09.08.2018
 * @brief  7.4.1.2 The isalpha function
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
 * @brief alphabetic character classification
 *
 * The isalpha function tests for any character for which isupper or islower
 * is true, or any character that is one of a locale-specific set of alphabetic
 * characters for which none of iscntrl, isdigit, ispunct, or isspace is true.
 * In the "C" locale, isalpha returns true only for the characters for
 * which isupper or islower is true.
 */
int isalpha(int c){
    return (isupper(c) || islower(c));
}
