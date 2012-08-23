--- ./third_party/ots/include/opentype-sanitiser.h.orig	2012-08-17 03:03:47.000000000 +0200
+++ ./third_party/ots/include/opentype-sanitiser.h	2012-08-23 22:31:45.000000000 +0200
@@ -22,6 +22,7 @@
 #else
 #include <arpa/inet.h>
 #include <stdint.h>
+#include <sys/types.h>
 #endif
 
 #include <algorithm>  // for std::min
