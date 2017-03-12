--- third_party/WebKit/Source/bindings/core/v8/V8ScriptRunner.cpp.orig	2017-02-02 02:03:08 UTC
+++ third_party/WebKit/Source/bindings/core/v8/V8ScriptRunner.cpp
@@ -46,6 +46,8 @@
 
 #if OS(WIN)
 #include <malloc.h>
+#elif OS(FREEBSD)
+#include <stdlib.h>
 #else
 #include <alloca.h>
 #endif
