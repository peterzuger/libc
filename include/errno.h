/**
 * @file   libc/include/errno.h
 * @author Peter Züger
 * @date   07.02.2018
 * @brief  Errors
 *
 * This file is part of libc (https://gitlab.com/peterzuger/libc).
 * Copyright (c) 2019 Peter Züger.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __ERRNO_H__
#define __ERRNO_H__

#include <macros/errno.h>

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
#define E2BIG           40 /* Arg list too long */
#define EADDRINUSE      41 /* Address already in use */
#define EADDRNOTAVAIL   42 /* Can't assign requested address */
#define EAFNOSUPPORT    43 /* Address family not supported by protocol family */
#define EALREADY        44 /* Socket already connected */
#define EBADMSG         45 /* Bad message */
#define ECANCELED       46 /* Operation canceled */
#define ECHILD          47 /* No children */
#define ECONNABORTED    48 /* Software caused connection abort */
#define ECONNREFUSED    49 /* Connection refused */
#define ECONNRESET      50 /* Connection reset by peer */
#define EDEADLK         51 /* Deadlock */
#define EDESTADDRREQ    52 /* Destination address required */
#define EHOSTUNREACH    53 /* Host is unreachable */
#define EIDRM           54 /* Identifier removed */
#define EINPROGRESS     55 /* Connection already in progress */
#define EISCONN         56 /* Socket is already connected */
#define EMSGSIZE        57 /* Message too long */
#define ENETDOWN        58 /* Network interface is not configured */
#define ENETRESET       59 /* Network dropped connection because of reset */
#define ENETUNREACH     60 /* Network is unreachable */
#define ENOEXEC         61 /* Exec format error */
#define ENOLCK          62 /* No lock */
#define ENOPROTOOPT     63 /* Protocol not available */
#define ENOSR           64 /* No stream resources */
#define ENOSTR          65 /* Not a stream */
#define ENOTCONN        66 /* Socket is not connected */
#define ENOTRECOVERABLE 67 /* State not recoverable */
#define ENOTSOCK        68 /* Socket operation on non-socket */
#define ENOTSUP         69 /* Operation not supported on socket */
#define ENXIO           70 /* No such device or address */
#define EOPNOTSUPP      71 /* Operation not supported on socket */
#define EOVERFLOW       72 /* Value too large to be stored in data type */
#define EOWNERDEAD      73 /* Previous owner died */
#define EPIPE           74 /* Broken pipe */
#define EPROTO          75 /* Protocol error */
#define EPROTONOSUPPORT 76 /* Unknown protocol */
#define EPROTOTYPE      77 /* Protocol wrong type for socket */
#define ESRCH           78 /* No such process */
#define ETIMEDOUT       79 /* Connection timed out */
#define EWOULDBLOCK     80 /* Operation would block */

#endif /* __ERRNO_H___ */
