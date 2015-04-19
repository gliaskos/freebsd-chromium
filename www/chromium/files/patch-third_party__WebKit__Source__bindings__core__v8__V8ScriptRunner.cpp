--- third_party/WebKit/Source/bindings/core/v8/V8ScriptRunner.cpp.orig	2015-04-01 18:43:35.000000000 -0400
+++ third_party/WebKit/Source/bindings/core/v8/V8ScriptRunner.cpp	2015-04-15 22:49:54.741273000 -0400
@@ -41,6 +41,8 @@
 
 #if defined(WTF_OS_WIN)
 #include <malloc.h>
+#elif defined(WTF_OS_FREEBSD)
+#include <stdlib.h>
 #else
 #include <alloca.h>
 #endif
