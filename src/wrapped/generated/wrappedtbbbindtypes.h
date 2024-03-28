/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.4.0.21) *
 *******************************************************************/
#ifndef __wrappedtbbbindTYPES_H_
#define __wrappedtbbbindTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS()
#endif

typedef void (*vFv_t)(void);
typedef void (*vFp_t)(void*);
typedef void (*vFpi_t)(void*, int32_t);
typedef int32_t (*iFiii_t)(int32_t, int32_t, int32_t);
typedef void* (*pFiiii_t)(int32_t, int32_t, int32_t, int32_t);
typedef void (*vFLpppp_t)(uintptr_t, void*, void*, void*, void*);

#define SUPER()                                           \
    ADDED_FUNCTIONS()                                     \
    GO(__TBB_internal_destroy_system_topology, vFv_t)     \
    GO(__TBB_internal_deallocate_binding_handler, vFp_t)  \
    GO(__TBB_internal_apply_affinity, vFpi_t)             \
    GO(__TBB_internal_restore_affinity, vFpi_t)           \
    GO(__TBB_internal_get_default_concurrency, iFiii_t)   \
    GO(__TBB_internal_allocate_binding_handler, pFiiii_t) \
    GO(__TBB_internal_initialize_system_topology, vFLpppp_t)

#endif // __wrappedtbbbindTYPES_H_
