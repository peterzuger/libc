/**
 * @file   include/types/uint_fast8_t.h
 * @author Peter Züger
 * @date   08.04.2018
 * @brief  unsigned fast 8 bit integer
 */
#ifndef __TYPE_UINT_FAST8_T_H__
#define __TYPE_UINT_FAST8_T_H__

#if defined(__UINT_FAST8_TYPE__) || defined(DOXYGEN)
# if !defined(__UINT_FAST8_T_DEFINED__)
#  define __UINT_FAST8_T_DEFINED__
#  define UINT_FAST8_MIN (0)
#  define UINT_FAST8_MAX (__UINT_FAST8_MAX__)
typedef __UINT_FAST8_TYPE__ uint_fast8_t;
# endif /* !defined(__UINT_FAST8_T_DEFINED__) */
#endif /* defined(__UINT_FAST8_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_UINT_FAST8_T_H__ */
