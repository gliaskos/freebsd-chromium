--- chrome/browser/ui/aura/chrome_browser_main_extra_parts_aura.h.orig	2016-02-06 12:30:56 UTC
+++ chrome/browser/ui/aura/chrome_browser_main_extra_parts_aura.h
@@ -25,7 +25,7 @@ class ChromeBrowserMainExtraPartsAura : 
   void PostMainMessageLoopRun() override;
 
  private:
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
   // On the Linux desktop, we want to prevent the user from logging in as root,
   // so that we don't destroy the profile.
   void DetectRunningAsRoot();
