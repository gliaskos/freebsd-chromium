--- ./chrome/common/chrome_switches.cc.orig	2014-02-20 21:27:53.000000000 +0100
+++ ./chrome/common/chrome_switches.cc	2014-02-24 17:23:44.000000000 +0100
@@ -1586,13 +1586,13 @@
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
 // Forcibly disables Lion-style on newer OSes, to allow developers to test the
