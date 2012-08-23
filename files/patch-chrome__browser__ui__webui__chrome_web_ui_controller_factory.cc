--- ./chrome/browser/ui/webui/chrome_web_ui_controller_factory.cc.orig	2012-08-17 03:02:04.000000000 +0200
+++ ./chrome/browser/ui/webui/chrome_web_ui_controller_factory.cc	2012-08-23 22:31:43.000000000 +0200
@@ -321,7 +321,7 @@
       url.host() == chrome::kChromeUIStatsHost ||
       url.host() == chrome::kChromeUITermsHost ||
       url.host() == chrome::kChromeUIVersionHost
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
       || url.host() == chrome::kChromeUILinuxProxyConfigHost
       || url.host() == chrome::kChromeUISandboxHost
 #endif
