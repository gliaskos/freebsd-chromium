--- ./base/process/memory_unittest.cc.orig	2014-02-20 21:28:45.000000000 +0100
+++ ./base/process/memory_unittest.cc	2014-02-24 17:23:44.000000000 +0100
@@ -153,12 +153,12 @@
 
 // Android doesn't implement set_new_handler, so we can't use the
 // OutOfMemoryTest cases.
-// OpenBSD does not support these tests either.
+// OpenBSD and FreeBSD does not support these tests either.
 // AddressSanitizer and ThreadSanitizer define the malloc()/free()/etc.
 // functions so that they don't crash if the program is out of memory, so the
 // OOM tests aren't supposed to work.
 // TODO(vandebo) make this work on Windows too.
-#if !defined(OS_ANDROID) && !defined(OS_OPENBSD) && \
+#if !defined(OS_ANDROID) && !defined(OS_BSD) && \
     !defined(OS_WIN) && \
     !defined(ADDRESS_SANITIZER) && !defined(THREAD_SANITIZER)
 
@@ -374,5 +374,5 @@
 #endif  // !ARCH_CPU_64_BITS
 #endif  // OS_MACOSX
 
-#endif  // !defined(OS_ANDROID) && !defined(OS_OPENBSD) &&
+#endif  // !defined(OS_ANDROID) && !defined(OS_BSD) &&
         // !defined(OS_WIN) && !defined(ADDRESS_SANITIZER)
