/**
 * @file   include/stddef.h
 * @author Peter Züger
 * @date   28.01.2018
 * @note   part of the freestanding headers
 * @brief  Common definitions
 */
#ifndef __STDDEF_H__
#define __STDDEF_H__

#include <types/ptrdiff_t.h>
#include <types/size_t.h>
#include <types/max_align_t.h>
#include <types/wchar_t.h>

#include <macros/NULL.h>

#define offsetof(t, d) __builtin_offsetof(t, d)

#endif /* __STDDEF_H__ */
