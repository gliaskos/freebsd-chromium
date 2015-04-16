--- chrome/browser/ui/webui/chrome_web_ui_controller_factory.cc.orig	2015-01-21 20:28:16 UTC
+++ chrome/browser/ui/webui/chrome_web_ui_controller_factory.cc
@@ -252,7 +252,7 @@
 #if !defined(OS_ANDROID)
           || url.host() == chrome::kChromeUITermsHost
 #endif
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
           || url.host() == chrome::kChromeUILinuxProxyConfigHost
           || url.host() == chrome::kChromeUISandboxHost
 #endif
@@ -481,7 +481,7 @@
   if (url.host() == chrome::kChromeUINaClHost)
     return &NewWebUI<NaClUI>;
 #endif
-#if (defined(OS_LINUX) && defined(TOOLKIT_VIEWS)) || defined(USE_AURA)
+#if ((defined(OS_LINUX) || defined(OS_BSD)) && defined(TOOLKIT_VIEWS)) || defined(USE_AURA)
   if (url.host() == chrome::kChromeUITabModalConfirmDialogHost) {
     return &NewWebUI<ConstrainedWebDialogUI>;
   }
