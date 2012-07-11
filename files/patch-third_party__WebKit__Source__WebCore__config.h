--- third_party/WebKit/Source/WebCore/config.h.orig	2012-05-30 10:05:35.000000000 +0300
+++ third_party/WebKit/Source/WebCore/config.h	2012-06-05 22:32:48.000000000 +0300
@@ -127,6 +127,11 @@
 #define WTF_USE_NEW_THEME 1
 #endif // PLATFORM(MAC)
 
+#ifdef NO_LOG2
+#define log2(x) (log(x) / M_LN2)
+#define log2f(x) (logf(x) / (float)M_LN2)
+#endif
+
 #if PLATFORM(CHROMIUM)
 
 // Chromium uses this file instead of JavaScriptCore/config.h to compile
