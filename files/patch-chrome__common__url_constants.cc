--- ./chrome/common/url_constants.cc.orig	2012-08-17 03:02:26.000000000 +0200
+++ ./chrome/common/url_constants.cc	2012-08-23 22:31:43.000000000 +0200
@@ -197,7 +197,7 @@
 const char kChromeUIScreenshotPath[] = "screenshots";
 const char kChromeUIThemePath[] = "theme";
 
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
 const char kChromeUILinuxProxyConfigHost[] = "linux-proxy-config";
 const char kChromeUISandboxHost[] = "sandbox";
 #endif
