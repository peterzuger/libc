/**
 * @file   limits.h
 * @author Peter Zueger
 * @date   28.01.2018
 * @note   part of the freestanding headers
 * @brief  implementation-defined constants
 */
#ifndef __LIMITS_H__
#define __LIMITS_H__

#define SCHAR_MAX  __SCHAR_MAX__
#define SHRT_MAX   __SHRT_MAX__
#define INT_MAX    __INT_MAX__
#define LONG_MAX   __LONG_MAX__
#define LLONG_MAX  __LONG_LONG_MAX__

#define SCHAR_MIN  (-__SCHAR_MAX__-1)
#define SHRT_MIN   (-__SHRT_MAX__ -1)
#define INT_MIN    (-__INT_MAX__  -1)
#define LONG_MIN   (-__LONG_MAX__ -1L)
#define LLONG_MIN  (-__LONG_LONG_MAX__-1LL)

#define UCHAR_MAX  ((__SCHAR_MAX__*2)  +1)
#define USHRT_MAX  ((__SHRT_MAX__ *2)  +1)
#define UINT_MAX   ((__INT_MAX__  *2U) +1U)
#define ULONG_MAX  ((__LONG_MAX__ *2UL)+1UL)
#define ULLONG_MAX (__LONG_LONG_MAX__*2ULL+1ULL)

#define CHAR_BIT   __CHAR_BIT__

#ifndef MB_LEN_MAX
#define MB_LEN_MAX 1
#endif /* MB_LEN_MAX */

#ifdef __CHAR_UNSIGNED__  /* -funsigned-char */
#define CHAR_MIN 0
#define CHAR_MAX UCHAR_MAX
#else
#define CHAR_MIN SCHAR_MIN
#define CHAR_MAX __SCHAR_MAX__
#endif /* __CHAR_UNSIGNED__ */

#endif /* __LIMITS_H__ */