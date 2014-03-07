--- ./third_party/WebKit/Source/testing/runner/WebAXObjectProxy.cpp.orig	2014-03-04 03:21:44.000000000 +0100
+++ ./third_party/WebKit/Source/testing/runner/WebAXObjectProxy.cpp	2014-03-07 14:10:35.000000000 +0100
@@ -36,6 +36,10 @@
 #include "public/platform/WebRect.h"
 #include "public/platform/WebString.h"
 
+#if defined(OS_FREEBSD)
+#include <stdlib.h> // atoi()
+#endif
+
 using namespace blink;
 using namespace std;
 
