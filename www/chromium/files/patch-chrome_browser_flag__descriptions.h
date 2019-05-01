--- chrome/browser/flag_descriptions.h.orig	2019-04-30 22:22:33 UTC
+++ chrome/browser/flag_descriptions.h
@@ -2100,12 +2100,12 @@ extern const char kAshNotificationStackingBarRedesignD
 
 // Random platform combinations -----------------------------------------------
 
-#if defined(OS_WIN) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_BSD)
 
 extern const char kEnableInputImeApiName[];
 extern const char kEnableInputImeApiDescription[];
 
-#endif  // defined(OS_WIN) || defined(OS_LINUX)
+#endif  // defined(OS_WIN) || defined(OS_LINUX) || defined(OS_BSD)
 
 #if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_CHROMEOS)
 
@@ -2124,12 +2124,12 @@ extern const char kAutomaticTabDiscardingDescription[]
 
 #endif  // defined(OS_WIN) || defined(OS_MACOSX)
 
-#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD)
 
 extern const char kDirectManipulationStylusName[];
 extern const char kDirectManipulationStylusDescription[];
 
-#endif  // defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX)
+#endif  // defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD)
 
 #if defined(OS_MACOSX) || defined(OS_CHROMEOS)
 
