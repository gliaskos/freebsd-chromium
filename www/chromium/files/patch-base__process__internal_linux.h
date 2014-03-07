--- ./base/process/internal_linux.h.orig	2014-03-04 03:16:26.000000000 +0100
+++ ./base/process/internal_linux.h	2014-03-07 14:10:31.000000000 +0100
@@ -12,6 +12,8 @@
 
 #include "base/files/file_path.h"
 
+#include <unistd.h> /* pid_t */
+
 namespace base {
 
 class Time;
