/**
 * @file   timespec.h
 * @author Peter Zueger
 * @date   24.07.2018
 * @brief  time
 */
#ifndef __TIMESPEC_H__
#define __TIMESPEC_H__

#include <types/time_t.h>

#if !defined(__STRUCT_TIMESPEC_DEFINED__)
# define __STRUCT_TIMESPEC_DEFINED__
struct timespec{
    time_t tv_sec;  // whole seconds - > 0
    long   tv_nsec; // nanoseconds - [0, 999999999]
};
#endif /* !defined(__STRUCT_TIMESPEC_DEFINED__) */

#endif /* __TIMESPEC_H__ */
