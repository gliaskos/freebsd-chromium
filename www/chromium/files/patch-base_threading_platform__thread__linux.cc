--- base/threading/platform_thread_linux.cc.orig	2016-10-06 04:02:08.000000000 +0300
+++ base/threading/platform_thread_linux.cc	2016-10-13 04:35:48.238006000 +0300
@@ -19,7 +19,9 @@
 
 #if !defined(OS_NACL)
 #include <pthread.h>
+#if !defined(OS_BSD)
 #include <sys/prctl.h>
+#endif
 #include <sys/resource.h>
 #include <sys/time.h>
 #include <sys/types.h>
@@ -110,7 +112,7 @@
   ThreadIdNameManager::GetInstance()->SetName(CurrentId(), name);
   tracked_objects::ThreadData::InitializeThreadContext(name);
 
-#if !defined(OS_NACL)
+#if !defined(OS_NACL) && !defined(OS_BSD)
   // On linux we can get the thread names to show up in the debugger by setting
   // the process name for the LWP.  We don't want to do this for the main
   // thread because that would rename the process, causing tools like killall
