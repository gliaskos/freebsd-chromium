--- chrome/common/chrome_switches.h.orig	2016-05-11 15:02:17.000000000 -0400
+++ chrome/common/chrome_switches.h	2016-05-21 09:57:52.959460000 -0400
@@ -323,7 +323,7 @@
 extern const char kPasswordStore[];
 #endif
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_FREEBSD)) && !defined(OS_CHROMEOS)
 extern const char kMigrateDataDirForSxS[];
 #endif
 
@@ -394,7 +394,7 @@
 extern const char kEnableWaylandServer[];
 #endif
 
-#if defined(OS_WIN) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_BSD)
 extern const char kEnableInputImeAPI[];
 extern const char kDisableInputImeAPI[];
 #endif
