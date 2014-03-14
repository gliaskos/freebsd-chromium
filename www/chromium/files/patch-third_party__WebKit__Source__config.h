--- ./third_party/WebKit/Source/config.h.orig	2014-03-12 20:27:08.000000000 +0100
+++ ./third_party/WebKit/Source/config.h	2014-03-14 09:23:25.000000000 +0100
@@ -156,6 +156,6 @@
 #define SKIP_STATIC_CONSTRUCTORS_ON_GCC 1
 #endif
 
-#if OS(LINUX) || OS(ANDROID) || ENABLE(HARFBUZZ_ON_WINDOWS)
+#if OS(LINUX) || OS(ANDROID) || OS(FREEBSD) || ENABLE(HARFBUZZ_ON_WINDOWS)
 #define WTF_USE_HARFBUZZ 1
 #endif
