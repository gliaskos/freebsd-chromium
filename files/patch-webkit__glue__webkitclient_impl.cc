--- webkit/glue/webkitclient_impl.cc.orig	2011-01-29 10:48:43.000000000 +0100
+++ webkit/glue/webkitclient_impl.cc	2011-02-04 21:04:29.000000000 +0100
@@ -40,7 +40,7 @@
 #include "webkit/glue/websocketstreamhandle_impl.h"
 #include "webkit/glue/weburlloader_impl.h"
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 #include "v8/include/v8.h"
 #endif
 
@@ -202,7 +202,7 @@
 }
 
 WebThemeEngine* WebKitClientImpl::themeEngine() {
-#if defined(OS_WIN) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_OPENBSD) || defined(OS_FREEBSD)
   return &theme_engine_;
 #else
   return NULL;
