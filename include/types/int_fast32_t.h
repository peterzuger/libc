/**
 * @file   int_fast32_t.h
 * @author Peter Zueger
 * @date   08.04.2018
 * @brief  signed fast 32 bit integer
 */
#ifndef __TYPE_INT_FAST32_T_H__
#define __TYPE_INT_FAST32_T_H__

#if defined(__INT_FAST32_TYPE__) || defined(DOXYGEN)
# if !defined(__INT_FAST32_T_DEFINED__)
#  define __INT_FAST32_T_DEFINED__
#  define INT_FAST32_MIN (-__INT_FAST32_MAX__-1)
#  define INT_FAST32_MAX (__INT_FAST32_MAX__)
typedef __INT_FAST32_TYPE__ int_fast32_t;
# endif /* !defined(__INT_FAST32_T_DEFINED__) */
#endif /* defined(__INT_FAST32_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_INT_FAST32_T_H__ */
