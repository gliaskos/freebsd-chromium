--- ./chrome/test/base/in_process_browser_test.cc.orig	2014-03-12 20:22:30.000000000 +0100
+++ ./chrome/test/base/in_process_browser_test.cc	2014-03-14 09:23:25.000000000 +0100
@@ -72,6 +72,10 @@
 
 namespace {
 
+#if defined(OS_FREEBSD)
+#include <signal.h>
+#endif
+
 // Passed as value of kTestType.
 const char kBrowserTestType[] = "browser";
 
