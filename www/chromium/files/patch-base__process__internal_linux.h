--- ./base/process/internal_linux.h.orig	2014-06-30 21:01:38.000000000 +0200
+++ ./base/process/internal_linux.h	2014-07-01 22:46:25.000000000 +0200
@@ -12,6 +12,8 @@
 
 #include "base/files/file_path.h"
 
+#include <unistd.h> /* pid_t */
+
 namespace base {
 
 class Time;
