--- components/update_client/update_query_params.cc.orig	2015-04-01 18:30:33.000000000 -0400
+++ components/update_client/update_query_params.cc	2015-04-15 21:01:45.905508000 -0400
@@ -31,6 +31,8 @@
     "linux";
 #elif defined(OS_OPENBSD)
     "openbsd";
+#elif defined(OS_FREEBSD)
+    "freebsd";
 #else
 #error "unknown os"
 #endif
