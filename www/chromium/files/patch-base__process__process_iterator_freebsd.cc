--- ./base/process/process_iterator_freebsd.cc.orig	2014-04-02 21:03:56.000000000 +0200
+++ ./base/process/process_iterator_freebsd.cc	2014-04-04 01:39:18.000000000 +0200
@@ -6,6 +6,10 @@
 
 #include <sys/sysctl.h>
 
+/* getuid() */
+#include <unistd.h>
+#include <sys/types.h>
+
 #include "base/logging.h"
 #include "base/strings/string_util.h"
 
