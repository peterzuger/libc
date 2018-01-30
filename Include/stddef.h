/**
 * @file   stddef.h
 * @author Peter Zueger
 * @date   28.01.2018
 * @brief  standard definitions
 */
#ifndef __STDDEF_H__
#define __STDDEF_H__

#ifdef __PTRDIFF_TYPE__
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif /* __PTRDIFF_TYPE__ */

#ifdef __SIZE_TYPE__
typedef __SIZE_TYPE__ size_t;
typedef __SIZE_TYPE__ rsize_t;
#endif /* __SIZE_TYPE__ */

#ifdef __WCHAR_TYPE__
typedef __WCHAR_TYPE__ wchar_t;
#endif /* __WCHAR_TYPE__ */

#define NULL ((void*)0)
#if defined(__cplusplus)
# if defined(_NATIVE_NULLPTR_SUPPORTED)
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
# endif /* defined(_NATIVE_NULLPTR_SUPPORTED) */
#endif /* defined(__cplusplus) */

#define offsetof(t, d) __builtin_offsetof(t, d)

#endif /* __STDDEF_H__ */
