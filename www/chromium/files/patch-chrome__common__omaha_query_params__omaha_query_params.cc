--- ./chrome/common/omaha_query_params/omaha_query_params.cc.orig	2014-03-04 03:16:34.000000000 +0100
+++ ./chrome/common/omaha_query_params/omaha_query_params.cc	2014-03-07 14:10:32.000000000 +0100
@@ -28,6 +28,8 @@
   "linux";
 #elif defined(OS_OPENBSD)
   "openbsd";
+#elif defined(OS_FREEBSD)
+  "freebsd";
 #else
     #error "unknown os"
 #endif
