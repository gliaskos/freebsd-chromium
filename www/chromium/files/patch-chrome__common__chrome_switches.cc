--- ./chrome/common/chrome_switches.cc.orig	2014-03-26 21:15:15.000000000 +0100
+++ ./chrome/common/chrome_switches.cc	2014-03-28 10:57:59.000000000 +0100
@@ -1587,7 +1587,7 @@
 const char kPasswordStore[]                 = "password-store";
 #endif
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_FREEBSD)) && !defined(OS_CHROMEOS)
 // Triggers migration of user data directory to another directory
 // specified as a parameter. The migration is done under singleton lock,
 // and sanity checks are made to avoid corrupting the profile.
@@ -1598,7 +1598,7 @@
 // Linux speech service. Because it's buggy, the user must explicitly
 // enable it so that visiting a random webpage can't cause instability.
 const char kEnableSpeechDispatcher[] = "enable-speech-dispatcher";
-#endif  // defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#endif  // (defined(OS_LINUX) || defined(OS_FREEBSD)) && !defined(OS_CHROMEOS)
 
 #if defined(OS_MACOSX)
 // Disables the creation and launch of app shims for platform apps.
