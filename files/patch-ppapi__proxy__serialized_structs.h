--- ./ppapi/proxy/serialized_structs.h.orig	2012-08-17 03:01:23.000000000 +0200
+++ ./ppapi/proxy/serialized_structs.h	2012-08-23 22:31:45.000000000 +0200
@@ -111,7 +111,7 @@
 
 #if defined(OS_WIN)
 typedef HANDLE ImageHandle;
-#elif defined(OS_MACOSX) || defined(OS_ANDROID)
+#elif defined(OS_MACOSX) || defined(OS_ANDROID) || defined(OS_FREEBSD)
 typedef base::SharedMemoryHandle ImageHandle;
 #else
 // On X Windows this is a SysV shared memory key.
