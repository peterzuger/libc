/**
 * @file   libc/src/string/strerror.c
 * @author Peter Züger
 * @date   25.07.2018
 * @brief  7.24.6.2 The strerror function
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
#include <string.h>
#include <errno.h>

char* strerror(int errnum){
    char* s;

    switch(errnum){
    case 0               : s = "No errors";                               break;
    case EPERM           : s = "Operation not permitted";                 break;
    case ENOENT          : s = "No such file or directory";               break;
    case EINTR           : s = "Interrupted system call";                 break;
    case EIO             : s = "Input/output error";                      break;
    case EBADF           : s = "Bad file descriptor";                     break;
    case ENOMEM          : s = "Cannot allocate memory";                  break;
    case EACCES          : s = "Permission denied";                       break;
    case EFAULT          : s = "Bad address";                             break;
    case ENOTBLK         : s = "Block device required";                   break;
    case EBUSY           : s = "Device busy";                             break;
    case EEXIST          : s = "File exists";                             break;
    case EXDEV           : s = "Cross-device link";                       break;
    case ENODEV          : s = "Operation not supported by device";       break;
    case ENOTDIR         : s = "Not a directory";                         break;
    case EISDIR          : s = "Is a directory";                          break;
    case EINVAL          : s = "Invalid argument";                        break;
    case ENFILE          : s = "Too many open files in system";           break;
    case EMFILE          : s = "Too many open files";                     break;
    case ENOTTY          : s = "Not a typewriter";                        break;
    case ETXTBSY         : s = "Text file busy";                          break;
    case EFBIG           : s = "File too large";                          break;
    case ENOSPC          : s = "No space left on device";                 break;
    case ESPIPE          : s = "Illegal seek";                            break;
    case EROFS           : s = "Read-only file system";                   break;
    case EMLINK          : s = "Too many links";                          break;
    case EILSEQ          : s = "Illegal byte sequence";                   break;
    case EDOM            : s = "Numerical argument out of domain";        break;
    case ERANGE          : s = "Result too large";                        break;
    case ENODATA         : s = "No data (for no delay io)";               break;
    case ETIME           : s = "Timer expired";                           break;
    case ENOLINK         : s = "The link has been severed";               break;
    case EAGAIN          : s = "Resource temporarily unavailable";        break;
    case ELOOP           : s = "Too many levels of symbolic links";       break;
    case ENAMETOOLONG    : s = "File name too long";                      break;
    case ENOTEMPTY       : s = "Directory not empty";                     break;
    case ENOSYS          : s = "Function not implemented";                break;
    case EFTYPE          : s = "Inappropriate file type or format";       break;
    case ENOBUFS         : s = "No buffer space available";               break;
    case ENOMSG          : s = "No message of desired type";              break;
    case E2BIG           : s = "Arg list too long";                       break;
    case EADDRINUSE      : s = "Address already in use";                  break;
    case EADDRNOTAVAIL   : s = "Can't assign requested address";          break;
    case EAFNOSUPPORT    : s = "Address family not supported by protocol family";break;
    case EALREADY        : s = "Socket already connected";                break;
    case EBADMSG         : s = "Bad message";                             break;
    case ECANCELED       : s = "Operation canceled";                      break;
    case ECHILD          : s = "No children";                             break;
    case ECONNABORTED    : s = "Software caused connection abort";        break;
    case ECONNREFUSED    : s = "Connection refused";                      break;
    case ECONNRESET      : s = "Connection reset by peer";                break;
    case EDEADLK         : s = "Deadlock";                                break;
    case EDESTADDRREQ    : s = "Destination address required";            break;
    case EHOSTUNREACH    : s = "Host is unreachable";                     break;
    case EIDRM           : s = "Identifier removed";                      break;
    case EINPROGRESS     : s = "Connection already in progress";          break;
    case EISCONN         : s = "Socket is already connected";             break;
    case EMSGSIZE        : s = "Message too long";                        break;
    case ENETDOWN        : s = "Network interface is not configured";     break;
    case ENETRESET       : s = "Network dropped connection because of reset";break;
    case ENETUNREACH     : s = "Network is unreachable";                  break;
    case ENOEXEC         : s = "Exec format error";                       break;
    case ENOLCK          : s = "No lock";                                 break;
    case ENOPROTOOPT     : s = "Protocol not available";                  break;
    case ENOSR           : s = "No stream resources";                     break;
    case ENOSTR          : s = "Not a stream";                            break;
    case ENOTCONN        : s = "Socket is not connected";                 break;
    case ENOTRECOVERABLE : s = "State not recoverable";                   break;
    case ENOTSOCK        : s = "Socket operation on non-socket";          break;
    case ENOTSUP         : s = "Operation not supported on socket";       break;
    case ENXIO           : s = "No such device or address";               break;
    case EOPNOTSUPP      : s = "Operation not supported on socket";       break;
    case EOVERFLOW       : s = "Value too large to be stored in data type";break;
    case EOWNERDEAD      : s = "Previous owner died";                     break;
    case EPIPE           : s = "Broken pipe";                             break;
    case EPROTO          : s = "Protocol error";                          break;
    case EPROTONOSUPPORT : s = "Unknown protocol";                        break;
    case EPROTOTYPE      : s = "Protocol wrong type for socket";          break;
    case ESRCH           : s = "No such process";                         break;
    case ETIMEDOUT       : s = "Connection timed out";                    break;
    case EWOULDBLOCK     : s = "Operation would block";                   break;

    default:
        s = "Unknown error";
    }

    return s;
}
