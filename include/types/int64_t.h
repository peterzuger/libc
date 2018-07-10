/**
 * @file   int64_t.h
 * @author Peter Zueger
 * @date   17.02.2018
 * @brief  signed 64 bit integer
 */
#ifndef __INT64_T_H__
#define __INT64_T_H__

#if defined(__INT64_TYPE__) || defined(DOXYGEN)
# if !defined(__INT64_T_DEFINED__)
#  define __INT64_T_DEFINED__
#  define INT64_MIN (-__INT64_MAX__-1)
#  define INT64_MAX (__INT64_MAX__)
typedef __INT64_TYPE__ int64_t;
# endif /* !defined(__INT64_T_DEFINED__) */
#endif /* defined(__INT64_TYPE__) || defined(DOXYGEN) */

#endif /* __INT64_T_H__ */
