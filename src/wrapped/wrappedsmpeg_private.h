#if defined(GO) && defined(GOM) && defined(GO2) && defined(DATA)

GO(SMPEG_actualSpec, vFpp)
GO(SMPEG_delete, vFp)
GO(SMPEG_enableaudio, vFpi)
GO(SMPEG_enablevideo, vFpi)
GO(SMPEG_error, pFp)
GO(SMPEG_filter, pFpp)
GO(SMPEG_getinfo, vFpp)
GO(SMPEG_loop, vFpi)
GO(SMPEG_move, vFpii)
GO(SMPEG_new, pFppi)
GO(SMPEG_new_data, pFpipi)
GO(SMPEG_new_descr, pFipi)
GOM(SMPEG_new_rwops, pFEppi)
GO(SMPEG_pause, vFp)
GO(SMPEG_play, vFp)
GO(SMPEG_playAudio, iFppi)
GO(SMPEG_playAudioSDL, vFppi)
GO(SMPEG_renderFinal, vFppii)
GO(SMPEG_renderFrame, vFpi)
GO(SMPEG_rewind, vFp)
GO(SMPEG_scale, vFpi)
GO(SMPEG_scaleXY, vFpii)
GO(SMPEG_seek, vFpi)
GOM(SMPEG_setdisplay, vFEpppp)
GO(SMPEG_setdisplayregion, vFpiiii)
GO(SMPEG_setvolume, vFpi)
GO(SMPEG_skip, vFpf)
GO(SMPEG_status, iFp)
GO(SMPEG_stop, vFp)
GO(SMPEG_wantedSpec, iFpp)

#endif