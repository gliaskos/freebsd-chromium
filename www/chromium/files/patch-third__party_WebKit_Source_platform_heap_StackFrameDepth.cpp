--- third_party/WebKit/Source/platform/heap/StackFrameDepth.cpp.orig	2017-02-02 02:03:10 UTC
+++ third_party/WebKit/Source/platform/heap/StackFrameDepth.cpp
@@ -6,6 +6,8 @@
 
 #include "public/platform/Platform.h"
 
+#include <pthread_np.h>
+
 #if OS(WIN)
 #include <stddef.h>
 #include <windows.h>
