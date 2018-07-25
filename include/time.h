/**
 * @file   time.h
 * @author Peter Zueger
 * @date   07.02.2018
 * @brief  time types
 */
#ifndef __TIME_H__
#define __TIME_H__

#include <types/size_t.h>
#include <types/clock_t.h>
#include <types/time_t.h>
#include <types/timespec.h>
#include <types/tm.h>

#include <macros/NULL.h>
#include <macros/CLOCKS_PER_SEC.h>
#include <macros/TIME_UTC.h>

#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */


// Time manipulation functions
clock_t clock(void);
double difftime(time_t time1, time_t time0);
time_t mktime(struct tm* timeptr);
time_t time(time_t* timer);
int timespec_get(struct timespec* ts, int base);


// Time conversion functions
char* asctime(const struct tm* timeptr);
char* ctime(const time_t* timer);
struct tm* gmtime(const time_t* timer);
struct tm* localtime(const time_t* timer);
size_t strftime(char* __restrict__ s, size_t maxsize,
                const char* __restrict__ format,
                const struct tm* __restrict__ timeptr);


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* __TIME_H___ */
