--- ./third_party/WebKit/Source/web/linux/WebFontRendering.cpp.orig	2014-03-26 21:19:51.000000000 +0100
+++ ./third_party/WebKit/Source/web/linux/WebFontRendering.cpp	2014-03-28 10:57:59.000000000 +0100
@@ -34,7 +34,7 @@
 #include "platform/fonts/FontDescription.h"
 #include "platform/fonts/FontPlatformData.h"
 
-#if OS(LINUX)
+#if OS(LINUX) || OS(FREEBSD)
 #include "public/platform/linux/WebFontInfo.h"
 #endif
 
@@ -77,7 +77,7 @@
 void WebFontRendering::setSubpixelPositioning(bool useSubpixelPositioning)
 {
     FontDescription::setSubpixelPositioning(useSubpixelPositioning);
-#if OS(LINUX)
+#if OS(LINUX) || OS(FREEBSD)
     WebFontInfo::setSubpixelPositioning(useSubpixelPositioning);
 #endif
 }
