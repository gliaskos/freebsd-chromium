--- ./v8/src/base/platform/platform-posix.cc.orig	2014-09-09 21:47:17.000000000 +0200
+++ ./v8/src/base/platform/platform-posix.cc	2014-09-09 21:59:34.000000000 +0200
@@ -324,7 +324,9 @@
 #if defined(ANDROID)
   return static_cast<int>(syscall(__NR_gettid));
 #else
+#ifdef HAVE_SYSCALL_H
   return static_cast<int>(syscall(SYS_gettid));
+#endif
 #endif  // defined(ANDROID)
 }
 
