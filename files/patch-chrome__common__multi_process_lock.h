--- ./chrome/common/multi_process_lock.h.orig	2010-12-13 12:04:46.000000000 +0100
+++ ./chrome/common/multi_process_lock.h	2011-01-07 14:17:10.000000000 +0100
@@ -18,7 +18,7 @@
   // The length of a multi-process lock name is limited on Linux, so
   // it is limited it on all platforms for consistency. This length does
   // not include a terminator.
-  static const size_t MULTI_PROCESS_LOCK_NAME_MAX_LEN = 106;
+  static const size_t MULTI_PROCESS_LOCK_NAME_MAX_LEN = 102;
 
   // Factory method for creating a multi-process lock.
   // |name| is the name of the lock. The name has special meaning on Windows
