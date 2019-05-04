/**
 * @file   types/uint_least32_t.h
 * @author Peter Züger
 * @date   08.04.2018
 * @brief  unsigned least 32 bit integer
 */
#ifndef __TYPE_UINT_LEAST32_T_H__
#define __TYPE_UINT_LEAST32_T_H__

#if defined(__UINT_LEAST32_TYPE__) || defined(DOXYGEN)
# if !defined(__UINT_LEAST32_T_DEFINED__)
#  define __UINT_LEAST32_T_DEFINED__
#  define UINT_LEAST32_MIN (0)
#  define UINT_LEAST32_MAX (__UINT_LEAST32_MAX__)
typedef __UINT_LEAST32_TYPE__ uint_least32_t;
# endif /* !defined(__UINT_LEAST32_T_DEFINED__) */
#endif /* defined(__UINT_LEAST32_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_UINT_LEAST32_T_H__ */
