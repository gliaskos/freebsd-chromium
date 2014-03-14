--- ./chrome/browser/omaha_query_params/omaha_query_params.cc.orig	2014-03-12 20:21:55.000000000 +0100
+++ ./chrome/browser/omaha_query_params/omaha_query_params.cc	2014-03-14 09:23:25.000000000 +0100
@@ -29,6 +29,8 @@
     "linux";
 #elif defined(OS_OPENBSD)
     "openbsd";
+#elif defined(OS_FREEBSD)
+    "freebsd";
 #else
 #error "unknown os"
 #endif
