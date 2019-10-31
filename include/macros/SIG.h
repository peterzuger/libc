/**
 * @file   libc/include/macros/SIG.h
 * @author Peter Züger
 * @date   09.10.2019
 * @brief  signals
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
#ifndef __MACROS_SIG_H__
#define __MACROS_SIG_H__

#define SIGABRT  (0) /* abnormal termination,                             */
                     /* such as is initiated by the abort function        */
#define SIGFPE   (1) /* an erroneous arithmetic operation, such as        */
                     /* zero divide or an operation resulting in overflow */
#define SIGILL   (2) /* detection of an invalid function image,           */
                     /* such as an invalid instruction                    */
#define SIGINT   (3) /* receipt of an interactive attention signal        */
#define SIGSEGV  (4) /* an invalid access to storage                      */
#define SIGTERM  (5) /* a termination request sent to the program         */

#endif /* __MACROS_SIG_H__ */
