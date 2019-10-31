/**
 * @file   libc/include/types/lldiv_t.h
 * @author Peter Züger
 * @date   13.07.2018
 * @brief  lldiv() result
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
#ifndef __TYPE_LLDIV_T_H__
#define __TYPE_LLDIV_T_H__

#if !defined(__LLDIV_T_DEFINED__)
# define __LLDIV_T_DEFINED__
typedef struct{
    long long int quot;
    long long int rem;
}lldiv_t;
#endif /* !defined(__LLDIV_T_DEFINED__) */

#endif /* __TYPE_LLDIV_T_H__ */
