/**
 * @file   types/uint16_t.h
 * @author Peter Züger
 * @date   17.02.2018
 * @brief  unsigned 16 bit integer
 */
#ifndef __TYPE_UINT16_T_H__
#define __TYPE_UINT16_T_H__

#if defined(__UINT16_TYPE__) || defined(DOXYGEN)
# if !defined(__UINT16_T_DEFINED__)
#  define __UINT16_T_DEFINED__
#  define UINT16_MIN (0)
#  define UINT16_MAX (__UINT16_MAX__)
#  define UINT16_C(c) __UINT16_C(c)
typedef __UINT16_TYPE__ uint16_t;
# endif /* !defined(__UINT16_T_DEFINED__) */
#endif /* defined(__UINT16_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_UINT16_T_H__ */
