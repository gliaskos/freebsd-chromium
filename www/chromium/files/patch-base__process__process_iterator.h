--- ./base/process/process_iterator.h.orig	2014-04-02 21:03:56.000000000 +0200
+++ ./base/process/process_iterator.h	2014-04-04 01:39:18.000000000 +0200
@@ -21,6 +21,11 @@
 #include <windows.h>
 #include <tlhelp32.h>
 #elif defined(OS_MACOSX) || defined(OS_BSD)
+#if defined(OS_BSD)
+#include <kvm.h>
+#include <sys/param.h>
+#include <sys/user.h>
+#endif
 #include <sys/sysctl.h>
 #elif defined(OS_POSIX)
 #include <dirent.h>
