--- ./chrome/browser/ui/startup/startup_browser_creator.cc.orig	2014-06-30 21:02:16.000000000 +0200
+++ ./chrome/browser/ui/startup/startup_browser_creator.cc	2014-07-17 19:39:45.000000000 +0200
@@ -81,7 +81,7 @@
 #include "chromeos/chromeos_switches.h"
 #endif
 
-#if defined(TOOLKIT_VIEWS) && defined(OS_LINUX)
+#if defined(TOOLKIT_VIEWS) && (defined(OS_LINUX) || defined(OS_FREEBSD))
 #include "ui/events/x/touch_factory_x11.h"
 #endif
 
