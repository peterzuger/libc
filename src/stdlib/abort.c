/**
 * @file   libc/src/stdlib/abort.c
 * @author Peter Züger
 * @date   16.07.2018
 * @brief  7.22.4.1 The abort function implementation
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
#include <signal.h>
#include <stdlib.h>
#include <stdnoreturn.h>

/**
 * causes abnormal program termination to occur
 */
_Noreturn void abort(){
    raise(SIGABRT);
    _Exit(EXIT_FAILURE);
    __builtin_unreachable();
}
