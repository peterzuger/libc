/**
 * @file   uint64_t.h
 * @author Peter Zueger
 * @date   17.02.2018
 * @brief  unsigned 64 bit integer
 */
#ifndef __UINT64_T_H__
#define __UINT64_T_H__

#if defined(__UINT64_TYPE__) || defined(DOXYGEN)
# if !defined(__UINT64_T_DEFINED__)
#  define __UINT64_T_DEFINED__
#  define UINT64_MIN (0)
#  define UINT64_MAX (__UINT64_MAX__)
typedef __UINT64_TYPE__ uint64_t;
# endif /* !defined(__UINT64_T_DEFINED__) */
#endif /* defined(__UINT64_TYPE__) || defined(DOXYGEN) */

#endif /* __UINT64_T_H__ */
