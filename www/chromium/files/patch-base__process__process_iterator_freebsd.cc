--- base/process/process_iterator_freebsd.cc.orig	2014-09-04 00:04:10 UTC
+++ base/process/process_iterator_freebsd.cc
@@ -8,6 +8,10 @@
 #include <sys/sysctl.h>
 #include <unistd.h>
 
+/* getuid() */
+#include <unistd.h>
+#include <sys/types.h>
+
 #include "base/logging.h"
 #include "base/strings/string_util.h"
 
