--- ./third_party/ots/include/opentype-sanitiser.h.orig	2014-03-05 22:26:15.000000000 +0100
+++ ./third_party/ots/include/opentype-sanitiser.h	2014-03-07 23:57:27.000000000 +0100
@@ -22,6 +22,7 @@
 #else
 #include <arpa/inet.h>
 #include <stdint.h>
+#include <sys/types.h>
 #endif
 
 #include <algorithm>  // for std::min
