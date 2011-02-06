--- ./base/debug/debugger_posix.cc.orig	2011-01-29 10:49:09.000000000 +0100
+++ ./base/debug/debugger_posix.cc	2011-02-05 10:59:45.000000000 +0100
@@ -11,6 +11,7 @@
 #include <sys/stat.h>
 #include <sys/sysctl.h>
 #include <sys/types.h>
+#include <sys/user.h>
 #include <unistd.h>
 
 #include <string>
@@ -47,7 +48,7 @@
   return false;
 }
 
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD)
 
 // Based on Apple's recommended method as described in
 // http://developer.apple.com/qa/qa2004/qa1361.html
@@ -85,7 +86,11 @@
 
   // This process is being debugged if the P_TRACED flag is set.
   is_set = true;
+#if defined(OS_FREEBSD)
+  being_debugged = (info.ki_flag & P_TRACED) != 0;
+#else
   being_debugged = (info.kp_proc.p_flag & P_TRACED) != 0;
+#endif
   return being_debugged;
 }
 
@@ -124,16 +129,7 @@
   pid_index += tracer.size();
   return pid_index < status.size() && status[pid_index] != '0';
 }
-
-#elif defined(OS_FREEBSD)
-
-bool DebugUtil::BeingDebugged() {
-  // TODO(benl): can we determine this under FreeBSD?
-  NOTIMPLEMENTED();
-  return false;
-}
-
-#endif  // defined(OS_FREEBSD)
+#endif
 
 // We want to break into the debugger in Debug mode, and cause a crash dump in
 // Release mode. Breakpad behaves as follows:
