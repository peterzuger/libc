/**
 * @file   libc/include/types/ldiv_t.h
 * @author Peter Züger
 * @date   13.07.2018
 * @brief  ldiv() result
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
#ifndef __TYPE_LDIV_T_H__
#define __TYPE_LDIV_T_H__

#if !defined(__LDIV_T_DEFINED__)
# define __LDIV_T_DEFINED__
typedef struct{
    long int quot;
    long int rem;
}ldiv_t;
#endif /* !defined(__LDIV_T_DEFINED__) */

#endif /* __TYPE_LDIV_T_H__ */
