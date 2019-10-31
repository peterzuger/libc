/**
 * @file   libc/include/config.h
 * @author Peter Züger
 * @date   08.02.2018
 * @brief  library configuration
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
#ifndef __CONFIG_H__
#define __CONFIG_H__

/*
 * stdlib configuration
 */
//#define MALLOC_USE_BEST_FIT
#define MALLOC_USE_FIRST_FIT

#endif /* __CONFIG_H__ */
