--- chrome/test/base/in_process_browser_test.cc.orig	2017-03-09 20:04:30 UTC
+++ chrome/test/base/in_process_browser_test.cc
@@ -93,6 +93,10 @@
 
 namespace {
 
+#if defined(OS_FREEBSD)
+#include <signal.h>
+#endif
+
 // Passed as value of kTestType.
 const char kBrowserTestType[] = "browser";
 
