--- ./chrome/browser/omaha_query_params/omaha_query_params.cc.orig	2014-04-02 21:04:21.000000000 +0200
+++ ./chrome/browser/omaha_query_params/omaha_query_params.cc	2014-04-04 01:39:18.000000000 +0200
@@ -29,6 +29,8 @@
     "linux";
 #elif defined(OS_OPENBSD)
     "openbsd";
+#elif defined(OS_FREEBSD)
+    "freebsd";
 #else
 #error "unknown os"
 #endif
