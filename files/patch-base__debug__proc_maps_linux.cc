--- base/debug/proc_maps_linux.cc.orig	2015-04-15 20:56:05.898658000 -0400
+++ base/debug/proc_maps_linux.cc	2015-04-15 20:53:54.045248000 -0400
@@ -6,7 +6,7 @@
 
 #include <fcntl.h>
 
-#if defined(OS_LINUX) || defined(OS_ANDROID)
+#if defined(OS_LINUX) || defined(OS_ANDROID) || defined(OS_BSD)
 #include <inttypes.h>
 #endif
 
