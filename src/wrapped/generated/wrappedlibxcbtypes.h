/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.4.0.21) *
 *******************************************************************/
#ifndef __wrappedlibxcbTYPES_H_
#define __wrappedlibxcbTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS()
#endif

typedef void (*vFp_t)(void*);
typedef void* (*pFpp_t)(void*, void*);

#define SUPER()               \
    ADDED_FUNCTIONS()         \
    GO(xcb_disconnect, vFp_t) \
    GO(xcb_connect, pFpp_t)

#endif // __wrappedlibxcbTYPES_H_
