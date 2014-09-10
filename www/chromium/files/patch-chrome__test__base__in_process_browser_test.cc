--- chrome/test/base/in_process_browser_test.cc.orig	2014-09-04 00:29:10 UTC
+++ chrome/test/base/in_process_browser_test.cc
@@ -76,6 +76,10 @@
 
 namespace {
 
+#if defined(OS_FREEBSD)
+#include <signal.h>
+#endif
+
 // Passed as value of kTestType.
 const char kBrowserTestType[] = "browser";
 
