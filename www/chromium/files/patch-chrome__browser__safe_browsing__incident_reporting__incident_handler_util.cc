--- chrome/browser/safe_browsing/incident_reporting/incident_handler_util.cc.orig	2014-09-11 08:41:42.000000000 +0200
+++ chrome/browser/safe_browsing/incident_reporting/incident_handler_util.cc	2014-09-12 14:49:00.000000000 +0200
@@ -8,7 +8,12 @@
 
 #include "base/hash.h"
 #include "base/logging.h"
+//XXX(rene) needs shim headers?
+#if defined(USE_SYSTEM_PROTOBUF)
+#include <google/protobuf/message_lite.h>
+#else
 #include "third_party/protobuf/src/google/protobuf/message_lite.h"
+#endif
 
 namespace safe_browsing {
 
