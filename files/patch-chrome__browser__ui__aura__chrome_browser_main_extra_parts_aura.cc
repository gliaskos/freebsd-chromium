--- chrome/browser/ui/aura/chrome_browser_main_extra_parts_aura.cc.orig	2015-01-26 10:30:44
+++ chrome/browser/ui/aura/chrome_browser_main_extra_parts_aura.cc
@@ -69,7 +69,7 @@
       command_line->HasSwitch(switches::kViewerLaunchViaAppId)) {
     return chrome::HOST_DESKTOP_TYPE_ASH;
   }
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_BSD)
   const base::CommandLine* command_line =
       base::CommandLine::ForCurrentProcess();
   if (command_line->HasSwitch(switches::kOpenAsh))
@@ -130,7 +130,7 @@
 }
 
 void ChromeBrowserMainExtraPartsAura::PreProfileInit() {
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
   // Now that we have some minimal ui initialized, check to see if we're
   // running as root and bail if we are.
   DetectRunningAsRoot();
@@ -144,7 +144,7 @@
   // after the metrics service is deleted.
 }
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
 void ChromeBrowserMainExtraPartsAura::DetectRunningAsRoot() {
   if (getuid() == 0) {
     const base::CommandLine& command_line =
