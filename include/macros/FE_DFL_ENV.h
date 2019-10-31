/**
 * @file   libc/include/macros/FE_DFL_ENV.h
 * @author Peter Züger
 * @date   02.05.2019
 * @brief  Floatingpoint environment default
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
#ifndef __MACROS_FE_DFL_ENV_H__
#define __MACROS_FE_DFL_ENV_H__

#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */


extern fenv_t __fe_dfl_env;


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#define FE_DFL_ENV (__fe_dfl_env)

#endif /* __MACROS_FE_DFL_ENV_H__ */
