/**
 * @file   libc/include/types/tm.h
 * @author Peter Züger
 * @date   24.07.2018
 * @brief  time structure
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
#ifndef __TYPE_TM_H__
#define __TYPE_TM_H__

#if !defined(__STRUCT_TM_DEFINED__)
# define __STRUCT_TM_DEFINED__
struct tm{
    int tm_sec;     // seconds after the minute - [0, 60]
    int tm_min;     // minutes after the hour - [0, 59]
    int tm_hour;    // hours since midnight - [0, 23]
    int tm_mday;    // day of the month - [1, 31]
    int tm_mon;     // months since January - [0, 11]
    int tm_year;    // years since 1900
    int tm_wday;    // days since Sunday - [0, 6]
    int tm_yday;    // days since January 1 - [0, 365]
    int tm_isdst;   // Daylight Saving Time flag
};
#endif /* !defined(__STRUCT_TM_DEFINED__) */

#endif /* __TYPE_TM_H__ */
