/**
 * @file   int_fast16_t.h
 * @author Peter Zueger
 * @date   08.04.2018
 * @brief  signed fast 16 bit integer
 */
#ifndef __TYPE_INT_FAST16_T_H__
#define __TYPE_INT_FAST16_T_H__

#if defined(__INT_FAST16_TYPE__) || defined(DOXYGEN)
# if !defined(__INT_FAST16_T_DEFINED__)
#  define __INT_FAST16_T_DEFINED__
#  define INT_FAST16_MIN (-__INT_FAST16_MAX__-1)
#  define INT_FAST16_MAX (__INT_FAST16_MAX__)
typedef __INT_FAST16_TYPE__ int_fast16_t;
# endif /* !defined(__INT_FAST16_T_DEFINED__) */
#endif /* defined(__INT_FAST16_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_INT_FAST16_T_H__ */
