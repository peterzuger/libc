/**
 * @file   strerror.c
 * @author Peter Zueger
 * @date   25.07.2018
 * @brief  errno to string
 */
#include <string.h>
#include <errno.h>

char* strerror(int errnum){
    char* s;

    switch(errnum){
    case EPERM       : s = "Operation not permitted";           break;
    case ENOENT      : s = "No such file or directory";         break;
    case EINTR       : s = "Interrupted system call";           break;
    case EIO         : s = "Input/output error";                break;
    case EBADF       : s = "Bad file descriptor";               break;
    case ENOMEM      : s = "Cannot allocate memory";            break;
    case EACCES      : s = "Permission denied";                 break;
    case EFAULT      : s = "Bad address";                       break;
    case ENOTBLK     : s = "Block device required";             break;
    case EBUSY       : s = "Device busy";                       break;
    case EEXIST      : s = "File exists";                       break;
    case EXDEV       : s = "Cross-device link";                 break;
    case ENODEV      : s = "Operation not supported by device"; break;
    case ENOTDIR     : s = "Not a directory";                   break;
    case EISDIR      : s = "Is a directory";                    break;
    case EINVAL      : s = "Invalid argument";                  break;
    case ENFILE      : s = "Too many open files in system";     break;
    case EMFILE      : s = "Too many open files";               break;
    case ENOTTY      : s = "Not a typewriter";                  break;
    case ETXTBSY     : s = "Text file busy";                    break;
    case EFBIG       : s = "File too large";                    break;
    case ENOSPC      : s = "No space left on device";           break;
    case ESPIPE      : s = "Illegal seek";                      break;
    case EROFS       : s = "Read-only file system";             break;
    case EMLINK      : s = "Too many links";                    break;
    case EILSEQ      : s = "Illegal byte sequence";             break;
    case EDOM        : s = "Numerical argument out of domain";  break;
    case ERANGE      : s = "Result too large";                  break;
    case ENODATA     : s = "No data (for no delay io)";         break;
    case ETIME       : s = "Timer expired";                     break;
    case ENOLINK     : s = "The link has been severed";         break;
    case EAGAIN      : s = "Resource temporarily unavailable";  break;
    case ELOOP       : s = "Too many levels of symbolic links"; break;
    case ENAMETOOLONG: s = "File name too long";                break;
    case ENOTEMPTY   : s = "Directory not empty";               break;
    case ENOSYS      : s = "Function not implemented";          break;
    case EFTYPE      : s = "Inappropriate file type or format"; break;
    case ENOBUFS     : s = "No buffer space available";         break;
    case ENOMSG      : s = "No message of desired type";        break;

    default:
        s = "Unknown error";
    }

    return s;
}
