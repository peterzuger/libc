/**
 * @file   include/stdarg.h
 * @author Peter Züger
 * @date   28.01.2018
 * @note   part of the freestanding headers
 * @brief  Variable arguments
 */
#ifndef __STDARG_H__
#define __STDARG_H__

#include <types/va_list.h>

#define va_start(ap,param) __builtin_va_start(ap,param)
#define va_end(ap)         __builtin_va_end(ap)
#define va_arg(ap,type)    __builtin_va_arg(ap,type)
#define va_copy(d,s)       __builtin_va_copy(d,s)

#endif /* __STDARG_H__ */
