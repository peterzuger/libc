/**
 * @file   libc/include/float.h
 * @author Peter Züger
 * @date   28.01.2018
 * @note   part of the freestanding headers
 * @brief  Characteristics of floating types
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
#ifndef __FLOAT_H__
#define __FLOAT_H__

/**
 * The rounding mode for floating-point addition
 *     -1 indeterminable
 *      0 toward zero
 *      1 to nearest
 *      2 toward positive infinity
 *      3 toward negative infinity
 * Evaluation of FLT_ROUNDS correctly reflects any execution-time
 * change of rounding mode through the function fesetround in <fenv.h>.
 */
#define FLT_ROUNDS            (__builtin_flt_rounds())

/**
 * The floating-point expression evaluation method.
 *     -1 indeterminable
 *      0 evaluate all operations and constants just to the range and
 *        precision of the type
 *      1 evaluate operations and constants of type float and double to the
 *        range and precision of the double type, evaluate long double
 *        operations and constants to the range and precision of the
 *        long double type
 *      2 evaluate all operations and constants to the range and
 *        precision of the long double type
 *     -* implementation-defined behavior
 */
#define FLT_EVAL_METHOD       __FLT_EVAL_METHOD__

/**
 * The presence or absence of subnormal numbers
 *     -1 indeterminable
 *      0 absent (type does not support subnormal numbers)
 *      1 present (type does support subnormal numbers)
 */
#define FLT_HAS_SUBNORM       __FLT_HAS_DENORM__
#define DBL_HAS_SUBNORM       __DBL_HAS_DENORM__
#define LDBL_HAS_SUBNORM      __LDBL_HAS_DENORM__

/**
 * radix of exponent representation, b
 */
#define FLT_RADIX             __FLT_RADIX__

/**
 * number of base-FLT_RADIX digits in the floating-point significand, p
 */
#define FLT_MANT_DIG          __FLT_MANT_DIG__
#define DBL_MANT_DIG          __DBL_MANT_DIG__
#define LDBL_MANT_DIG         __LDBL_MANT_DIG__

/**
 * number of decimal digits, n, such that any floating-point number
 * with p radix b digits can be rounded to a floating-point number
 * with n decimal digits and back again without change to the value,
 *     p * log10(b)           if b is a power of 10
 *     1 + p * log10(b)     otherwise
 */
#define FLT_DECIMAL_DIG       __FLT_DECIMAL_DIG__
#define DBL_DECIMAL_DIG       __DBL_DECIMAL_DIG__
#define LDBL_DECIMAL_DIG      __DECIMAL_DIG__

/**
 * number of decimal digits, n, such that any floating-point number
 * in the widest supported floating type with pmax radix b digits
 * can be rounded to a floating-point number with n decimal digits
 * and back again without change to the value,
 *     pmax * log10(b)        if b is a power of 10
 *     1 + pmax * log10 b)  otherwise
 */
#define DECIMAL_DIG           __DECIMAL_DIG__

/**
 * number of decimal digits, q, such that any floating-point number with
 * q decimal digits can be rounded into a floating-point number with
 * p radix b digits and back again without change to the q decimal digits,
 *     p * log10(b)           if b is a power of 10
 *     ( p - 1) * log10(b)  otherwise
 */
#define FLT_DIG               __FLT_DIG__
#define DBL_DIG               __DBL_DIG__
#define LDBL_DIG              __LDBL_DIG__

/**
 * minimum negative integer such that FLT_RADIX raised to one less than
 * that power is a normalized floating-point number,
 *     emin
 */
#define FLT_MIN_EXP           __FLT_MIN_EXP__
#define DBL_MIN_EXP           __DBL_MIN_EXP__
#define LDBL_MIN_EXP          __LDBL_MIN_EXP__

/**
 * minimum negative integer such that 10 raised to that power is in
 * the range of normalized floating-point numbers,
 *     log10(b^(emin-1))
 */
#define FLT_MIN_10_EXP        __FLT_MIN_10_EXP__
#define DBL_MIN_10_EXP        __DBL_MIN_10_EXP__
#define LDBL_MIN_10_EXP       __LDBL_MIN_10_EXP__

/**
 * maximum integer such that FLT_RADIX raised to one less than that
 * power is a representable finite floating-point number,
 *     emax
 */
#define FLT_MAX_EXP           __FLT_MAX_EXP__
#define DBL_MAX_EXP           __DBL_MAX_EXP__
#define LDBL_MAX_EXP          __LDBL_MAX_EXP__

/**
 * maximum integer such that 10 raised to that power is in the
 * range of representable finite floating-point numbers,
 *     log10((1 - b^-p)b^emax)
 */
#define FLT_MAX_10_EXP        __FLT_MAX_10_EXP__
#define DBL_MAX_10_EXP        __DBL_MAX_10_EXP__
#define LDBL_MAX_10_EXP       __LDBL_MAX_10_EXP__

/**
 * maximum representable finite floating-point number,
 *     (1 - b^-p)b^emax
 */
#define FLT_MAX               __FLT_MAX__
#define DBL_MAX               __DBL_MAX__
#define LDBL_MAX              __LDBL_MAX__

/**
 * he difference between 1 and the least value greater than
 * 1 that is representable in the given floating point type,
 *     b^(1-p)
 */
#define FLT_EPSILON           __FLT_EPSILON__
#define DBL_EPSILON           __DBL_EPSILON__
#define LDBL_EPSILON          __LDBL_EPSILON__

/**
 * minimum normalized positive floating-point number,
 *     b^(emin-1)
 */
#define FLT_MIN               __FLT_MIN__
#define DBL_MIN               __DBL_MIN__
#define LDBL_MIN              __LDBL_MIN__

/**
 * minimum positive floating-point number
 */
#if __FLT_HAS_DENORM__
# define FLT_TRUE_MIN         __FLT_DENORM_MIN__
#else
# define FLT_TRUE_MIN         __FLT_MIN__
#endif

#if __DBL_HAS_DENORM__
# define DBL_TRUE_MIN         __DBL_DENORM_MIN__
#else
# define DBL_TRUE_MIN         __DBL_MIN__
#endif

#if __LDBL_HAS_DENORM__
# define LDBL_TRUE_MIN        __LDBL_DENORM_MIN__
#else
# define LDBL_TRUE_MIN        __LDBL_MIN__
#endif

#endif /* __FLOAT_H__ */
