--- chrome/common/url_constants.h.orig Sat May 23 00:59:48 2015
+++ chrome/common/url_constants.h	Sat May 23 01:08:45 2015
@@ -132,7 +132,7 @@ extern const char kChromeUISalsaURL[];
 extern const char kChromeUISalsaHost[];
 #endif
 
-#if (defined(OS_LINUX) && defined(TOOLKIT_VIEWS)) || defined(USE_AURA)
+#if ((defined(OS_BSD) || defined(OS_LINUX)) && defined(TOOLKIT_VIEWS)) || defined(USE_AURA)
 extern const char kChromeUITabModalConfirmDialogURL[];
 #endif
 
@@ -308,7 +308,7 @@ extern const char kChromeOSAssetHost[];
 extern const char kChromeOSAssetPath[];
 #endif
 
-#if (defined(OS_LINUX) && defined(TOOLKIT_VIEWS)) || defined(USE_AURA)
+#if ((defined(OS_BSD) || defined(OS_LINUX)) && defined(TOOLKIT_VIEWS)) || defined(USE_AURA)
 extern const char kChromeUITabModalConfirmDialogHost[];
 #endif
 
