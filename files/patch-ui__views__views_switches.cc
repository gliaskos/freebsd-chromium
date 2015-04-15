--- ui/views/views_switches.cc.orig	Wed Mar 11 07:51:36 2015
+++ ui/views/views_switches.cc	Wed Mar 11 07:51:44 2015
@@ -26,7 +26,7 @@
 #endif
 
 bool IsRectBasedTargetingEnabled() {
-#if defined(OS_CHROMEOS) || defined(OS_WIN) || defined(OS_LINUX)
+#if defined(OS_CHROMEOS) || defined(OS_WIN) || defined(OS_LINUX) || defined(OS_BSD)
   return !base::CommandLine::ForCurrentProcess()->HasSwitch(
       kDisableViewsRectBasedTargeting);
 #else
