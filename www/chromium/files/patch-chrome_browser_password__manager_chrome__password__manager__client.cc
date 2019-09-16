--- chrome/browser/password_manager/chrome_password_manager_client.cc.orig	2019-09-09 21:55:09 UTC
+++ chrome/browser/password_manager/chrome_password_manager_client.cc
@@ -81,7 +81,11 @@
 #include "net/base/url_util.h"
 #include "net/cert/cert_status_flags.h"
 #include "services/metrics/public/cpp/ukm_recorder.h"
+#if defined(OS_BSD)
+#include <re2/re2.h>
+#else
 #include "third_party/re2/src/re2/re2.h"
+#endif
 #include "url/url_constants.h"
 
 #if defined(FULL_SAFE_BROWSING)
