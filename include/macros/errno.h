/**
 * @file   include/macros/errno.h
 * @author Peter Züger
 * @date   13.05.2019
 * @brief  errno
 */
#ifndef __MACROS_ERRNO_H__
#define __MACROS_ERRNO_H__

#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */


int* __errno();


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#define errno (*__errno())

#endif /* __MACROS_ERRNO_H__ */
