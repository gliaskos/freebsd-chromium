--- ./chrome/browser/chrome_browser_main.cc.orig	2014-03-12 20:22:03.000000000 +0100
+++ ./chrome/browser/chrome_browser_main.cc	2014-03-14 09:23:25.000000000 +0100
@@ -972,7 +972,7 @@
   }
 #endif
 
-#if defined(OS_LINUX) || defined(OS_OPENBSD) || defined(OS_MACOSX)
+#if defined(OS_LINUX) || defined(OS_BSD) || defined(OS_MACOSX)
   // Set the product channel for crash reports.
   base::debug::SetCrashKeyValue(crash_keys::kChannel,
       chrome::VersionInfo::GetVersionStringModifier());
