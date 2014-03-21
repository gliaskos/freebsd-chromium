--- ./base/process/internal_linux.h.orig	2014-03-19 20:01:55.000000000 +0100
+++ ./base/process/internal_linux.h	2014-03-21 00:27:12.000000000 +0100
@@ -12,6 +12,8 @@
 
 #include "base/files/file_path.h"
 
+#include <unistd.h> /* pid_t */
+
 namespace base {
 
 class Time;
