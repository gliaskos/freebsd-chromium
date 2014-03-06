--- ./chrome/common/chrome_switches.h.orig	2014-02-20 21:27:53.000000000 +0100
+++ ./chrome/common/chrome_switches.h	2014-02-24 17:23:44.000000000 +0100
@@ -441,7 +441,7 @@
 extern const char kPasswordStore[];
 #endif
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_FREEBSD)) && !defined(OS_CHROMEOS)
 extern const char kMigrateDataDirForSxS[];
 #endif
 
