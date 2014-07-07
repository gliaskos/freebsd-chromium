--- ./chrome/browser/chrome_browser_main.cc.orig	2014-06-30 21:02:28.000000000 +0200
+++ ./chrome/browser/chrome_browser_main.cc	2014-07-01 22:46:25.000000000 +0200
@@ -926,7 +926,7 @@
   }
 #endif
 
-#if defined(OS_LINUX) || defined(OS_OPENBSD) || defined(OS_MACOSX)
+#if defined(OS_LINUX) || defined(OS_BSD) || defined(OS_MACOSX)
   // Set the product channel for crash reports.
   base::debug::SetCrashKeyValue(crash_keys::kChannel,
       chrome::VersionInfo::GetVersionStringModifier());
