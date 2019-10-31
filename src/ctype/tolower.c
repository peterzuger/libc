/**
 * @file   libc/src/ctype/tolower.c
 * @author Peter Züger
 * @date   09.08.2018
 * @brief  7.4.2.1 The tolower function
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
 * @brief Character case mapping upper to lower
 *
 * The tolower function converts an uppercase letter
 * to a corresponding lowercase letter.
 *
 * @return If the argument is a character for which isupper is true and there
 *         are one or more corresponding characters, as specified by the current
 *         locale, for which islower is true, the tolower function returns one
 *         of the corresponding characters (always the same one for any given
 *         locale); otherwise, the argument is returned unchanged.
 */
int tolower(int c){
    return isupper(c)?(c+32):c;
}
