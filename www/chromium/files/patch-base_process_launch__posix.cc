--- base/process/launch_posix.cc.orig	2017-02-02 02:02:47 UTC
+++ base/process/launch_posix.cc
@@ -64,6 +64,7 @@
 #include "base/feature_list.h"
 #else
 extern char** environ;
+#pragma weak environ
 #endif
 
 namespace base {
