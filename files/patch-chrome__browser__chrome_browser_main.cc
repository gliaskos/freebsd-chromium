--- ./chrome/browser/chrome_browser_main.cc.orig	2012-08-17 03:02:07.000000000 +0200
+++ ./chrome/browser/chrome_browser_main.cc	2012-08-23 22:31:43.000000000 +0200
@@ -1359,7 +1359,7 @@
   if (!parsed_command_line().HasSwitch(switches::kNoErrorDialogs))
     WarnAboutMinimumSystemRequirements();
 
-#if defined(OS_LINUX) || defined(OS_OPENBSD) || defined(OS_MACOSX)
+#if defined(OS_LINUX) || defined(OS_BSD) || defined(OS_MACOSX)
   // Set the product channel for crash reports.
   child_process_logging::SetChannel(
       chrome::VersionInfo::GetVersionStringModifier());
