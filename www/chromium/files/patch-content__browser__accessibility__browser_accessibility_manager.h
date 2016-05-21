--- content/browser/accessibility/browser_accessibility_manager.h.orig	2016-05-21 07:59:58.672299000 -0400
+++ content/browser/accessibility/browser_accessibility_manager.h	2016-05-21 08:00:33.351867000 -0400
@@ -31,7 +31,7 @@
 class BrowserAccessibilityManagerAndroid;
 #elif defined(OS_WIN)
 class BrowserAccessibilityManagerWin;
-#elif defined(OS_LINUX) && !defined(OS_CHROMEOS) && defined(USE_X11)
+#elif (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS) && defined(USE_X11)
 class BrowserAccessibilityManagerAuraLinux;
 #endif
 
@@ -244,7 +244,7 @@
   BrowserAccessibilityManagerAndroid* ToBrowserAccessibilityManagerAndroid();
 #endif
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS) && defined(USE_X11)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS) && defined(USE_X11)
   BrowserAccessibilityManagerAuraLinux*
       ToBrowserAccessibilityManagerAuraLinux();
 #endif
