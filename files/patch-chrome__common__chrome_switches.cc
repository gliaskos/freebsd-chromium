--- ./chrome/common/chrome_switches.cc.orig	2010-12-13 12:04:46.000000000 +0100
+++ ./chrome/common/chrome_switches.cc	2010-12-20 20:41:37.000000000 +0100
@@ -1266,7 +1266,7 @@
 const char kEnableAdvancedFileSystem[]      = "enable-advanced-fs";
 #endif
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 // Specify the amount the trackpad should scroll by.
 const char kScrollPixels[]                  = "scroll-pixels";
 #endif
