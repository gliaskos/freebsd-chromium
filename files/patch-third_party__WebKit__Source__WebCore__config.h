--- ./third_party/WebKit/Source/WebCore/config.h.orig	2012-08-17 03:05:22.000000000 +0200
+++ ./third_party/WebKit/Source/WebCore/config.h	2012-08-23 22:31:45.000000000 +0200
@@ -127,6 +127,14 @@
 #define WTF_USE_NEW_THEME 1
 #endif // PLATFORM(MAC)
 
+#if OS(FREEBSD)
+#include <sys/param.h>
+#if __FreeBSD_version < 802502
+#define log2(x) (log(x) / M_LN2)
+#define log2f(x) (logf(x) / (float)M_LN2)
+#endif
+#endif
+
 #if PLATFORM(CHROMIUM)
 
 // Chromium uses this file instead of JavaScriptCore/config.h to compile
