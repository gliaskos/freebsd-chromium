--- ./chrome/common/omaha_query_params/omaha_query_params.cc.orig	2014-02-20 21:27:53.000000000 +0100
+++ ./chrome/common/omaha_query_params/omaha_query_params.cc	2014-02-24 17:23:44.000000000 +0100
@@ -28,6 +28,8 @@
   "linux";
 #elif defined(OS_OPENBSD)
   "openbsd";
+#elif defined(OS_FREEBSD)
+  "freebsd";
 #else
     #error "unknown os"
 #endif
