/**
 * @file   ctype.c
 * @author Peter Zueger
 * @date   03.02.2018
 * @brief  character type
 */
#include <ctype.h>

#define IN_RANGE(c,b,t)  (((c)>=(b))&&((c)<=(t)))

int isalnum(int c){
    return (isdigit(c) || isalpha(c));
}
int isalpha(int c){
    return (isupper(c) || islower(c));
}
int isblank(int c){
    return ((c=='\t')||(c==' '));
}
int iscntrl(int c){
    return ((c<=0x1F) || (c==0x7F));
}
int isdigit(int c){
    return IN_RANGE(c,'0','9');
}
int isgraph(int c){
    return IN_RANGE(c,'!','~');
}
int isupper(int c){
    return IN_RANGE(c,'A','Z');
}
int islower(int c){
    return IN_RANGE(c,'a','z');
}
int isprint(int c){
    return IN_RANGE(c,' ','~');
}
int ispunct(int c){
    return (IN_RANGE(c,'!','/') || IN_RANGE(c,':','@') || IN_RANGE(c,'[','`') || IN_RANGE(c,'{','~'));
}
int isspace(int c){
    return (IN_RANGE(c,'\t','\r') || (c==' '));
}
int isxdigit(int c){
    return (isdigit(c) || IN_RANGE(c,'A','F') || IN_RANGE(c,'a','f'));
}

int tolower(int c){
    return isupper(c)?(c+32):c;
}
int toupper(int c){
    return islower(c)?(c-32):c;
}
