--- base/test/launcher/test_launcher.cc.orig	2014-09-04 00:29:09 UTC
+++ base/test/launcher/test_launcher.cc
@@ -45,6 +45,10 @@
 #include "base/win/windows_version.h"
 #endif
 
+#if defined(OS_FREEBSD)
+#include <signal.h>
+#endif
+
 namespace base {
 
 // Launches a child process using |command_line|. If the child process is still
