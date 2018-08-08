/**
 * @file   types/int8_t.h
 * @author Peter Zueger
 * @date   17.02.2018
 * @brief  signed 8 bit integer
 */
#ifndef __TYPE_INT8_T_H__
#define __TYPE_INT8_T_H__

#if defined(__INT8_TYPE__) || defined(DOXYGEN)
# if !defined(__INT8_T_DEFINED__)
#  define __INT8_T_DEFINED__
#  define INT8_MIN (-__INT8_MAX__-1)
#  define INT8_MAX (__INT8_MAX__)
typedef __INT8_TYPE__ int8_t;
# endif /* !defined(__INT8_T_DEFINED__) */
#endif /* defined(__INT8_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_INT8_T_H__ */
