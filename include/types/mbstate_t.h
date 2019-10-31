/**
 * @file   libc/include/types/mbstate.h
 * @author Peter Züger
 * @date   24.07.2018
 * @brief  multi byte character state
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
#ifndef __TYPE_MBSTATE_T_H__
#define __TYPE_MBSTATE_T_H__

#if !defined(__MBSTATE_T_DEFINED__)
# define __MBSTATE_T_DEFINED__
typedef struct{
    char MISSING;
}mbstate_t;
#endif /* !defined(__MBSTATE_T_DEFINED__) */

#endif /* __TYPE_MBSTATE_T_H__ */
