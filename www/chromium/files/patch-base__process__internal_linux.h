--- ./base/process/internal_linux.h.orig	2014-03-05 22:24:30.000000000 +0100
+++ ./base/process/internal_linux.h	2014-03-07 23:57:25.000000000 +0100
@@ -12,6 +12,8 @@
 
 #include "base/files/file_path.h"
 
+#include <unistd.h> /* pid_t */
+
 namespace base {
 
 class Time;
