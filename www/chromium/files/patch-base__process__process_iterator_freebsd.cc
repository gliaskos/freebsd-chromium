--- ./base/process/process_iterator_freebsd.cc.orig	2014-07-15 21:01:12.000000000 +0200
+++ ./base/process/process_iterator_freebsd.cc	2014-07-20 18:13:07.000000000 +0200
@@ -8,6 +8,10 @@
 #include <sys/sysctl.h>
 #include <unistd.h>
 
+/* getuid() */
+#include <unistd.h>
+#include <sys/types.h>
+
 #include "base/logging.h"
 #include "base/strings/string_util.h"
 
