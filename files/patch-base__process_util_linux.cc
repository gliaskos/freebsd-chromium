--- base/process_util_linux.cc.orig	2011-03-20 22:02:04.376737404 +0200
+++ base/process_util_linux.cc	2011-03-20 22:02:04.489744784 +0200
@@ -15,6 +15,12 @@
 #include <time.h>
 #include <unistd.h>
 
+#if defined(OS_FREEBSD)
+#include <sys/user.h>
+#include <sys/types.h>
+#include <sys/sysctl.h>
+#endif
+
 #include "base/file_util.h"
 #include "base/logging.h"
 #include "base/string_number_conversions.h"
@@ -75,7 +81,7 @@
 ProcessId GetParentProcessId(ProcessHandle process) {
   // Synchronously reading files in /proc is safe.
   base::ThreadRestrictions::ScopedAllowIO allow_io;
-
+#if defined(OS_LINUX)
   FilePath stat_file("/proc");
   stat_file = stat_file.Append(base::IntToString(process));
   stat_file = stat_file.Append("status");
@@ -103,6 +109,14 @@
         break;
     }
   }
+#elif defined(OS_FREEBSD)
+  struct kinfo_proc info;
+  int mib[4] = { CTL_KERN, KERN_PROC, KERN_PROC_PID, process };
+
+  size_t size = sizeof(info);
+  if (sysctl(mib, 4, &info, &size, NULL, 0) == 0)
+      return info.ki_ppid;  
+#endif
   NOTREACHED();
   return -1;
 }
