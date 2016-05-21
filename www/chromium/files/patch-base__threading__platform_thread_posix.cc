--- base/threading/platform_thread_posix.cc.orig	Sat Apr 16 14:48:22 2016
+++ base/threading/platform_thread_posix.cc	Sat Apr 16 14:48:26 2016
@@ -53,7 +53,7 @@
     if (!thread_params->joinable)
       base::ThreadRestrictions::SetSingletonAllowed(false);
 
-#if !defined(OS_NACL)
+#if !defined(OS_NACL) && !defined(OS_BSD)
     // Threads on linux/android may inherit their priority from the thread
     // where they were created. This explicitly sets the priority of all new
     // threads.
