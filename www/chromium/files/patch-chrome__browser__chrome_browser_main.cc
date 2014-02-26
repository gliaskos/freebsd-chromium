--- ./chrome/browser/chrome_browser_main.cc.orig	2014-02-20 21:27:48.000000000 +0100
+++ ./chrome/browser/chrome_browser_main.cc	2014-02-24 17:23:44.000000000 +0100
@@ -980,7 +980,7 @@
   }
 #endif
 
-#if defined(OS_LINUX) || defined(OS_OPENBSD) || defined(OS_MACOSX)
+#if defined(OS_LINUX) || defined(OS_BSD) || defined(OS_MACOSX)
   // Set the product channel for crash reports.
   base::debug::SetCrashKeyValue(crash_keys::kChannel,
       chrome::VersionInfo::GetVersionStringModifier());
