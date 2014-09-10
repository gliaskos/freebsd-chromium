--- components/omaha_query_params/omaha_query_params.cc.orig	2014-09-04 00:04:15 UTC
+++ components/omaha_query_params/omaha_query_params.cc
@@ -31,6 +31,8 @@
     "linux";
 #elif defined(OS_OPENBSD)
     "openbsd";
+#elif defined(OS_FREEBSD)
+    "freebsd";
 #else
 #error "unknown os"
 #endif
