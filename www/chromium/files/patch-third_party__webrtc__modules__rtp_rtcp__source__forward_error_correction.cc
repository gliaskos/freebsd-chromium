--- ./third_party/webrtc/modules/rtp_rtcp/source/forward_error_correction.cc.orig	2014-03-04 03:18:44.000000000 +0100
+++ ./third_party/webrtc/modules/rtp_rtcp/source/forward_error_correction.cc	2014-03-07 14:10:36.000000000 +0100
@@ -15,6 +15,7 @@
 #include <string.h>
 
 #include <algorithm>
+#include <cstdlib>
 #include <iterator>
 
 #include "webrtc/modules/rtp_rtcp/source/forward_error_correction_internal.h"
