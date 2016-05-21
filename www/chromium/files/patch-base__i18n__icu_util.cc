--- base/i18n/icu_util.cc.orig	2016-05-21 13:18:09.640284000 -0400
+++ base/i18n/icu_util.cc	2016-05-21 13:19:03.587046000 -0400
@@ -36,10 +36,6 @@
 #include "base/mac/foundation_util.h"
 #endif
 
-#define ICU_UTIL_DATA_FILE   0
-#define ICU_UTIL_DATA_SHARED 1
-#define ICU_UTIL_DATA_STATIC 2
-
 namespace base {
 namespace i18n {
 
