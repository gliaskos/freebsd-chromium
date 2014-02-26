--- ./chrome/test/base/in_process_browser_test.cc.orig	2014-02-20 21:27:20.000000000 +0100
+++ ./chrome/test/base/in_process_browser_test.cc	2014-02-24 17:23:44.000000000 +0100
@@ -73,6 +73,10 @@
 
 namespace {
 
+#if defined(OS_FREEBSD)
+#include <signal.h>
+#endif
+
 // Passed as value of kTestType.
 const char kBrowserTestType[] = "browser";
 
