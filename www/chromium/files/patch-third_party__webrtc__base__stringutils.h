--- third_party/webrtc/base/stringutils.h.orig	2014-09-04 00:29:43 UTC
+++ third_party/webrtc/base/stringutils.h
@@ -23,11 +23,11 @@
 #endif  // WEBRTC_WIN 
 
 #if defined(WEBRTC_POSIX)
-#ifdef BSD
+#ifdef WEBRTC_BSD
 #include <stdlib.h>
-#else  // BSD
+#else  // WEBRTC_BSD
 #include <alloca.h>
-#endif  // !BSD
+#endif  // !WEBRTC_BSD
 #endif  // WEBRTC_POSIX
 
 #include <string>
