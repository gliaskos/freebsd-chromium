--- content/public/common/child_process_sandbox_support_linux.h.orig	2013-09-15 21:19:51.638730952 +0200
+++ content/public/common/child_process_sandbox_support_linux.h	2013-09-15 21:20:09.430726473 +0200
@@ -7,6 +7,7 @@
 
 #include <stdint.h>
 #include <string>
+#include <sys/types.h>
 
 #include "content/common/content_export.h"
 
