--- ./third_party/WebKit/Source/config.h.orig	2014-04-02 21:08:53.000000000 +0200
+++ ./third_party/WebKit/Source/config.h	2014-04-04 01:39:18.000000000 +0200
@@ -156,6 +156,6 @@
 #define SKIP_STATIC_CONSTRUCTORS_ON_GCC 1
 #endif
 
-#if OS(LINUX) || OS(ANDROID) || ENABLE(HARFBUZZ_ON_WINDOWS)
+#if OS(LINUX) || OS(ANDROID) || OS(FREEBSD) || ENABLE(HARFBUZZ_ON_WINDOWS)
 #define WTF_USE_HARFBUZZ 1
 #endif
