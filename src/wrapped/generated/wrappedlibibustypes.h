/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.4.0.21) *
 *******************************************************************/
#ifndef __wrappedlibibusTYPES_H_
#define __wrappedlibibusTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS()
#endif

typedef void (*vFpippp_t)(void*, int32_t, void*, void*, void*);
typedef void (*vFppippp_t)(void*, void*, int32_t, void*, void*, void*);
typedef void (*vFpppippp_t)(void*, void*, void*, int32_t, void*, void*, void*);
typedef void (*vFpuuuippp_t)(void*, uint32_t, uint32_t, uint32_t, int32_t, void*, void*, void*);
typedef void (*vFppppippp_t)(void*, void*, void*, void*, int32_t, void*, void*, void*);

#define SUPER()                                                  \
    ADDED_FUNCTIONS()                                            \
    GO(ibus_bus_current_input_context_async, vFpippp_t)          \
    GO(ibus_bus_get_global_engine_async, vFpippp_t)              \
    GO(ibus_bus_list_active_engines_async, vFpippp_t)            \
    GO(ibus_bus_list_engines_async, vFpippp_t)                   \
    GO(ibus_input_context_get_engine_async, vFpippp_t)           \
    GO(ibus_bus_create_input_context_async, vFppippp_t)          \
    GO(ibus_bus_set_global_engine_async, vFppippp_t)             \
    GO(ibus_config_get_values_async, vFppippp_t)                 \
    GO(ibus_config_get_value_async, vFpppippp_t)                 \
    GO(ibus_input_context_process_key_event_async, vFpuuuippp_t) \
    GO(ibus_config_set_value_async, vFppppippp_t)

#endif // __wrappedlibibusTYPES_H_
