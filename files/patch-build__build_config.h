--- ./build/build_config.h.orig	2012-08-17 03:01:49.000000000 +0200
+++ ./build/build_config.h	2012-08-23 22:31:42.000000000 +0200
@@ -67,7 +67,7 @@
 #endif
 
 // Use tcmalloc
-#if (defined(OS_WIN) || defined(OS_LINUX)) && !defined(NO_TCMALLOC)
+#if (defined(OS_WIN) || defined(OS_LINUX) || defined(OS_FREEBSD)) && !defined(NO_TCMALLOC)
 #define USE_TCMALLOC 1
 #endif
 
