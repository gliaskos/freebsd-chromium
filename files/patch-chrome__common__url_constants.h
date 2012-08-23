--- ./chrome/common/url_constants.h.orig	2012-08-17 03:02:26.000000000 +0200
+++ ./chrome/common/url_constants.h	2012-08-23 22:31:43.000000000 +0200
@@ -189,7 +189,7 @@
 extern const char kChromeUIScreenshotPath[];
 extern const char kChromeUIThemePath[];
 
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
 extern const char kChromeUILinuxProxyConfigHost[];
 extern const char kChromeUISandboxHost[];
 #endif
