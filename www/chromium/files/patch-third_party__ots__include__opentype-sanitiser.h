--- ./third_party/ots/include/opentype-sanitiser.h.orig	2014-02-20 21:29:14.000000000 +0100
+++ ./third_party/ots/include/opentype-sanitiser.h	2014-02-24 17:23:45.000000000 +0100
@@ -22,6 +22,7 @@
 #else
 #include <arpa/inet.h>
 #include <stdint.h>
+#include <sys/types.h>
 #endif
 
 #include <algorithm>  // for std::min
