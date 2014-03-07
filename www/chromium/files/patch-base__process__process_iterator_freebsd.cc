--- ./base/process/process_iterator_freebsd.cc.orig	2014-03-05 22:24:30.000000000 +0100
+++ ./base/process/process_iterator_freebsd.cc	2014-03-07 23:57:25.000000000 +0100
@@ -6,6 +6,10 @@
 
 #include <sys/sysctl.h>
 
+/* getuid() */
+#include <unistd.h>
+#include <sys/types.h>
+
 #include "base/logging.h"
 #include "base/strings/string_util.h"
 
