#ifndef OS_H
#define OS_H
#include <cstdlib> 

#ifdef WIN32
    #define CLRS "cls"
    #define SLP "pause"
#else
    #define CLRS "clear"
    #define SLP "sleep 5"
#endif

void scr_clear();
#endif