/**
 * @file   libc/include/locale.h
 * @author Peter Züger
 * @date   07.02.2018
 * @brief  Localization
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
#ifndef __LOCALE_H__
#define __LOCALE_H__

#include <types/lconv.h>

#include <macros/NULL.h>
#include <macros/LC.h>

#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */


// 7.11.1 Locale control
char* setlocale(int category, const char* locale);


// 7.11.2 Numeric formatting convention inquiry
struct lconv* localeconv(void);


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* __LOCALE_H___ */
