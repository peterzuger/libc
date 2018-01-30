/**
 * @file   stdint.h
 * @author Peter Zueger
 * @date   28.01.2018
 * @brief  standard integers
 */
#ifndef __STDINT_H__
#define __STDINT_H__

#ifdef __INT64_TYPE__
typedef __INT64_TYPE__ int64_t;
typedef __UINT64_TYPE__ uint64_t;
typedef __INT64_TYPE__ s64;
typedef __UINT64_TYPE__ u64;
#endif /* __INT64_TYPE__ */

#ifdef __INT32_TYPE__
typedef __INT32_TYPE__ int32_t;
typedef __UINT32_TYPE__ uint32_t;
typedef __INT32_TYPE__ s32;
typedef __UINT32_TYPE__ u32;
#endif /* __INT32_TYPE__ */

#ifdef __INT16_TYPE__
typedef __INT16_TYPE__ int16_t;
typedef __UINT16_TYPE__ uint16_t;
typedef __INT16_TYPE__ s16;
typedef __UINT16_TYPE__ u16;
#endif /* __INT16_TYPE__ */

#ifdef __INT8_TYPE__
typedef __INT8_TYPE__ int8_t;
typedef __UINT8_TYPE__ uint8_t;
typedef __INT8_TYPE__ s8;
typedef __UINT8_TYPE__ u8;
#endif /* __INT8_TYPE__ */

#ifdef __INTPTR_TYPE__
typedef __INTPTR_TYPE__ intptr_t;
#endif /* __INTPTR_TYPE__ */

#ifdef __UINTPTR_TYPE__
typedef __UINTPTR_TYPE__ uintptr_t;
#endif /* __UINTPTR_TYPE__ */

#ifdef __INTMAX_TYPE__
typedef __INTMAX_TYPE__  intmax_t;
typedef __UINTMAX_TYPE__ uintmax_t;
#endif /* __INTMAX_TYPE__ */


#ifdef __INT64_TYPE__
# define INT64_MAX           INT64_C( 9223372036854775807)
# define INT64_MIN         (-INT64_C( 9223372036854775807)-1)
# define UINT64_MAX         UINT64_C(18446744073709551615)
#endif /* __INT64_TYPE__ */

#ifdef __INT32_TYPE__
# define INT32_MAX           INT32_C(2147483647)
# define INT32_MIN         (-INT32_C(2147483647)-1)
# define UINT32_MAX         UINT32_C(4294967295)
#endif /* __INT32_TYPE__ */

#ifdef __INT16_TYPE__
#define INT16_MAX            INT16_C(32767)
#define INT16_MIN          (-INT16_C(32767)-1)
#define UINT16_MAX          UINT16_C(65535)
#endif /* __INT16_TYPE__ */

#ifdef __INT8_TYPE__
# define INT8_MAX            INT8_C(127)
# define INT8_MIN          (-INT8_C(127)-1)
# define UINT8_MAX          UINT8_C(255)
#endif /* __INT8_TYPE__ */

#endif /* __STDINT_H__ */
