--- third_party/webrtc/system_wrappers/source/thread_posix.cc.orig	2015-04-19 17:26:21.000000000 +0200
+++ third_party/webrtc/system_wrappers/source/thread_posix.cc	2015-04-19 17:29:56.000000000 +0200
@@ -15,9 +15,11 @@
 #include <errno.h>
 #include <unistd.h>
 #ifdef WEBRTC_LINUX
+#if !defined(WEBRTC_BSD)
 #include <linux/unistd.h>
-#include <sched.h>
 #include <sys/prctl.h>
+#endif
+#include <sched.h>
 #include <sys/syscall.h>
 #include <sys/types.h>
 #endif
