--- chrome/common/chrome_switches.cc.orig	2016-05-11 15:02:17.000000000 -0400
+++ chrome/common/chrome_switches.cc	2016-05-21 12:02:57.576082000 -0400
@@ -1133,13 +1133,13 @@
 const char kPasswordStore[]                 = "password-store";
 #endif
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_FREEBSD)) && !defined(OS_CHROMEOS)
 // Triggers migration of user data directory to another directory
 // specified as a parameter. The migration is done under singleton lock,
 // and sanity checks are made to avoid corrupting the profile.
 // The browser exits after migration is complete.
 const char kMigrateDataDirForSxS[]          = "migrate-data-dir-for-sxs";
-#endif  // defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#endif  // (defined(OS_LINUX) || defined(OS_FREEBSD)) && !defined(OS_CHROMEOS)
 
 #if defined(OS_MACOSX)
 // Prevents Chrome from quitting when Chrome Apps are open.
@@ -1330,7 +1330,7 @@
     "tab-management-experiment-type-dill";
 #endif  // defined(OS_ANDROID)
 
-#if defined(OS_WIN) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_BSD)
 extern const char kEnableInputImeAPI[] = "enable-input-ime-api";
 extern const char kDisableInputImeAPI[] = "disable-input-ime-api";
 #endif
