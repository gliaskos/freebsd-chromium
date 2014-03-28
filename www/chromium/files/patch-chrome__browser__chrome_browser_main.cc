--- ./chrome/browser/chrome_browser_main.cc.orig	2014-03-26 21:15:57.000000000 +0100
+++ ./chrome/browser/chrome_browser_main.cc	2014-03-28 10:57:59.000000000 +0100
@@ -973,7 +973,7 @@
   }
 #endif
 
-#if defined(OS_LINUX) || defined(OS_OPENBSD) || defined(OS_MACOSX)
+#if defined(OS_LINUX) || defined(OS_BSD) || defined(OS_MACOSX)
   // Set the product channel for crash reports.
   base::debug::SetCrashKeyValue(crash_keys::kChannel,
       chrome::VersionInfo::GetVersionStringModifier());
