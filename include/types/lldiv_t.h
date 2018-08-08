/**
 * @file   lldiv_t.h
 * @author Peter Zueger
 * @date   13.07.2018
 * @brief  lldiv() result
 */
#ifndef __TYPE_LLDIV_T_H__
#define __TYPE_LLDIV_T_H__

#if !defined(__LLDIV_T_DEFINED__)
# define __LLDIV_T_DEFINED__
typedef struct{
    long long int quot;
    long long int rem;
}lldiv_t;
#endif /* !defined(__LLDIV_T_DEFINED__) */

#endif /* __TYPE_LLDIV_T_H__ */
