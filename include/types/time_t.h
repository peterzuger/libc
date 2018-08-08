/**
 * @file   time_t.h
 * @author Peter Zueger
 * @date   24.07.2018
 * @brief  unix time type
 */
#ifndef __TYPE_TIME_T_H__
#define __TYPE_TIME_T_H__

#if defined(__UINT32_TYPE__) || defined(DOXYGEN)
# if !defined(__TIME_T_DEFINED__)
#  define __TIME_T_DEFINED__
#  define TIME_MIN (0)
#  define TIME_MAX (__UINT32_MAX__)
typedef __UINT32_TYPE__ time_t;
# endif /* !defined(__TIME_T_DEFINED__) */
#endif /* defined(__UINT32_TYPE__) || defined(DOXYGEN) */

#endif /* __TYPE_TIME_T_H__ */
