/**
 * @file   types/int_least8_t.h
 * @author Peter Züger
 * @date   08.04.2018
 * @brief  signed least 8 bit integer
 */
#ifndef __TYPE_INT_LEAST8_T_H__
#define __TYPE_INT_LEAST8_T_H__

#if defined(__INT_LEAST8_TYPE__) || defined(DOXYGEN)
# if !defined(__INT_LEAST8_T_DEFINED__)
#  define __INT_LEAST8_T_DEFINED__
#  define INT_LEAST8_MIN (-__INT_LEAST8_MAX__-1)
#  define INT_LEAST8_MAX (__INT_LEAST8_MAX__)
typedef __INT_LEAST8_TYPE__ int_least8_t;
# endif /* !defined(__INT_LEAST8_T_DEFINED__) */
#endif /* defined(__INT_LEAST8_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_INT_LEAST8_T_H__ */
