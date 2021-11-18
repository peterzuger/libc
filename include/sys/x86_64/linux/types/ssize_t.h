/**
 * @file   libc/include/sys/x86_64/linux/types/ssize_t.h
 * @author Peter Züger
 * @date   18.11.2021
 * @brief  signed size_t type
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
#ifndef __SYS_X86_64_LINUX_TYPE_SSIZE_T_H__
#define __SYS_X86_64_LINUX_TYPE_SSIZE_T_H__

#if !defined(__SSIZE_T_DEFINED__)
# define __SSIZE_T_DEFINED__
# define SSIZE_MAX (__LONG_MAX__)
typedef long ssize_t;
#endif /* !defined(__SSIZE_T_DEFINED__) */

#endif /* __SYS_X86_64_LINUX_TYPE_SSIZE_T_H__ */
