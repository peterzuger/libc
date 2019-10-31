/**
 * @file   libc/include/types/sig_atomic_t.h
 * @author Peter Züger
 * @date   24.07.2018
 * @brief  atomic accessible type
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
#ifndef __TYPE_SIG_ATOMIC_T_H__
#define __TYPE_SIG_ATOMIC_T_H__

#if defined(__UINT32_TYPE__) || defined(DOXYGEN)
# if !defined(__SIG_ATOMIC_T_DEFINED__)
#  define __SIG_ATOMIC_T_DEFINED__
#  define SIG_ATOMIC_T_MIN (0)
#  define SIG_ATOMIC_T_MAX (__UINT32_MAX__)
typedef __UINT32_TYPE__ sig_atomic_t;
# endif /* !defined(__SIG_ATOMIC_T_DEFINED__) */
#endif /* defined(__UINT32_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_SIG_ATOMIC_T_H__ */
