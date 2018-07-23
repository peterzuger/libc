/**
 * @file   int_fast64_t.h
 * @author Peter Zueger
 * @date   08.04.2018
 * @brief  signed fast 64 bit integer
 */
#ifndef __INT_FAST64_T_H__
#define __INT_FAST64_T_H__

#if defined(__INT_FAST64_TYPE__) || defined(DOXYGEN)
# if !defined(__INT_FAST64_T_DEFINED__)
#  define __INT_FAST64_T_DEFINED__
#  define INT_FAST64_MIN (-__INT_FAST64_MAX__-1)
#  define INT_FAST64_MAX (__INT_FAST64_MAX__)
typedef __INT_FAST64_TYPE__ int_fast64_t;
# endif /* !defined(__INT_FAST64_T_DEFINED__) */
#endif /* defined(__INT_FAST64_TYPE__) || defined(DOXYGEN) */

#endif /* __INT_FAST64_T_H__ */
