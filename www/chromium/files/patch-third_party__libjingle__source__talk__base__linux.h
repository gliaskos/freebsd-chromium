--- ./third_party/libjingle/source/talk/base/linux.h.orig	2014-04-02 21:06:30.000000000 +0200
+++ ./third_party/libjingle/source/talk/base/linux.h	2014-04-04 01:39:19.000000000 +0200
@@ -28,7 +28,7 @@
 #ifndef TALK_BASE_LINUX_H_
 #define TALK_BASE_LINUX_H_
 
-#if defined(LINUX) || defined(ANDROID)
+#if defined(LINUX) || defined(ANDROID) || defined(BSD)
 #include <string>
 #include <map>
 #include <vector>
@@ -136,5 +136,5 @@
 
 }  // namespace talk_base
 
-#endif  // defined(LINUX) || defined(ANDROID)
+#endif  // defined(LINUX) || defined(ANDROID) || defined(BSD)
 #endif  // TALK_BASE_LINUX_H_
