#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh....
#endif

// DATA(SECMEM_pool_data_v1_0,
// GO(secret_attributes_build,
// GO(secret_attributes_buildv,
// GO(secret_backend_flags_get_type,
// GO(secret_backend_get,
// GO(secret_backend_get_finish,
// GO(secret_backend_get_type,
// GO(secret_collection_create,
// GO(secret_collection_create_finish,
// GO(secret_collection_create_flags_get_type,
// GO(secret_collection_create_sync,
// GO(secret_collection_delete,
// GO(secret_collection_delete_finish,
// GO(secret_collection_delete_sync,
// GO(secret_collection_flags_get_type,
// GO(secret_collection_for_alias,
// GO(secret_collection_for_alias_finish,
// GO(secret_collection_for_alias_sync,
// GO(secret_collection_get_created,
// GO(secret_collection_get_flags,
// GO(secret_collection_get_items,
// GO(secret_collection_get_label,
// GO(secret_collection_get_locked,
// GO(secret_collection_get_modified,
// GO(secret_collection_get_service,
// GO(secret_collection_get_type,
// GO(secret_collection_load_items,
// GO(secret_collection_load_items_finish,
// GO(secret_collection_load_items_sync,
// GO(secret_collection_new_for_dbus_path,
// GO(secret_collection_new_for_dbus_path_finish,
// GO(secret_collection_new_for_dbus_path_sync,
// GO(secret_collection_refresh,
// GO(secret_collection_search,
// GO(secret_collection_search_finish,
// GO(secret_collection_search_for_dbus_paths,
// GO(secret_collection_search_for_dbus_paths_finish,
// GO(secret_collection_search_for_dbus_paths_sync,
// GO(secret_collection_search_sync,
// GO(secret_collection_set_label,
// GO(secret_collection_set_label_finish,
// GO(secret_collection_set_label_sync,
// GO(secret_error_get_quark,
// GO(secret_error_get_type,
// GO(secret_file_backend_get_type,
// GO(secret_file_collection_clear,
// GO(secret_file_collection_get_type,
// GO(secret_file_collection_replace,
// GO(secret_file_collection_search,
// GO(secret_file_collection_write,
// GO(secret_file_collection_write_finish,
// GO(secret_file_item_deserialize,
// GO(secret_file_item_get_type,
// GO(secret_file_item_serialize,
// GO(secret_get_schema,
// GO(secret_item_create,
// GO(secret_item_create_finish,
// GO(secret_item_create_flags_get_type,
// GO(secret_item_create_sync,
// GO(secret_item_delete,
// GO(secret_item_delete_finish,
// GO(secret_item_delete_sync,
// GO(secret_item_flags_get_type,
GO(secret_item_get_attributes, pFp)
// GO(secret_item_get_created,
// GO(secret_item_get_flags,
// GO(secret_item_get_label,
// GO(secret_item_get_locked,
// GO(secret_item_get_modified,
// GO(secret_item_get_schema_name,
GO(secret_item_get_secret, pFp)
// GO(secret_item_get_service,
// GO(secret_item_get_type,
// GO(secret_item_load_secret,
// GO(secret_item_load_secret_finish,
// GO(secret_item_load_secrets,
// GO(secret_item_load_secrets_finish,
// GO(secret_item_load_secrets_sync,
GO(secret_item_load_secret_sync, iFppp)
// GO(secret_item_new_for_dbus_path,
// GO(secret_item_new_for_dbus_path_finish,
// GO(secret_item_new_for_dbus_path_sync,
// GO(secret_item_refresh,
// GO(secret_item_set_attributes,
// GO(secret_item_set_attributes_finish,
// GO(secret_item_set_attributes_sync,
// GO(secret_item_set_label,
// GO(secret_item_set_label_finish,
// GO(secret_item_set_label_sync,
// GO(secret_item_set_secret,
// GO(secret_item_set_secret_finish,
// GO(secret_item_set_secret_sync,
// GO(secret_password_clear,
// GO(secret_password_clear_finish,
GO(secret_password_clear_sync, iFpppppppppppppppppp) // vaarg after 3p
// GO(secret_password_clearv,
// GO(secret_password_clearv_sync,
// GO(secret_password_free,
// GO(secret_password_lookup,
// GO(secret_password_lookup_binary_finish,
// GO(secret_password_lookup_binary_sync,
// GO(secret_password_lookup_finish,
// GO(secret_password_lookup_nonpageable_finish,
// GO(secret_password_lookup_nonpageable_sync,
// GO(secret_password_lookup_sync,
// GO(secret_password_lookupv,
// GO(secret_password_lookupv_binary_sync,
// GO(secret_password_lookupv_nonpageable_sync,
// GO(secret_password_lookupv_sync,
// GO(secret_password_search,
// GO(secret_password_search_finish,
// GO(secret_password_search_sync,
// GO(secret_password_searchv,
// GO(secret_password_searchv_sync,
// GO(secret_password_store,
// GO(secret_password_store_binary,
// GO(secret_password_store_binary_sync,
// GO(secret_password_store_finish,
GO(secret_password_store_sync, iFpppppppppppppppppppppp) // vaarg after 6p
// GO(secret_password_storev,
// GO(secret_password_storev_binary,
// GO(secret_password_storev_binary_sync,
// GO(secret_password_storev_sync,
// GO(secret_password_wipe,
// GO(secret_prompt_get_type,
// GO(secret_prompt_perform,
// GO(secret_prompt_perform_finish,
// GO(secret_prompt_perform_sync,
// GO(secret_prompt_run,
// GO(secret_retrievable_get_attributes,
// GO(secret_retrievable_get_created,
// GO(secret_retrievable_get_label,
// GO(secret_retrievable_get_modified,
// GO(secret_retrievable_get_type,
// GO(secret_retrievable_retrieve_secret,
// GO(secret_retrievable_retrieve_secret_finish,
// GO(secret_retrievable_retrieve_secret_sync,
// GO(secret_schema_attribute_get_type,
// GO(secret_schema_attribute_type_get_type,
// DATA(SECRET_SCHEMA_COMPAT_NETWORK,
// GO(secret_schema_flags_get_type,
// GO(secret_schema_get_type,
// GO(secret_schema_new,
// GO(secret_schema_newv,
// DATA(SECRET_SCHEMA_NOTE,
// GO(secret_schema_ref,
// GO(secret_schema_type_get_type,
// GO(secret_schema_unref,
// GO(secret_search_flags_get_type,
// GO(secret_service_clear,
// GO(secret_service_clear_finish,
// GO(secret_service_clear_sync,
// GO(secret_service_create_collection_dbus_path,
// GO(secret_service_create_collection_dbus_path_finish,
// GO(secret_service_create_collection_dbus_path_sync,
// GO(secret_service_create_item_dbus_path,
// GO(secret_service_create_item_dbus_path_finish,
// GO(secret_service_create_item_dbus_path_sync,
// GO(secret_service_decode_dbus_secret,
// GO(secret_service_delete_item_dbus_path,
// GO(secret_service_delete_item_dbus_path_finish,
// GO(secret_service_delete_item_dbus_path_sync,
// GO(secret_service_disconnect,
// GO(secret_service_encode_dbus_secret,
// GO(secret_service_ensure_session,
// GO(secret_service_ensure_session_finish,
// GO(secret_service_ensure_session_sync,
// GO(secret_service_flags_get_type,
// GO(secret_service_get,
// GO(secret_service_get_collection_gtype,
// GO(secret_service_get_collections,
// GO(secret_service_get_finish,
// GO(secret_service_get_flags,
// GO(secret_service_get_item_gtype,
// GO(secret_service_get_secret_for_dbus_path,
// GO(secret_service_get_secret_for_dbus_path_finish,
// GO(secret_service_get_secret_for_dbus_path_sync,
// GO(secret_service_get_secrets_for_dbus_paths,
// GO(secret_service_get_secrets_for_dbus_paths_finish,
// GO(secret_service_get_secrets_for_dbus_paths_sync,
// GO(secret_service_get_session_algorithms,
// GO(secret_service_get_session_dbus_path,
// GO(secret_service_get_sync,
// GO(secret_service_get_type,
// GO(secret_service_load_collections,
// GO(secret_service_load_collections_finish,
// GO(secret_service_load_collections_sync,
// GO(secret_service_lock,
// GO(secret_service_lock_dbus_paths,
// GO(secret_service_lock_dbus_paths_finish,
// GO(secret_service_lock_dbus_paths_sync,
// GO(secret_service_lock_finish,
// GO(secret_service_lock_sync,
// GO(secret_service_lookup,
// GO(secret_service_lookup_finish,
GO(secret_service_lookup_sync, pFppppp)
// GO(secret_service_open,
// GO(secret_service_open_finish,
// GO(secret_service_open_sync,
// GO(secret_service_prompt,
// GO(secret_service_prompt_at_dbus_path,
// GO(secret_service_prompt_at_dbus_path_finish,
// GO(secret_service_prompt_at_dbus_path_sync,
// GO(secret_service_prompt_finish,
// GO(secret_service_prompt_sync,
// GO(secret_service_read_alias_dbus_path,
// GO(secret_service_read_alias_dbus_path_finish,
// GO(secret_service_read_alias_dbus_path_sync,
// GO(secret_service_search,
// GO(secret_service_search_finish,
// GO(secret_service_search_for_dbus_paths,
// GO(secret_service_search_for_dbus_paths_finish,
// GO(secret_service_search_for_dbus_paths_sync,
GO(secret_service_search_sync, pFpppupp)
// GO(secret_service_set_alias,
// GO(secret_service_set_alias_finish,
// GO(secret_service_set_alias_sync,
// GO(secret_service_set_alias_to_dbus_path,
// GO(secret_service_set_alias_to_dbus_path_finish,
// GO(secret_service_set_alias_to_dbus_path_sync,
// GO(secret_service_store,
// GO(secret_service_store_finish,
// GO(secret_service_store_sync,
// GO(secret_service_unlock,
// GO(secret_service_unlock_dbus_paths,
// GO(secret_service_unlock_dbus_paths_finish,
// GO(secret_service_unlock_dbus_paths_sync,
// GO(secret_service_unlock_finish,
// GO(secret_service_unlock_sync,
GO(secret_value_get, pFpp)
GO(secret_value_get_content_type, pFp)
GO(secret_value_get_text, pFp)
GO(secret_value_get_type, LFv)
GO(secret_value_new, pFplp)
// GO(secret_value_new_full,
GO(secret_value_ref, pFp)
GO(secret_value_unref, vFp)
GO(secret_value_unref_to_password, pFpp)
