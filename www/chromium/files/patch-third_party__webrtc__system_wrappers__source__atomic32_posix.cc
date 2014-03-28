--- ./third_party/webrtc/system_wrappers/source/atomic32_posix.cc.orig	2014-03-26 21:17:10.000000000 +0100
+++ ./third_party/webrtc/system_wrappers/source/atomic32_posix.cc	2014-03-28 10:57:59.000000000 +0100
@@ -12,7 +12,11 @@
 
 #include <assert.h>
 #include <inttypes.h>
+#if defined(WEBRTC_BSD)
+#include <stdlib.h>
+#else
 #include <malloc.h>
+#endif
 
 #include "webrtc/common_types.h"
 
