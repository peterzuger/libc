/**
 * @file   int_least32_t.h
 * @author Peter Zueger
 * @date   08.04.2018
 * @brief  signed least 32 bit integer
 */
#ifndef __INT_LEAST32_T_H__
#define __INT_LEAST32_T_H__

#if defined(__INT_LEAST32_TYPE__) || defined(DOXYGEN)
# if !defined(__INT_LEAST32_T_DEFINED__)
#  define __INT_LEAST32_T_DEFINED__
#  define INT_LEAST32_MIN (-__INT_LEAST32_MAX__-1)
#  define INT_LEAST32_MAX (__INT_LEAST32_MAX__)
typedef __INT_LEAST32_TYPE__ int_least32_t;
# endif /* !defined(__INT_LEAST32_T_DEFINED__) */
#endif /* defined(__INT_LEAST32_TYPE__) || defined(DOXYGEN) */

#endif /* __INT_LEAST32_T_H__ */
