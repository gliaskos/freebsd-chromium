--- ./third_party/ots/include/opentype-sanitiser.h.orig	2014-03-12 20:23:48.000000000 +0100
+++ ./third_party/ots/include/opentype-sanitiser.h	2014-03-14 09:23:25.000000000 +0100
@@ -22,6 +22,7 @@
 #else
 #include <arpa/inet.h>
 #include <stdint.h>
+#include <sys/types.h>
 #endif
 
 #include <algorithm>  // for std::min
