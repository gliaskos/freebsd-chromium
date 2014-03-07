--- ./chrome/test/base/in_process_browser_test.cc.orig	2014-03-04 03:17:00.000000000 +0100
+++ ./chrome/test/base/in_process_browser_test.cc	2014-03-07 14:10:33.000000000 +0100
@@ -73,6 +73,10 @@
 
 namespace {
 
+#if defined(OS_FREEBSD)
+#include <signal.h>
+#endif
+
 // Passed as value of kTestType.
 const char kBrowserTestType[] = "browser";
 
