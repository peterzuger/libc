/**
 * @file   libc/include/types/max_align_t.h
 * @author Peter Züger
 * @date   17.02.2018
 * @brief  maximum alignment integer type
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
#ifndef __TYPE_MAX_ALIGN_T_H__
#define __TYPE_MAX_ALIGN_T_H__

#if !defined(__MAX_ALIGN_T_DEFINED__)
# define __MAX_ALIGN_T_DEFINED__
typedef struct{
    long long   ll __attribute__((__aligned__(__alignof__(long long))));
    long double ld __attribute__((__aligned__(__alignof__(long double))));
}max_align_t;
#endif /* !defined(__MAX_ALIGN_T_DEFINED__) */

#endif /* __TYPE_MAX_ALIGN_T_H__ */
