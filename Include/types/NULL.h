/**
 * @file   NULL.h
 * @author Peter Zueger
 * @date   06.02.2018
 * @brief  Null pointer
 */
#ifndef __NULL_H__
#define __NULL_H__

#define NULL ((void*)0)

#if defined(__cplusplus)
# if defined(_NATIVE_NULLPTR_SUPPORTED)
namespace std {
    typedef decltype(nullptr) nullptr_t;
}
using ::std::nullptr_t;
# endif /* defined(_NATIVE_NULLPTR_SUPPORTED) */
#endif /* defined(__cplusplus) */

#endif /* __NULL_H__ */
