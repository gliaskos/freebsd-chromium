--- chrome/browser/ui/aura/chrome_browser_main_extra_parts_aura.cc.orig	2016-02-06 12:30:56 UTC
+++ chrome/browser/ui/aura/chrome_browser_main_extra_parts_aura.cc
@@ -19,7 +19,7 @@
 #include "ui/gfx/screen.h"
 #include "ui/views/widget/native_widget_aura.h"
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if defined(OS_LINUX) && !defined(OS_CHROMEOS) || defined(OS_BSD)
 #include "base/prefs/pref_service.h"
 #include "chrome/browser/profiles/profile.h"
 #include "chrome/common/pref_names.h"
@@ -140,7 +140,7 @@ void ChromeBrowserMainExtraPartsAura::Pr
 }
 
 void ChromeBrowserMainExtraPartsAura::PreProfileInit() {
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
   // Now that we have some minimal ui initialized, check to see if we're
   // running as root and bail if we are.
   DetectRunningAsRoot();
@@ -154,7 +154,7 @@ void ChromeBrowserMainExtraPartsAura::Po
   // after the metrics service is deleted.
 }
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
 void ChromeBrowserMainExtraPartsAura::DetectRunningAsRoot() {
   if (getuid() == 0) {
     const base::CommandLine& command_line =
