/**
 * @file   ldiv_t.h
 * @author Peter Zueger
 * @date   13.07.2018
 * @brief  ldiv() result
 */
#ifndef __LDIV_T_H__
#define __LDIV_T_H__

#if !defined(__LDIV_T_DEFINED__)
# define __LDIV_T_DEFINED__
typedef struct{
    long int quot;
    long int rem;
}ldiv_t;
#endif /* !defined(__LDIV_T_DEFINED__) */

#endif /* __LDIV_T_H__ */
