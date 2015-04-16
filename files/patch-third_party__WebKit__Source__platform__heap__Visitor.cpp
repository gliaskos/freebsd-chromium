--- third_party/WebKit/Source/platform/heap/Visitor.cpp.orig	2015-04-01 18:43:35.000000000 -0400
+++ third_party/WebKit/Source/platform/heap/Visitor.cpp	2015-04-15 21:46:18.216818000 -0400
@@ -34,6 +34,8 @@
 #include "platform/heap/Handle.h"
 #include "platform/heap/Heap.h"
 
+#include <cstdlib>
+
 namespace blink {
 
 // GCInfo indices start from 1 for heap objects, with 0 being treated
