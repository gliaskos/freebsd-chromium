--- ./base/process/process_iterator_freebsd.cc.orig	2014-03-26 21:14:52.000000000 +0100
+++ ./base/process/process_iterator_freebsd.cc	2014-03-28 10:57:59.000000000 +0100
@@ -6,6 +6,10 @@
 
 #include <sys/sysctl.h>
 
+/* getuid() */
+#include <unistd.h>
+#include <sys/types.h>
+
 #include "base/logging.h"
 #include "base/strings/string_util.h"
 
