/**
 * @file   libc/include/wctype.h
 * @author Peter Züger
 * @date   07.02.2018
 * @brief  Wide character classification and mapping utilities
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
#ifndef __WCTYPE_H__
#define __WCTYPE_H__

#include <types/wint_t.h>
#include <types/wctrans_t.h>
#include <types/wctype_t.h>

#include <macros/WEOF.h>

#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */


// 7.30.2 Wide character classification utilities
// 7.30.2.1 Wide character classification functions
int iswalnum(wint_t wc);
int iswalpha(wint_t wc);
int iswblank(wint_t wc);
int iswcntrl(wint_t wc);
int iswdigit(wint_t wc);
int iswgraph(wint_t wc);
int iswlower(wint_t wc);
int iswprint(wint_t wc);
int iswpunct(wint_t wc);
int iswspace(wint_t wc);
int iswupper(wint_t wc);
int iswxdigit(wint_t wc);


// 7.30.2.2 Extensible wide character classification functions
int iswctype(wint_t wc, wctype_t desc);
wctype_t wctype(const char *property);


// 7.30.3 Wide character case mapping utilities
// 7.30.3.1 Wide character case mapping functions
wint_t towlower(wint_t wc);
wint_t towupper(wint_t wc);


// 7.30.3.2 Extensible wide character case mapping functions
wint_t towctrans(wint_t wc, wctrans_t desc);
wctrans_t wctrans(const char *property);


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* __WCTYPE_H___ */
