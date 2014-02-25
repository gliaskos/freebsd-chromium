--- ./chrome/browser/web_applications/web_app.h.orig	2014-02-20 21:27:36.000000000 +0100
+++ ./chrome/browser/web_applications/web_app.h	2014-02-24 17:23:44.000000000 +0100
@@ -97,7 +97,7 @@
                   IconInfoList* icons);
 #endif
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 // Windows that correspond to web apps need to have a deterministic (and
 // different) WMClass than normal chrome windows so the window manager groups
 // them as a separate application.
