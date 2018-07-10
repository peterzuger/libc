/**
 * @file   max_align_t.h
 * @author Peter Zueger
 * @date   17.02.2018
 * @brief  maximum alignment integer type
 */
#ifndef __MAX_ALIGN_T_H__
#define __MAX_ALIGN_T_H__

#if !defined(__MAX_ALIGN_T_DEFINED__)
# define __MAX_ALIGN_T_DEFINED__
typedef struct{
    long long   ll __attribute__((__aligned__(__alignof__(long long))));
    long double ld __attribute__((__aligned__(__alignof__(long double))));
}max_align_t;
#endif /* !defined(__MAX_ALIGN_T_DEFINED__) */

#endif /* __MAX_ALIGN_T_H__ */
