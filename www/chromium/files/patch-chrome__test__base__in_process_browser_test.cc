--- ./chrome/test/base/in_process_browser_test.cc.orig	2014-04-02 21:04:59.000000000 +0200
+++ ./chrome/test/base/in_process_browser_test.cc	2014-04-04 01:39:18.000000000 +0200
@@ -72,6 +72,10 @@
 
 namespace {
 
+#if defined(OS_FREEBSD)
+#include <signal.h>
+#endif
+
 // Passed as value of kTestType.
 const char kBrowserTestType[] = "browser";
 
