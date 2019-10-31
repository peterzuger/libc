/**
 * @file   libc/include/macros/SIG_IGN.h
 * @author Peter Züger
 * @date   09.10.2019
 * @brief  ignore signal
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
#ifndef __MACROS_SIG_IGN_H__
#define __MACROS_SIG_IGN_H__

#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */


void __signal_handler_ignore(int);


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#define SIG_IGN (__signal_handler_ignore)

#endif /* __MACROS_SIG_IGN_H__ */
