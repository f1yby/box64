#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error meh!
#endif

GO(pango_fc_decoder_get_charset, pFpp)
GO(pango_fc_decoder_get_glyph, uFppu)
GO(pango_fc_decoder_get_type, iFv)
GO(pango_fc_font_create_base_metrics_for_context, pFpp)
GO(pango_fc_font_description_from_pattern, pFpi)
GO(pango_fc_font_get_glyph, uFpu)
GO(pango_fc_font_get_raw_extents, vFpupp)
GO(pango_fc_font_get_type, iFv)
GO(pango_fc_font_get_unknown_glyph, uFpu)
GO(pango_fc_font_has_char, iFpu)
GO(pango_fc_font_kern_glyphs, vFpp)
GO(pango_fc_font_key_get_context_key, pFp)
GO(pango_fc_font_key_get_matrix, pFp)
GO(pango_fc_font_key_get_pattern, pFp)
GO(pango_fc_font_lock_face, pFp)
// GOM(pango_fc_font_map_add_decoder_find_func, vFEpBpp)
GO(pango_fc_font_map_cache_clear, vFp)
GO(pango_fc_font_map_config_changed, vFp)
GO(pango_fc_font_map_create_context, pFp)
GO(pango_fc_font_map_find_decoder, pFpp)
GO(pango_fc_font_map_get_config, pFp)
GO(pango_fc_font_map_get_type, iFv)
GO(pango_fc_font_map_shutdown, vFp)
GO(pango_fc_font_map_set_config, vFpp)
GO(pango_fc_fontset_key_get_absolute_size, dFp)
GO(pango_fc_fontset_key_get_context_key, pFp)
GO(pango_fc_fontset_key_get_description, pFp)
GO(pango_fc_fontset_key_get_language, pFp)
GO(pango_fc_fontset_key_get_matrix, pFp)
GO(pango_fc_fontset_key_get_resolution, dFp)
GO(pango_fc_font_unlock_face, vFp)
GO(pango_ft2_font_get_coverage, pFpp)
GO(pango_ft2_font_get_face, pFp)
GO(pango_ft2_font_get_kerning, iFpuu)
GO(pango_ft2_font_get_type, iFv)
GO(pango_ft2_font_map_create_context, pFp)
GO(pango_ft2_font_map_for_display, pFv)
GO(pango_ft2_font_map_get_type, LFv)
GO(pango_ft2_font_map_new, pFv)
// GOM(pango_ft2_font_map_set_default_substitute, vFEpBpB)
GO(pango_ft2_font_map_set_resolution, vFpdd)
GO(pango_ft2_font_map_substitute_changed, vFp)
GO(pango_ft2_get_context, pFdd)
GO(pango_ft2_get_unknown_glyph, uFp)
GO(pango_ft2_render, vFpppii)
GO(pango_ft2_renderer_get_type, iFv)
GO(pango_ft2_render_layout, vFppii)
GO(pango_ft2_render_layout_line, vFppii)
GO(pango_ft2_render_layout_line_subpixel, vFppii)
GO(pango_ft2_render_layout_subpixel, vFppii)
GO(pango_ft2_render_transformed, vFppppii)
GO(pango_ft2_shutdown_display, vFv)
GO(pango_ot_buffer_add_glyph, vFpuuu)
GO(pango_ot_buffer_clear, vFp)
GO(pango_ot_buffer_destroy, vFp)
GO(pango_ot_buffer_get_glyphs, vFppp)
GO(pango_ot_buffer_new, pFp)
GO(pango_ot_buffer_output, vFpp)
GO(pango_ot_buffer_set_rtl, vFpi)
GO(pango_ot_buffer_set_zero_width_marks, vFpi)
GO(pango_ot_info_find_feature, iFpiuuup)
GO(pango_ot_info_find_language, iFpiuupp)
GO(pango_ot_info_find_script, iFpiup)
GO(pango_ot_info_get, pFp)
GO(pango_ot_info_get_type, iFv)
GO(pango_ot_info_list_features, pFpiuuu)
GO(pango_ot_info_list_languages, pFpiuu)
GO(pango_ot_info_list_scripts, pFpi)
GO(pango_ot_ruleset_add_feature, vFpiuL)
GO(pango_ot_ruleset_description_copy, pFp)
GO(pango_ot_ruleset_description_equal, iFpp)
GO(pango_ot_ruleset_description_free, vFp)
GO(pango_ot_ruleset_description_hash, uFp)
GO(pango_ot_ruleset_get_feature_count, uFppp)
GO(pango_ot_ruleset_get_for_description, pFpp)
GO(pango_ot_ruleset_get_type, iFv)
GO(pango_ot_ruleset_maybe_add_feature, iFpiuL)
GO(pango_ot_ruleset_maybe_add_features, uFpipu)
GO(pango_ot_ruleset_new, pFp)
GO(pango_ot_ruleset_new_for, pFpip)
GO(pango_ot_ruleset_new_from_description, pFpp)
GO(pango_ot_ruleset_position, vFpp)
GO(pango_ot_ruleset_substitute, vFpp)
GO(pango_ot_tag_from_language, uFp)
GO(pango_ot_tag_from_script, uFp)
GO(pango_ot_tag_to_language, pFu)
GO(pango_ot_tag_to_script, pFu)
