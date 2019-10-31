/**
 * @file   libc/include/types/timespec.h
 * @author Peter Züger
 * @date   24.07.2018
 * @brief  time
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
#ifndef __TYPE_TIMESPEC_H__
#define __TYPE_TIMESPEC_H__

#include <types/time_t.h>

#if !defined(__STRUCT_TIMESPEC_DEFINED__)
# define __STRUCT_TIMESPEC_DEFINED__
struct timespec{
    time_t tv_sec;  // whole seconds - > 0
    long   tv_nsec; // nanoseconds - [0, 999999999]
};
#endif /* !defined(__STRUCT_TIMESPEC_DEFINED__) */

#endif /* __TYPE_TIMESPEC_H__ */
