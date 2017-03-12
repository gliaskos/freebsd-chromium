--- base/threading/platform_thread_posix.cc.orig	2017-03-09 20:04:26 UTC
+++ base/threading/platform_thread_posix.cc
@@ -56,7 +56,7 @@ void* ThreadFunc(void* params) {
     if (!thread_params->joinable)
       base::ThreadRestrictions::SetSingletonAllowed(false);
 
-#if !defined(OS_NACL)
+#if !defined(OS_NACL) && !defined(OS_BSD)
     // Threads on linux/android may inherit their priority from the thread
     // where they were created. This explicitly sets the priority of all new
     // threads.
