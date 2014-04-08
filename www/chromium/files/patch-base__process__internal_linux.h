--- ./base/process/internal_linux.h.orig	2014-04-02 21:03:56.000000000 +0200
+++ ./base/process/internal_linux.h	2014-04-04 01:39:18.000000000 +0200
@@ -12,6 +12,8 @@
 
 #include "base/files/file_path.h"
 
+#include <unistd.h> /* pid_t */
+
 namespace base {
 
 class Time;
