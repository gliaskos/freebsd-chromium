--- components/webcrypto/algorithms/test_helpers.cc.orig	2017-06-05 19:03:06 UTC
+++ components/webcrypto/algorithms/test_helpers.cc
@@ -25,7 +25,11 @@
 #include "components/webcrypto/status.h"
 #include "third_party/WebKit/public/platform/WebCryptoAlgorithmParams.h"
 #include "third_party/WebKit/public/platform/WebCryptoKeyAlgorithm.h"
+#if defined(OS_BSD)
+#include <re2/re2.h>
+#else
 #include "third_party/re2/src/re2/re2.h"
+#endif
 
 namespace webcrypto {
 
