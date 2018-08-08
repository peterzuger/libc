/**
 * @file   NAN.h
 * @author Peter Zueger
 * @date   22.07.2018
 * @brief  float representing a quiet NaN
 */
#ifndef __MACRO_NAN_H__
#define __MACRO_NAN_H__

#define NAN  (__builtin_nanf (""))

#endif /* __MACRO_NAN_H__ */
