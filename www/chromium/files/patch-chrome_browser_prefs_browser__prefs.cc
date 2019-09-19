--- chrome/browser/prefs/browser_prefs.cc.orig	2019-09-09 21:55:10 UTC
+++ chrome/browser/prefs/browser_prefs.cc
@@ -347,7 +347,7 @@
 #endif
 
 #if defined(OS_WIN) || defined(OS_MACOSX) || \
-    (defined(OS_LINUX) && !defined(OS_CHROMEOS))
+    (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 #include "chrome/browser/browser_switcher/browser_switcher_prefs.h"
 #endif
 
@@ -909,7 +909,7 @@ void RegisterProfilePrefs(user_prefs::PrefRegistrySync
 #endif
 
 #if defined(OS_WIN) || defined(OS_MACOSX) || \
-    (defined(OS_LINUX) && !defined(OS_CHROMEOS))
+    (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
   browser_switcher::BrowserSwitcherPrefs::RegisterProfilePrefs(registry);
 #endif
 
