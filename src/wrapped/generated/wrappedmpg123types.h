/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.4.0.21) *
 *******************************************************************/
#ifndef __wrappedmpg123TYPES_H_
#define __wrappedmpg123TYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS()
#endif

typedef int32_t (*iFpppp_t)(void*, void*, void*, void*);

#define SUPER()                                \
    ADDED_FUNCTIONS()                          \
    GO(mpg123_replace_reader_handle, iFpppp_t) \
    GO(mpg123_replace_reader_handle_64, iFpppp_t)

#endif // __wrappedmpg123TYPES_H_
