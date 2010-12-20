--- ./webkit/glue/webkitclient_impl.cc.orig	2010-12-13 12:03:08.000000000 +0100
+++ ./webkit/glue/webkitclient_impl.cc	2010-12-20 20:41:38.000000000 +0100
@@ -40,7 +40,7 @@
 #include "webkit/glue/websocketstreamhandle_impl.h"
 #include "webkit/glue/weburlloader_impl.h"
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 #include "v8/include/v8.h"
 #endif
 
