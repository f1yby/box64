#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh!
#endif

GO(TTF_ByteSwappedUNICODE, vFu)
GO(TTF_CloseFont, vFp)
GO(TTF_FontAscent, iFp)
GO(TTF_FontDescent, iFp)
GO(TTF_FontFaceFamilyName, pFp)
GO(TTF_FontFaceIsFixedWidth, iFp)
GO(TTF_FontFaces, lFp)
GO(TTF_FontFaceStyleName, pFp)
GO(TTF_FontHeight, iFp)
GO(TTF_FontLineSkip, iFp)
GO(TTF_GetFontHinting, iFp)
GO(TTF_GetFontKerning, iFp)
GO(TTF_GetFontKerningSize, iFpii)
GO(TTF_GetFontOutline, iFp)
GO(TTF_GetFontStyle, iFp)
GO(TTF_GlyphIsProvided, iFpW)
GO(TTF_GlyphMetrics, iFpWppppp)
GO(TTF_Init, iFv)
GO(TTF_Linked_Version, pFv)
GO(TTF_OpenFont, pFpi)
GO(TTF_OpenFontIndex, pFpil)
GOM(TTF_OpenFontIndexRW, pFEpiii)
GOM(TTF_OpenFontRW, pFEpii)
GO(TTF_Quit, vFv)
GO(TTF_RenderGlyph_Blended, pFpuu)
GO(TTF_RenderGlyph_Shaded, pFpuuu)
GO(TTF_RenderGlyph_Solid, pFpuu)
GO(TTF_RenderText_Blended, pFppu)
GO(TTF_RenderText_Blended_Wrapped, pFppuu)
GO(TTF_RenderText_Shaded, pFppuu)
GO(TTF_RenderText_Solid, pFppu)
GO(TTF_RenderUNICODE_Blended, pFppu)
GO(TTF_RenderUNICODE_Blended_Wrapped, pFppuu)
GO(TTF_RenderUNICODE_Shaded, pFppuu)
GO(TTF_RenderUNICODE_Solid, pFppu)
GO(TTF_RenderUTF8_Blended, pFppu)
GO(TTF_RenderUTF8_Blended_Wrapped, pFppuu)
GO(TTF_RenderUTF8_Shaded, pFppuu)
GO(TTF_RenderUTF8_Solid, pFppu)
GO(TTF_SetFontHinting, vFpi)
GO(TTF_SetFontKerning, vFpi)
GO(TTF_SetFontOutline, vFpi)
GO(TTF_SetFontStyle, vFpi)
GO(TTF_SizeText, iFpppp)
GO(TTF_SizeUNICODE, iFpppp)
GO(TTF_SizeUTF8, iFpppp)
GO(TTF_WasInit, iFv)
