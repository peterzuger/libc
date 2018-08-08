/**
 * @file   types/va_list.h
 * @author Peter Zueger
 * @date   05.02.2018
 * @brief  variable argument list
 */
#ifndef __TYPE_VA_LIST_H__
#define __TYPE_VA_LIST_H__

#if !defined(__VA_LIST_DEFINED__)
# define __VA_LIST_DEFINED__
typedef __builtin_va_list va_list;
#endif /* !defined(__VA_LIST_DEFINED__) */

#endif /* __TYPE_VA_LIST_H__ */
