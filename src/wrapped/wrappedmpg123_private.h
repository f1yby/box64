#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh....
#endif

// GO(mpg123_add_string,
// GO(mpg123_add_substring,
GO(mpg123_chomp_string, iFp)
GO(mpg123_clip, lFp)
GO(mpg123_close, iFp)
// GO(mpg123_copy_string,
GO(mpg123_current_decoder, pFp)
GO(mpg123_decode, iFppLpLp)
GO(mpg123_decode_frame, iFpppp)
GO(mpg123_decode_frame_64, iFpppp)
GO(mpg123_decoder, iFpp)
// GO(mpg123_decoders,
GO(mpg123_delete, vFp)
GO(mpg123_delete_pars, vFp)
GO(mpg123_enc_from_id3, iFC)
GO(mpg123_encodings, vFpp)
GO(mpg123_encsize, iFi)
GO(mpg123_eq, iFpiid)
GO(mpg123_errcode, iFp)
GO(mpg123_exit, vFv)
GO(mpg123_feature, iFi)
GO(mpg123_feature2, iFi)
GO(mpg123_feed, iFppL)
GO(mpg123_feedseek, lFplip)
GO(mpg123_feedseek_64, IFpIip)
GO(mpg123_fmt, iFplii)
GO(mpg123_fmt_all, iFp)
GO(mpg123_fmt_none, iFp)
GO(mpg123_fmt_support, iFpli)
GO(mpg123_format, iFplii)
GO(mpg123_format_all, iFp)
GO(mpg123_format_none, iFp)
GO(mpg123_format_support, iFpli)
GO(mpg123_framebyframe_decode, iFpppp)
GO(mpg123_framebyframe_decode_64, iFpppp)
GO(mpg123_framebyframe_next, iFp)
GO(mpg123_framedata, iFpppp)
GO(mpg123_framelength, IFp)
GO(mpg123_framelength_64, IFp)
GO(mpg123_framepos, IFp)
GO(mpg123_framepos_64, IFp)
GO(mpg123_free_string, vFp)
GO(mpg123_geteq, dFpii)
GO(mpg123_getformat, iFpppp)
GO(mpg123_getformat2, iFppppi)
GO(mpg123_getpar, iFpipp)
GO(mpg123_getparam, iFpipp)
GO(mpg123_getparam2, iFpipp)
GO(mpg123_getstate, iFpipp)
GO(mpg123_getvolume, iFpppp)
GO(mpg123_grow_string, iFpL)
GO(mpg123_icy, iFpp)
GO(mpg123_icy2utf8, pFp)
GO(mpg123_id3, iFppp)
GO(mpg123_index, iFpppp)
GO(mpg123_index_64, iFpppp)
GO(mpg123_info, iFpp)
GO(mpg123_init, iFv)
// GO(mpg123_init_string,
GO(mpg123_length, lFp)
GO(mpg123_length_64, IFp)
GO(mpg123_meta_check, iFp)
GO(mpg123_meta_free, vFp)
GO(mpg123_new, pFpp)
GO(mpg123_new_pars, pFp)
GO(mpg123_open, iFpp)
GO(mpg123_open_64, iFpp)
GO(mpg123_open_fd, iFpi)
GO(mpg123_open_fd_64, iFpi)
GO(mpg123_open_feed, iFp)
GO(mpg123_open_handle, iFpp)
GO(mpg123_open_handle_64, iFpp)
GO(mpg123_outblock, LFp)
GO(mpg123_par, iFpild)
GO(mpg123_param, iFpild)
GO(mpg123_param2, iFpild)
GO(mpg123_parnew, pFppp)
GO(mpg123_plain_strerror, pFi)
GO(mpg123_position, iFpllpppp)
GO(mpg123_position_64, iFpIIpppp)
GO(mpg123_rates, vFpp)
GO(mpg123_read, iFppLp)
GO(mpg123_replace_buffer, iFppL)
// GO(mpg123_replace_reader,
// GO(mpg123_replace_reader_64,
GOM(mpg123_replace_reader_handle, iFEpppp)
GOM(mpg123_replace_reader_handle_64, iFEpppp)
// GO(mpg123_reset_eq,
// GO(mpg123_resize_string,
GO(mpg123_safe_buffer, LFv)
// GO(mpg123_scan,
GO(mpg123_seek, IFpIi)
GO(mpg123_seek_64, IFpIi)
GO(mpg123_seek_frame, lFpli)
GO(mpg123_seek_frame_64, IFpIi)
GO(mpg123_set_filesize, iFpl)
GO(mpg123_set_filesize_64, iFpI)
GO(mpg123_set_index, iFpplL)
GO(mpg123_set_index_64, iFppIL)
GO(mpg123_set_string, iFpp)
GO(mpg123_set_substring, iFppLL)
// GO(mpg123_spf,
GO(mpg123_store_utf8, iFpipL)
GO(mpg123_strerror, pFp)
GO(mpg123_strlen, LFpi)
GO(mpg123_supported_decoders, pFv)
GO(mpg123_tell, IFp)
GO(mpg123_tell_64, IFp)
GO(mpg123_tellframe, IFp)
GO(mpg123_tellframe_64, IFp)
GO(mpg123_tell_stream, IFp)
GO(mpg123_tell_stream_64, IFp)
GO(mpg123_timeframe, lFpd)
GO(mpg123_timeframe_64, IFpd)
GO(mpg123_tpf, dFp)
// GO(mpg123_volume,
GO(mpg123_volume_change, iFpd)
