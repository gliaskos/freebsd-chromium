--- ./chrome/browser/omaha_query_params/omaha_query_params.cc.orig	2014-07-15 21:01:16.000000000 +0200
+++ ./chrome/browser/omaha_query_params/omaha_query_params.cc	2014-07-20 18:13:07.000000000 +0200
@@ -29,6 +29,8 @@
     "linux";
 #elif defined(OS_OPENBSD)
     "openbsd";
+#elif defined(OS_FREEBSD)
+    "freebsd";
 #else
 #error "unknown os"
 #endif
