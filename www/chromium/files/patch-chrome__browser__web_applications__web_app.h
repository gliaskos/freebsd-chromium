--- ./chrome/browser/web_applications/web_app.h.orig	2014-03-05 22:24:39.000000000 +0100
+++ ./chrome/browser/web_applications/web_app.h	2014-03-07 23:57:26.000000000 +0100
@@ -97,7 +97,7 @@
                   IconInfoList* icons);
 #endif
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 // Windows that correspond to web apps need to have a deterministic (and
 // different) WMClass than normal chrome windows so the window manager groups
 // them as a separate application.
