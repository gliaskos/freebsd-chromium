--- ./chrome/browser/omaha_query_params/omaha_query_params.cc.orig	2014-03-26 21:15:38.000000000 +0100
+++ ./chrome/browser/omaha_query_params/omaha_query_params.cc	2014-03-28 10:57:59.000000000 +0100
@@ -29,6 +29,8 @@
     "linux";
 #elif defined(OS_OPENBSD)
     "openbsd";
+#elif defined(OS_FREEBSD)
+    "freebsd";
 #else
 #error "unknown os"
 #endif
