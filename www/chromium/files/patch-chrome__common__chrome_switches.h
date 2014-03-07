--- ./chrome/common/chrome_switches.h.orig	2014-03-05 22:24:58.000000000 +0100
+++ ./chrome/common/chrome_switches.h	2014-03-07 23:57:26.000000000 +0100
@@ -439,7 +439,7 @@
 extern const char kPasswordStore[];
 #endif
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_FREEBSD)) && !defined(OS_CHROMEOS)
 extern const char kMigrateDataDirForSxS[];
 #endif
 
