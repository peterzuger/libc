/**
 * @file   types/div_t.h
 * @author Peter Züger
 * @date   13.07.2018
 * @brief  div() result
 */
#ifndef __TYPE_DIV_T_H__
#define __TYPE_DIV_T_H__

#if !defined(__DIV_T_DEFINED__)
# define __DIV_T_DEFINED__
typedef struct{
    int quot;
    int rem;
}div_t;
#endif /* !defined(__DIV_T_DEFINED__) */

#endif /* __TYPE_DIV_T_H__ */
