/**
 * @file   imaxdiv_t.h
 * @author Peter Zueger
 * @date   22.07.2018
 * @brief  imaxdiv() result
 */
#ifndef __IMAXDIV_T_H__
#define __IMAXDIV_T_H__

#include <types/intmax_t.h>

#if !defined(__IMAXDIV_T_DEFINED__)
# define __IMAXDIV_T_DEFINED__
typedef struct{
    intmax_t quot;
    intmax_t rem;
}imaxdiv_t;
#endif /* !defined(__IMAXDIV_T_DEFINED__) */

#endif /* __IMAXDIV_T_H__ */
