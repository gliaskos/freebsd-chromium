--- ./base/process/process_iterator.h.orig	2014-03-19 20:01:55.000000000 +0100
+++ ./base/process/process_iterator.h	2014-03-21 00:27:12.000000000 +0100
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
