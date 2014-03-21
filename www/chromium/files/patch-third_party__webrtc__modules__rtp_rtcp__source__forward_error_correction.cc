--- ./third_party/webrtc/modules/rtp_rtcp/source/forward_error_correction.cc.orig	2014-03-19 20:04:09.000000000 +0100
+++ ./third_party/webrtc/modules/rtp_rtcp/source/forward_error_correction.cc	2014-03-21 00:27:13.000000000 +0100
@@ -15,6 +15,7 @@
 #include <string.h>
 
 #include <algorithm>
+#include <cstdlib>
 #include <iterator>
 
 #include "webrtc/modules/rtp_rtcp/interface/rtp_rtcp_defines.h"
