--- chrome/common/url_constants.cc.orig	Sat May 23 00:59:48 2015
+++ chrome/common/url_constants.cc	Sat May 23 01:08:33 2015
@@ -139,7 +139,7 @@ const char kChromeUISalsaURL[] = "chrome://salsa/";
 const char kChromeUISalsaHost[] = "salsa";
 #endif
 
-#if (defined(OS_LINUX) && defined(TOOLKIT_VIEWS)) || defined(USE_AURA)
+#if ((defined(OS_BSD) || defined(OS_LINUX)) && defined(TOOLKIT_VIEWS)) || defined(USE_AURA)
 const char kChromeUITabModalConfirmDialogURL[] =
     "chrome://tab-modal-confirm-dialog/";
 #endif
@@ -322,7 +322,7 @@ const char kChromeOSAssetHost[] = "chromeos-asset";
 const char kChromeOSAssetPath[] = "/usr/share/chromeos-assets/";
 #endif
 
-#if (defined(OS_LINUX) && defined(TOOLKIT_VIEWS)) || defined(USE_AURA)
+#if ((defined(OS_BSD) || defined(OS_LINUX)) && defined(TOOLKIT_VIEWS)) || defined(USE_AURA)
 const char kChromeUITabModalConfirmDialogHost[] = "tab-modal-confirm-dialog";
 #endif
 
