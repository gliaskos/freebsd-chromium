--- ./base/process/process_iterator.h.orig	2014-03-26 21:14:52.000000000 +0100
+++ ./base/process/process_iterator.h	2014-03-28 10:57:59.000000000 +0100
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
