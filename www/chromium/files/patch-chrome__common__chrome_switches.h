--- chrome/common/chrome_switches.h.orig	2014-10-10 09:15:30 UTC
+++ chrome/common/chrome_switches.h
@@ -359,7 +359,7 @@
 extern const char kPasswordStore[];
 #endif
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
 extern const char kMigrateDataDirForSxS[];
 #endif
 
