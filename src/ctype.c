/**
 * @file   ctype.c
 * @author Peter Zueger
 * @date   03.02.2018
 * @brief  character type
 */
#include <ctype.h>

#define IN_RANGE(c,b,t)  (((c)>=(b))&&((c)<=(t)))

int isalnum(int c){
    return (IN_RANGE(c,0x30,0x39) || IN_RANGE(c,0x41,0x5A) || IN_RANGE(c,0x61,0x7A));
}
int isalpha(int c){
    return (IN_RANGE(c,0x41,0x5A) || IN_RANGE(c,0x61,0x7A));
}
int isblank(int c){
    return ((c==0x09)||(c==0x20));
}
int iscntrl(int c){
    return ((c<=0x1F) || (c==0x7F));
}
int isdigit(int c){
    return IN_RANGE(c,0x30,0x39);
}
int isgraph(int c){
    return IN_RANGE(c,0x21,0x7E);
}
int isupper(int c){
    return IN_RANGE(c,0x41,0x5A);
}
int islower(int c){
    return IN_RANGE(c,0x61,0x7A);
}
int isprint(int c){
    return IN_RANGE(c,0x20,0x7E);
}
int ispunct(int c){
    return (IN_RANGE(c,0x21,0x2F) || IN_RANGE(c,0x3A,0x40) || IN_RANGE(c,0x5B,0x60) || IN_RANGE(c,0x7B,0x7E));
}
int isspace(int c){
    return (IN_RANGE(c,0x09,0x0D) || (c==0x20));
}
int isxdigit(int c){
    return (IN_RANGE(c,0x30,0x39) || IN_RANGE(c,0x41,0x46) || IN_RANGE(c,0x61,0x66));
}

int tolower(int c){
    return IN_RANGE(c,'A','Z')?(c+32):c;
}
int toupper(int c){
    return IN_RANGE(c,'a','z')?(c-32):c;
}
