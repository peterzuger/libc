/**
 * @file   uint32_t.h
 * @author Peter Zueger
 * @date   17.02.2018
 * @brief  unsigned 32 bit integer
 */
#ifndef __TYPE_UINT32_T_H__
#define __TYPE_UINT32_T_H__

#if defined(__UINT32_TYPE__) || defined(DOXYGEN)
# if !defined(__UINT32_T_DEFINED__)
#  define __UINT32_T_DEFINED__
#  define UINT32_MIN (0)
#  define UINT32_MAX (__UINT32_MAX__)
typedef __UINT32_TYPE__ uint32_t;
# endif /* !defined(__UINT32_T_DEFINED__) */
#endif /* defined(__UINT32_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_UINT32_T_H__ */
