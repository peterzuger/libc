/**
 * @file   libc/include/stdint.h
 * @author Peter Züger
 * @date   28.01.2018
 * @note   part of the freestanding headers
 * @brief  Integer types
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
#ifndef __STDINT_H__
#define __STDINT_H__

#include <types/int128_t.h>
#include <types/uint128_t.h>

#include <types/int64_t.h>
#include <types/uint64_t.h>
#include <types/int_least64_t.h>
#include <types/uint_least64_t.h>
#include <types/int_fast64_t.h>
#include <types/uint_fast64_t.h>

#include <types/int32_t.h>
#include <types/uint32_t.h>
#include <types/int_least32_t.h>
#include <types/uint_least32_t.h>
#include <types/int_fast32_t.h>
#include <types/uint_fast32_t.h>

#include <types/int16_t.h>
#include <types/uint16_t.h>
#include <types/int_least16_t.h>
#include <types/uint_least16_t.h>
#include <types/int_fast16_t.h>
#include <types/uint_fast16_t.h>

#include <types/int8_t.h>
#include <types/uint8_t.h>
#include <types/int_least8_t.h>
#include <types/uint_least8_t.h>
#include <types/int_fast8_t.h>
#include <types/uint_fast8_t.h>

#include <types/intptr_t.h>
#include <types/uintptr_t.h>

#include <types/intmax_t.h>
#include <types/uintmax_t.h>

#endif /* __STDINT_H__ */
