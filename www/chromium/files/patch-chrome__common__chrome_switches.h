--- ./chrome/common/chrome_switches.h.orig	2014-06-30 21:02:11.000000000 +0200
+++ ./chrome/common/chrome_switches.h	2014-07-07 15:12:47.000000000 +0200
@@ -386,7 +386,7 @@
 extern const char kPasswordStore[];
 #endif
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_FREEBSD)) && !defined(OS_CHROMEOS)
 extern const char kEnableSpeechDispatcher[];
 extern const char kMigrateDataDirForSxS[];
 #endif
