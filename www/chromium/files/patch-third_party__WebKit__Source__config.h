--- ./third_party/WebKit/Source/config.h.orig	2014-03-04 03:21:46.000000000 +0100
+++ ./third_party/WebKit/Source/config.h	2014-03-07 14:10:35.000000000 +0100
@@ -167,6 +167,6 @@
 #define __STDC_FORMAT_MACROS 1
 #endif
 
-#if OS(LINUX) || OS(ANDROID) || ENABLE(HARFBUZZ_ON_WINDOWS)
+#if OS(LINUX) || OS(ANDROID) || OS(FREEBSD) || ENABLE(HARFBUZZ_ON_WINDOWS)
 #define WTF_USE_HARFBUZZ 1
 #endif
