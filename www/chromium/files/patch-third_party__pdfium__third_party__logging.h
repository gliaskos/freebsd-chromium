--- ./third_party/pdfium/third_party/logging.h.orig	2014-09-10 01:14:21.000000000 +0200
+++ ./third_party/pdfium/third_party/logging.h	2014-09-10 01:15:32.000000000 +0200
@@ -10,7 +10,7 @@
 #define CHECK(condition)                                                \
   if (!(condition)) {                                                   \
     abort();                                                            \
-    *(reinterpret_cast<volatile char*>(NULL) + 42) = 0x42;              \
+    *(reinterpret_cast<volatile char*>(__null) + 42) = 0x42;              \
   }
 
 #define NOTREACHED() abort()
