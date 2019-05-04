/**
 * @file   types/wint_t.h
 * @author Peter Züger
 * @date   24.07.2018
 * @brief  wide integer type
 */
#ifndef __TYPE_WINT_T_H__
#define __TYPE_WINT_T_H__

#if defined(__WINT_TYPE__) || defined(DOXYGEN)
# if !defined(__WINT_T_DEFINED__)
#  define __WINT_T_DEFINED__
#  define WINT_MIN (-__WINT_MAX__-1)
#  define WINT_MAX (__WINT_MAX__)
typedef __WINT_TYPE__ wint_t;
# endif /* !defined(__WINT_T_DEFINED__) */
#endif /* defined(__WINT_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_WINT_T_H__ */
