--- base/trace_event/process_memory_dump.h.orig	2016-05-11 15:02:11.000000000 -0400
+++ base/trace_event/process_memory_dump.h	2016-05-19 19:43:54.637985000 -0400
@@ -25,7 +25,7 @@
 // resident memory.
 // TODO(crbug.com/542671): COUNT_RESIDENT_BYTES_SUPPORTED is disabled on iOS
 // as it cause memory corruption on iOS 9.0+ devices.
-#if (defined(OS_POSIX) && !defined(OS_NACL) && !defined(OS_IOS)) || \
+#if (defined(OS_POSIX) && !defined(OS_NACL) && !defined(OS_IOS) && !defined(OS_BSD)) || \
     defined(OS_WIN)
 #define COUNT_RESIDENT_BYTES_SUPPORTED
 #endif
