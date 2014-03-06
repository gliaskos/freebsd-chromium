--- ./third_party/WebKit/Source/config.h.orig	2014-02-20 21:32:36.000000000 +0100
+++ ./third_party/WebKit/Source/config.h	2014-02-24 17:23:45.000000000 +0100
@@ -167,6 +167,6 @@
 #define __STDC_FORMAT_MACROS 1
 #endif
 
-#if OS(LINUX) || OS(ANDROID) || ENABLE(HARFBUZZ_ON_WINDOWS)
+#if OS(LINUX) || OS(ANDROID) || OS(FREEBSD) || ENABLE(HARFBUZZ_ON_WINDOWS)
 #define WTF_USE_HARFBUZZ 1
 #endif
