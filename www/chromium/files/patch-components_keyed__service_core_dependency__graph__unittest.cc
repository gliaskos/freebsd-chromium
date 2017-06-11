--- components/keyed_service/core/dependency_graph_unittest.cc.orig	2017-06-05 19:03:05 UTC
+++ components/keyed_service/core/dependency_graph_unittest.cc
@@ -9,7 +9,11 @@
 #include "components/keyed_service/core/dependency_graph.h"
 #include "components/keyed_service/core/dependency_node.h"
 #include "testing/gtest/include/gtest/gtest.h"
+#if defined(OS_BSD)
+#include <re2/re2.h>
+#else
 #include "third_party/re2/src/re2/re2.h"
+#endif
 
 namespace {
 
