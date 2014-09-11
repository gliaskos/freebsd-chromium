--- third_party/webrtc/base/stringutils.h.orig	2014-09-11 08:59:25.000000000 +0200
+++ third_party/webrtc/base/stringutils.h	2014-09-11 13:32:35.000000000 +0200
@@ -23,11 +23,11 @@
 #endif  // WEBRTC_WIN 
 
 #if defined(WEBRTC_POSIX)
-#ifdef BSD
+#if defined(WEBRTC_BSD) || defined(BSD)
 #include <stdlib.h>
-#else  // BSD
+#else  // WEBRTC_BSD
 #include <alloca.h>
-#endif  // !BSD
+#endif  // !WEBRTC_BSD
 #endif  // WEBRTC_POSIX
 
 #include <string>
