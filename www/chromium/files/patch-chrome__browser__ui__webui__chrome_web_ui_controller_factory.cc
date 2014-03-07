--- ./chrome/browser/ui/webui/chrome_web_ui_controller_factory.cc.orig	2014-03-04 03:17:09.000000000 +0100
+++ ./chrome/browser/ui/webui/chrome_web_ui_controller_factory.cc	2014-03-07 14:10:32.000000000 +0100
@@ -459,7 +459,7 @@
       url.host() == chrome::kChromeUIMemoryRedirectHost ||
       url.host() == chrome::kChromeUIStatsHost ||
       url.host() == chrome::kChromeUITermsHost
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
       || url.host() == chrome::kChromeUILinuxProxyConfigHost
       || url.host() == chrome::kChromeUISandboxHost
 #endif
