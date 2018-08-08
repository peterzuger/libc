/**
 * @file   int32_t.h
 * @author Peter Zueger
 * @date   17.02.2018
 * @brief  signed 32 bit integer
 */
#ifndef __TYPE_INT32_T_H__
#define __TYPE_INT32_T_H__

#if defined(__INT32_TYPE__) || defined(DOXYGEN)
# if !defined(__INT32_T_DEFINED__)
#  define __INT32_T_DEFINED__
#  define INT32_MIN (-__INT32_MAX__-1)
#  define INT32_MAX (__INT32_MAX__)
typedef __INT32_TYPE__ int32_t;
# endif /* !defined(__INT32_T_DEFINED__) */
#endif /* defined(__INT32_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_INT32_T_H__ */
