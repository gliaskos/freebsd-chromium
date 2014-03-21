--- ./chrome/common/chrome_switches.h.orig	2014-03-19 20:02:24.000000000 +0100
+++ ./chrome/common/chrome_switches.h	2014-03-21 00:27:12.000000000 +0100
@@ -440,7 +440,7 @@
 extern const char kPasswordStore[];
 #endif
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_FREEBSD)) && !defined(OS_CHROMEOS)
 extern const char kMigrateDataDirForSxS[];
 #endif
 
