--- ./chrome/common/chrome_switches.h.orig	2014-04-02 21:04:09.000000000 +0200
+++ ./chrome/common/chrome_switches.h	2014-04-04 01:39:18.000000000 +0200
@@ -440,7 +440,7 @@
 extern const char kPasswordStore[];
 #endif
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_FREEBSD)) && !defined(OS_CHROMEOS)
 extern const char kEnableSpeechDispatcher[];
 extern const char kMigrateDataDirForSxS[];
 #endif
