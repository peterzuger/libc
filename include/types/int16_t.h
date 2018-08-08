/**
 * @file   types/int16_t.h
 * @author Peter Zueger
 * @date   17.02.2018
 * @brief  signed 16 bit integer
 */
#ifndef __TYPE_INT16_T_H__
#define __TYPE_INT16_T_H__

#if defined(__INT16_TYPE__) || defined(DOXYGEN)
# if !defined(__INT16_T_DEFINED__)
#  define __INT16_T_DEFINED__
#  define INT16_MIN (-__INT16_MAX__-1)
#  define INT16_MAX (__INT16_MAX__)
typedef __INT16_TYPE__ int16_t;
# endif /* !defined(__INT16_T_DEFINED__) */
#endif /* defined(__INT16_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_INT16_T_H__ */
