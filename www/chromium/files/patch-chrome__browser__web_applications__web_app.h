--- ./chrome/browser/web_applications/web_app.h.orig	2014-07-15 21:01:17.000000000 +0200
+++ ./chrome/browser/web_applications/web_app.h	2014-07-20 18:13:08.000000000 +0200
@@ -188,7 +188,7 @@
                   IconInfoList* icons);
 #endif
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 // Windows that correspond to web apps need to have a deterministic (and
 // different) WMClass than normal chrome windows so the window manager groups
 // them as a separate application.
