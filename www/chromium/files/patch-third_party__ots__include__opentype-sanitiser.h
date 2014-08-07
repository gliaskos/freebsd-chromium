--- ./third_party/ots/include/opentype-sanitiser.h.orig	2014-07-15 21:03:48.000000000 +0200
+++ ./third_party/ots/include/opentype-sanitiser.h	2014-07-20 18:13:09.000000000 +0200
@@ -22,6 +22,7 @@
 #else
 #include <arpa/inet.h>
 #include <stdint.h>
+#include <sys/types.h>
 #endif
 
 #include <algorithm>  // for std::min
