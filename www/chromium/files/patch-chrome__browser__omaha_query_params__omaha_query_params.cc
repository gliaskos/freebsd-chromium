--- ./chrome/browser/omaha_query_params/omaha_query_params.cc.orig	2014-03-19 20:02:39.000000000 +0100
+++ ./chrome/browser/omaha_query_params/omaha_query_params.cc	2014-03-21 00:27:12.000000000 +0100
@@ -29,6 +29,8 @@
     "linux";
 #elif defined(OS_OPENBSD)
     "openbsd";
+#elif defined(OS_FREEBSD)
+    "freebsd";
 #else
 #error "unknown os"
 #endif
