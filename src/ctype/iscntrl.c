/**
 * @file   libc/src/ctype/iscntrl.c
 * @author Peter Züger
 * @date   09.08.2018
 * @brief  7.4.1.4 The iscntrl function
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
 * @brief control character classification
 *
 * The iscntrl function tests for any control character.
 */
int iscntrl(int c){
    return ((c<=0x1F) || (c==0x7F));
}
