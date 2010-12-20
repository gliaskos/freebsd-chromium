--- ./chrome/common/chrome_switches.h.orig	2010-12-13 12:04:46.000000000 +0100
+++ ./chrome/common/chrome_switches.h	2010-12-20 20:41:37.000000000 +0100
@@ -360,7 +360,7 @@
 extern const char kEnableAdvancedFileSystem[];
 #endif
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 extern const char kScrollPixels[];
 #endif
 
