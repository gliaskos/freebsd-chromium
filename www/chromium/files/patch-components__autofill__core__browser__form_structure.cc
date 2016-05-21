--- components/autofill/core/browser/form_structure.cc.orig	2016-05-11 15:02:18.000000000 -0400
+++ components/autofill/core/browser/form_structure.cc	2016-05-19 20:18:07.393648000 -0400
@@ -34,7 +34,11 @@
 #include "components/autofill/core/common/form_field_data_predictions.h"
 #include "components/rappor/rappor_service.h"
 #include "components/rappor/rappor_utils.h"
-#include "third_party/re2/src/re2/re2.h"
+#if defined(OS_BSD)
+#  include <re2/re2.h>
+#else
+#  include "third_party/re2/src/re2/re2.h"
+#endif
 
 namespace autofill {
 namespace {
