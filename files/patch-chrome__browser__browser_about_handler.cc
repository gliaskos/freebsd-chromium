--- ./chrome/browser/browser_about_handler.cc.orig	2012-08-17 03:02:07.000000000 +0200
+++ ./chrome/browser/browser_about_handler.cc	2012-08-23 22:31:43.000000000 +0200
@@ -58,7 +58,7 @@
 #if defined(OS_WIN)
   chrome::kChromeUIConflictsHost,
 #endif
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
   chrome::kChromeUILinuxProxyConfigHost,
   chrome::kChromeUISandboxHost,
 #endif
