/**
 * @file   libc/include/fenv.h
 * @author Peter Züger
 * @date   07.02.2018
 * @brief  Floating-point environment
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
#ifndef __FENV_H__
#define __FENV_H__

#include <types/fenv_t.h>
#include <types/fexcept_t.h>

#include <macros/FE_EXCEPT.h>
#include <macros/FE_DFL_ENV.h>
#include <macros/FE_ROUND.h>

#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */


// 7.6.2 Floating-point exceptions
int feclearexcept(int excepts);
int fegetexceptflag(fexcept_t *flagp,
                    int excepts);
int feraiseexcept(int excepts);
int fesetexceptflag(const fexcept_t *flagp,
                    int excepts);
int fetestexcept(int excepts);


// 7.6.3 Rounding
int fegetround(void);
int fesetround(int round);


// 7.6.4 Environment
int fegetenv(fenv_t *envp);
int feholdexcept(fenv_t *envp);
int fesetenv(const fenv_t *envp);
int feupdateenv(const fenv_t *envp);


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* __FENV_H___ */
