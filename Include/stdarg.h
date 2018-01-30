/**
 * @file   stdarg.h
 * @author Peter Zueger
 * @date   28.01.2018
 * @brief  standard argument
 */
#ifndef __STDARG_H__
#define __STDARG_H__

#ifndef _VA_LIST
#define _VA_LIST
typedef __builtin_va_list va_list;

#define va_start(ap,param) __builtin_va_start(ap,param)
#define va_end(ap)         __builtin_va_end(ap)
#define va_arg(ap,type)    __builtin_va_arg(ap,type)
#define va_copy(d,s)       __builtin_va_copy(d,s)

#endif /* _VA_LIST */

#endif /* __STDARG_H__ */
