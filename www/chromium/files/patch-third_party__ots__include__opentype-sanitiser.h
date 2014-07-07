--- ./third_party/ots/include/opentype-sanitiser.h.orig	2014-06-30 21:03:35.000000000 +0200
+++ ./third_party/ots/include/opentype-sanitiser.h	2014-07-07 15:12:51.000000000 +0200
@@ -22,6 +22,7 @@
 #else
 #include <arpa/inet.h>
 #include <stdint.h>
+#include <sys/types.h>
 #endif
 
 #include <algorithm>  // for std::min
