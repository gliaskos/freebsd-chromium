--- third_party/pdfium/third_party/base/logging.h.orig	2016-05-11 19:03:45 UTC
+++ third_party/pdfium/third_party/base/logging.h
@@ -11,7 +11,7 @@
 #define CHECK(condition)                                                \
   if (!(condition)) {                                                   \
     abort();                                                            \
-    *(reinterpret_cast<volatile char*>(NULL) + 42) = 0x42;              \
+    *(reinterpret_cast<volatile char*>(__null) + 42) = 0x42;              \
   }
 
 #define NOTREACHED() assert(false)
