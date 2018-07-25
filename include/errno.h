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

#define EPERM           1  /* Operation not permitted */
#define ENOENT          2  /* No such file or directory */
#define EINTR           3  /* Interrupted system call */
#define EIO             4  /* Input/output error */
#define EBADF           5  /* Bad file descriptor */
#define ENOMEM          6  /* Cannot allocate memory */
#define EACCES          7  /* Permission denied */
#define EFAULT          8  /* Bad address */
#define ENOTBLK         9  /* Block device required */
#define EBUSY           10 /* Device busy */
#define EEXIST          11 /* File exists */
#define EXDEV           12 /* Cross-device link */
#define ENODEV          13 /* Operation not supported by device */
#define ENOTDIR         14 /* Not a directory */
#define EISDIR          15 /* Is a directory */
#define EINVAL          16 /* Invalid argument */
#define ENFILE          17 /* Too many open files in system */
#define EMFILE          18 /* Too many open files */
#define ENOTTY          19 /* Not a typewriter */
#define ETXTBSY         20 /* Text file busy */
#define EFBIG           21 /* File too large */
#define ENOSPC          22 /* No space left on device */
#define ESPIPE          23 /* Illegal seek */
#define EROFS           24 /* Read-only file system */
#define EMLINK          25 /* Too many links */
#define EILSEQ          26 /* Illegal byte sequence */
#define EDOM            27 /* Numerical argument out of domain */
#define ERANGE          28 /* Result too large */
#define ENODATA         29 /* No data (for no delay io) */
#define ETIME           30 /* Timer expired */
#define ENOLINK         31 /* The link has been severed */
#define EAGAIN          32 /* Resource temporarily unavailable */
#define ELOOP           33 /* Too many levels of symbolic links */
#define ENAMETOOLONG    34 /* File name too long */
#define ENOTEMPTY       35 /* Directory not empty */
#define ENOSYS          36 /* Function not implemented */
#define EFTYPE          37 /* Inappropriate file type or format */
#define ENOBUFS         38 /* No buffer space available */
#define ENOMSG          39 /* No message of desired type */

#endif /* __ERRNO_H___ */
