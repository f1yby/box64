/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.4.0.21) *
 *******************************************************************/
#ifndef __wrappedgdkpixbuf2TYPES_H_
#define __wrappedgdkpixbuf2TYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS()
#endif

typedef void* (*pFpiiiiiipp_t)(void*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, void*, void*);

#define SUPER()       \
    ADDED_FUNCTIONS() \
    GO(gdk_pixbuf_new_from_data, pFpiiiiiipp_t)

#endif // __wrappedgdkpixbuf2TYPES_H_
