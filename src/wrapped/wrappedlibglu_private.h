#if defined(GO) && defined(GOM) && defined(GO2) && defined(DATA)

GO(gluBeginCurve, vFp)
GO(gluBeginPolygon, vFp)
GO(gluBeginSurface, vFp)
GO(gluBeginTrim, vFp)
GO(gluBuild1DMipmapLevels, iFiiiiiiiip)
GO(gluBuild1DMipmaps, iFiiiiip)
GO(gluBuild2DMipmapLevels, iFiiiiiiiiip)
GO(gluBuild2DMipmaps, iFiiiiiip)
GO(gluBuild3DMipmapLevels, iFiiiiiiiiiip)
GO(gluBuild3DMipmaps, iFiiiiiiip)
GO(gluCheckExtension, iFpp)
GO(gluCylinder, vFpdddii)
GO(gluDeleteNurbsRenderer, vFp)
GO(gluDeleteQuadric, vFp)
GO(gluDeleteTess, vFp)
GO(gluDisk, vFpddii)
GO(gluEndCurve, vFp)
GO(gluEndPolygon, vFp)
GO(gluEndSurface, vFp)
GO(gluEndTrim, vFp)
GO(gluErrorString, pFi)
GO(gluGetNurbsProperty, vFpip)
GO(gluGetString, pFi)
GO(gluGetTessProperty, vFpip)
GO(gluLoadSamplingMatrices, vFpppp)
GO(gluLookAt, vFddddddddd)
GO(gluNewNurbsRenderer, pFv)
GO(gluNewQuadric, pFv)
GO(gluNewTess, pFv)
GO(gluNextContour, vFpi)
GOM(gluNurbsCallback, vFEpip)
GO(gluNurbsCallbackData, vFpp)    // to check
GO(gluNurbsCallbackDataEXT, vFpp) // to check
GO(gluNurbsCurve, vFpipipii)
GO(gluNurbsProperty, vFpif)
GO(gluNurbsSurface, vFpipipiipiii)
GO(gluOrtho2D, vFdddd)
GO(gluPartialDisk, vFpddiidd)
GO(gluPerspective, vFdddd)
GO(gluPickMatrix, vFddddp)
GO(gluProject, iFdddpppppp)
GO(gluPwlCurve, vFpipii)
GOM(gluQuadricCallback, vFEpip)
GO(gluQuadricDrawStyle, vFpi)
GO(gluQuadricNormals, vFpi)
GO(gluQuadricOrientation, vFpi)
GO(gluQuadricTexture, vFpi)
GO(gluScaleImage, iFiiiipiiip)
GO(gluSphere, vFpdii)
GO(gluTessBeginContour, vFp)
GO(gluTessBeginPolygon, vFpp)
GOM(gluTessCallback, vFEpip)
GO(gluTessEndContour, vFp)
GO(gluTessEndPolygon, vFp)
GO(gluTessNormal, vFpddd)
GO(gluTessProperty, vFpid)
GO(gluTessVertex, vFppp)
GO(gluUnProject, iFdddpppppp)
GO(gluUnProject4, iFddddpppddpppp)

#endif