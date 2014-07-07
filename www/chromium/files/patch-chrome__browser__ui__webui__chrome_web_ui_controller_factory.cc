--- ./chrome/browser/ui/webui/chrome_web_ui_controller_factory.cc.orig	2014-06-30 21:02:13.000000000 +0200
+++ ./chrome/browser/ui/webui/chrome_web_ui_controller_factory.cc	2014-07-01 22:46:25.000000000 +0200
@@ -488,7 +488,7 @@
       url.host() == chrome::kChromeUIMemoryRedirectHost ||
       url.host() == chrome::kChromeUIStatsHost ||
       url.host() == chrome::kChromeUITermsHost
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
       || url.host() == chrome::kChromeUILinuxProxyConfigHost
       || url.host() == chrome::kChromeUISandboxHost
 #endif
