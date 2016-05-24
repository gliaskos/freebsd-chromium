--- components/dom_distiller/core/page_features.cc.orig	2016-05-11 19:02:18 UTC
+++ components/dom_distiller/core/page_features.cc
@@ -9,7 +9,11 @@
 #include <string>
 
 #include "base/json/json_reader.h"
+#if defined(OS_BSD)
+#include <re2/re2.h>
+#else
 #include "third_party/re2/src/re2/re2.h"
+#endif
 #include "url/gurl.h"
 
 namespace dom_distiller {
