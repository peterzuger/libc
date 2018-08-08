/**
 * @file   types/uint8_t.h
 * @author Peter Zueger
 * @date   17.02.2018
 * @brief  unsigned 8 bit integer
 */
#ifndef __TYPE_UINT8_T_H__
#define __TYPE_UINT8_T_H__

#if defined(__UINT8_TYPE__) || defined(DOXYGEN)
# if !defined(__UINT8_T_DEFINED__)
#  define __UINT8_T_DEFINED__
#  define UINT8_MIN (0)
#  define UINT8_MAX (__UINT8_MAX__)
typedef __UINT8_TYPE__ uint8_t;
# endif /* !defined(__UINT8_T_DEFINED__) */
#endif /* defined(__UINT8_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_UINT8_T_H__ */
