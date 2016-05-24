--- chrome/common/chrome_switches.h.orig	2016-05-11 19:02:17 UTC
+++ chrome/common/chrome_switches.h
@@ -323,7 +323,7 @@ extern const char kHelpShort[];
 extern const char kPasswordStore[];
 #endif
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_FREEBSD)) && !defined(OS_CHROMEOS)
 extern const char kMigrateDataDirForSxS[];
 #endif
 
@@ -394,7 +394,7 @@ extern const char kDisableNewTaskManager
 extern const char kEnableWaylandServer[];
 #endif
 
-#if defined(OS_WIN) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_BSD)
 extern const char kEnableInputImeAPI[];
 extern const char kDisableInputImeAPI[];
 #endif
