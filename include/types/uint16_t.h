/**
 * @file   uint16_t.h
 * @author Peter Zueger
 * @date   17.02.2018
 * @brief  unsigned 16 bit integer
 */
#ifndef __UINT16_T_H__
#define __UINT16_T_H__

#if defined(__UINT16_TYPE__) || defined(DOXYGEN)
# if !defined(__UINT16_T_DEFINED__)
#  define __UINT16_T_DEFINED__
#  define UINT16_MIN (0)
#  define UINT16_MAX (__UINT16_MAX__)
typedef __UINT16_TYPE__ uint16_t;
# endif /* !defined(__UINT16_T_DEFINED__) */
#endif /* defined(__UINT16_TYPE__) || defined(DOXYGEN) */

#endif /* __UINT16_T_H__ */
