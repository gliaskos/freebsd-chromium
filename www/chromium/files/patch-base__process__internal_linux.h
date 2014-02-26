--- ./base/process/internal_linux.h.orig	2014-02-20 21:28:45.000000000 +0100
+++ ./base/process/internal_linux.h	2014-02-24 17:23:44.000000000 +0100
@@ -12,6 +12,8 @@
 
 #include "base/files/file_path.h"
 
+#include <unistd.h> /* pid_t */
+
 namespace base {
 
 class Time;
