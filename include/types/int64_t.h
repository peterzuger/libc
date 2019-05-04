/**
 * @file   types/int64_t.h
 * @author Peter Züger
 * @date   17.02.2018
 * @brief  signed 64 bit integer
 */
#ifndef __TYPE_INT64_T_H__
#define __TYPE_INT64_T_H__

#if defined(__INT64_TYPE__) || defined(DOXYGEN)
# if !defined(__INT64_T_DEFINED__)
#  define __INT64_T_DEFINED__
#  define INT64_MIN (-__INT64_MAX__-1)
#  define INT64_MAX (__INT64_MAX__)
#  define UINT64_C(c) __UINT64_C(c)
typedef __INT64_TYPE__ int64_t;
# endif /* !defined(__INT64_T_DEFINED__) */
#endif /* defined(__INT64_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_INT64_T_H__ */
