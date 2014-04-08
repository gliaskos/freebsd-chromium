--- ./third_party/ots/include/opentype-sanitiser.h.orig	2014-04-02 21:05:39.000000000 +0200
+++ ./third_party/ots/include/opentype-sanitiser.h	2014-04-04 01:39:19.000000000 +0200
@@ -22,6 +22,7 @@
 #else
 #include <arpa/inet.h>
 #include <stdint.h>
+#include <sys/types.h>
 #endif
 
 #include <algorithm>  // for std::min
