--- ./chrome/browser/chrome_browser_main.cc.orig	2014-03-04 03:17:18.000000000 +0100
+++ ./chrome/browser/chrome_browser_main.cc	2014-03-07 14:10:32.000000000 +0100
@@ -980,7 +980,7 @@
   }
 #endif
 
-#if defined(OS_LINUX) || defined(OS_OPENBSD) || defined(OS_MACOSX)
+#if defined(OS_LINUX) || defined(OS_BSD) || defined(OS_MACOSX)
   // Set the product channel for crash reports.
   base::debug::SetCrashKeyValue(crash_keys::kChannel,
       chrome::VersionInfo::GetVersionStringModifier());
