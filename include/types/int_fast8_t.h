/**
 * @file   types/int_fast8_t.h
 * @author Peter Zueger
 * @date   08.04.2018
 * @brief  signed fast 8 bit integer
 */
#ifndef __TYPE_INT_FAST8_T_H__
#define __TYPE_INT_FAST8_T_H__

#if defined(__INT_FAST8_TYPE__) || defined(DOXYGEN)
# if !defined(__INT_FAST8_T_DEFINED__)
#  define __INT_FAST8_T_DEFINED__
#  define INT_FAST8_MIN (-__INT_FAST8_MAX__-1)
#  define INT_FAST8_MAX (__INT_FAST8_MAX__)
typedef __INT_FAST8_TYPE__ int_fast8_t;
# endif /* !defined(__INT_FAST8_T_DEFINED__) */
#endif /* defined(__INT_FAST8_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_INT_FAST8_T_H__ */
