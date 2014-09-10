--- base/process/internal_linux.h.orig	2014-09-04 00:04:10 UTC
+++ base/process/internal_linux.h
@@ -12,6 +12,8 @@
 
 #include "base/files/file_path.h"
 
+#include <unistd.h> /* pid_t */
+
 namespace base {
 
 class Time;
