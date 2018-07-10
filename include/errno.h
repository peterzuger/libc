/**
 * @file   errno.h
 * @author Peter Zueger
 * @date   07.02.2018
 * @brief  system error numbers
 */
#ifndef __ERRNO_H__
#define __ERRNO_H__

#if defined(__cplusplus)
extern "C"{
#endif /* defined(__cplusplus) */

extern int errno;

#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */


#define	EPERM		1  /* Operation not permitted */
#define	ENOENT		2  /* No such file or directory */
#define	EINTR		3  /* Interrupted system call */
#define	EIO		4  /* Input/output error */
#define	EBADF		5  /* Bad file descriptor */
#define	ENOMEM		6  /* Cannot allocate memory */
#define	EACCES		7  /* Permission denied */
#define	EFAULT		8  /* Bad address */
#define	ENOTBLK		9  /* Block device required */
#define	EBUSY		10 /* Device busy */
#define	EEXIST		11 /* File exists */
#define	EXDEV		12 /* Cross-device link */
#define	ENODEV		13 /* Operation not supported by device */
#define	ENOTDIR		14 /* Not a directory */
#define	EISDIR		15 /* Is a directory */
#define	EINVAL		16 /* Invalid argument */
#define	ENFILE		17 /* Too many open files in system */
#define	EMFILE		18 /* Too many open files */
#define	EFBIG		19 /* File too large */
#define	ENOSPC		20 /* No space left on device */
#define	ESPIPE		21 /* Illegal seek */
#define	EROFS		22 /* Read-only file system */
#define	EMLINK		23 /* Too many links */
#define EILSEQ          24 /* Illegal byte sequence */
#define	EDOM		25 /* Numerical argument out of domain */
#define	ERANGE		26 /* Result too large */
#define	EAGAIN		27 /* Resource temporarily unavailable */
#define	ELOOP		28 /* Too many levels of symbolic links */
#define	ENAMETOOLONG	29 /* File name too long */
#define	ENOTEMPTY	30 /* Directory not empty */
#define	ENOSYS		31 /* Function not implemented */
#define	EFTYPE		32 /* Inappropriate file type or format */
#define ENOBUFS         33 /* No buffer space available */

#endif /* __ERRNO_H___ */
