--- ./chrome/test/base/in_process_browser_test.cc.orig	2012-08-17 03:02:23.000000000 +0200
+++ ./chrome/test/base/in_process_browser_test.cc	2012-08-23 22:31:43.000000000 +0200
@@ -50,6 +50,10 @@
 
 namespace {
 
+#if defined(OS_FREEBSD)
+#include <signal.h>
+#endif
+
 // Passed as value of kTestType.
 const char kBrowserTestType[] = "browser";
 
