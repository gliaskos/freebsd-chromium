--- ./third_party/webrtc/modules/rtp_rtcp/source/forward_error_correction.cc.orig	2014-02-20 21:29:40.000000000 +0100
+++ ./third_party/webrtc/modules/rtp_rtcp/source/forward_error_correction.cc	2014-02-24 17:23:45.000000000 +0100
@@ -15,6 +15,7 @@
 #include <string.h>
 
 #include <algorithm>
+#include <cstdlib>
 #include <iterator>
 
 #include "webrtc/modules/rtp_rtcp/source/forward_error_correction_internal.h"
