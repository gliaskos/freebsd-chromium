--- ./third_party/webrtc/modules/rtp_rtcp/source/forward_error_correction.cc.orig	2014-03-26 21:17:08.000000000 +0100
+++ ./third_party/webrtc/modules/rtp_rtcp/source/forward_error_correction.cc	2014-03-28 10:57:59.000000000 +0100
@@ -15,6 +15,7 @@
 #include <string.h>
 
 #include <algorithm>
+#include <cstdlib>
 #include <iterator>
 
 #include "webrtc/modules/rtp_rtcp/interface/rtp_rtcp_defines.h"
