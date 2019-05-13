/**
 * @file   include/types/sig_atomic_t.h
 * @author Peter Züger
 * @date   24.07.2018
 * @brief  atomic accessible type
 */
#ifndef __TYPE_SIG_ATOMIC_T_H__
#define __TYPE_SIG_ATOMIC_T_H__

#if defined(__UINT32_TYPE__) || defined(DOXYGEN)
# if !defined(__SIG_ATOMIC_T_DEFINED__)
#  define __SIG_ATOMIC_T_DEFINED__
#  define SIG_ATOMIC_T_MIN (0)
#  define SIG_ATOMIC_T_MAX (__UINT32_MAX__)
typedef __UINT32_TYPE__ sig_atomic_t;
# endif /* !defined(__SIG_ATOMIC_T_DEFINED__) */
#endif /* defined(__UINT32_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_SIG_ATOMIC_T_H__ */
