--- ./base/process/process_iterator_freebsd.cc.orig	2014-03-04 03:16:26.000000000 +0100
+++ ./base/process/process_iterator_freebsd.cc	2014-03-07 14:10:31.000000000 +0100
@@ -6,6 +6,10 @@
 
 #include <sys/sysctl.h>
 
+/* getuid() */
+#include <unistd.h>
+#include <sys/types.h>
+
 #include "base/logging.h"
 #include "base/strings/string_util.h"
 
