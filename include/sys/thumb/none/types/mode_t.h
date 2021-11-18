/**
 * @file   libc/include/sys/thumb/none/types/mode_t.h
 * @author Peter Züger
 * @date   18.11.2021
 * @brief  _open() mode flag type
 *
 * This file is part of libc (https://gitlab.com/peterzuger/libc).
 * Copyright (c) 2021 Peter Züger.
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
#ifndef __SYS_THUMB_NONE_TYPE_MODE_T_H__
#define __SYS_THUMB_NONE_TYPE_MODE_T_H__

#if defined(__UINT32_TYPE__) || defined(DOXYGEN)
# if !defined(__MODE_T_DEFINED__)
#  define __MODE_T_DEFINED__

#  define O_ACCMODE   00000003
#  define O_RDONLY    00000000
#  define O_WRONLY    00000001
#  define O_RDWR      00000002
#  define O_CREAT     00000100
#  define O_EXCL      00000200
#  define O_NOCTTY    00000400
#  define O_TRUNC     00001000
#  define O_APPEND    00002000
#  define O_DIRECTORY 00200000

#  define __O_TMPFILE 020000000
#  define O_TMPFILE   (__O_TMPFILE | O_DIRECTORY)

typedef __UINT32_TYPE__ mode_t;
# endif /* !defined(__MODE_T_DEFINED__) */
#endif /* defined(__UINT32_TYPE__) || defined(DOXYGEN) */

#endif /* __SYS_THUMB_NONE_TYPE_MODE_T_H__ */
