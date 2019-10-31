/**
 * @file   libc/include/ctype.h
 * @author Peter Züger
 * @date   07.02.2018
 * @brief  Character handling
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
#ifndef __CTYPE_H__
#define __CTYPE_H__

#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */


// 7.4.1 Character classification functions
int isalnum(int c);
int isalpha(int c);
int isblank(int c);
int iscntrl(int c);
int isdigit(int c);
int isgraph(int c);
int islower(int c);
int isprint(int c);
int ispunct(int c);
int isspace(int c);
int isupper(int c);
int isxdigit(int c);


// 7.4.2 Character case mapping functions
int tolower(int c);
int toupper(int c);


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* __CTYPE_H___ */
