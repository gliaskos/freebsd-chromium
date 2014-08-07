--- ./third_party/WebKit/Source/config.h.orig	2014-07-15 21:07:07.000000000 +0200
+++ ./third_party/WebKit/Source/config.h	2014-07-20 18:13:09.000000000 +0200
@@ -156,6 +156,6 @@
 #define SKIP_STATIC_CONSTRUCTORS_ON_GCC 1
 #endif
 
-#if OS(LINUX) || OS(ANDROID) || OS(WIN)
+#if OS(LINUX) || OS(ANDROID) || OS(FREEBSD) || OS(WIN)
 #define WTF_USE_HARFBUZZ 1
 #endif
