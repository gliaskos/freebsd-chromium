--- ./third_party/webrtc/system_wrappers/source/atomic32_posix.cc.orig	2014-03-04 03:18:45.000000000 +0100
+++ ./third_party/webrtc/system_wrappers/source/atomic32_posix.cc	2014-03-07 14:10:36.000000000 +0100
@@ -12,7 +12,11 @@
 
 #include <assert.h>
 #include <inttypes.h>
+#if defined(WEBRTC_BSD)
+#include <stdlib.h>
+#else
 #include <malloc.h>
+#endif
 
 #include "webrtc/common_types.h"
 
