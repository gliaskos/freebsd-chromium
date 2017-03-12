--- third_party/WebKit/Source/bindings/core/v8/V8ScriptRunner.cpp.orig	2017-03-09 20:04:45 UTC
+++ third_party/WebKit/Source/bindings/core/v8/V8ScriptRunner.cpp
@@ -46,6 +46,8 @@
 
 #if OS(WIN)
 #include <malloc.h>
+#elif OS(FREEBSD)
+#include <stdlib.h>
 #else
 #include <alloca.h>
 #endif
