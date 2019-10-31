/**
 * @file   libc/src/ctype/isupper.c
 * @author Peter Züger
 * @date   09.08.2018
 * @brief  7.4.1.11 The isupper function
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
 * @brief uppercase character classification
 *
 * The isupper function tests for any character that is an uppercase letter or
 * is one of a locale-specific set of characters for which none of iscntrl,
 * isdigit, ispunct, or isspace is true. In the "C" locale, isupper returns
 * true only for the uppercase letters (as defined in 5.2.1).
 */
int isupper(int c){
    return ((c>='A')&&(c<='Z'));
}
