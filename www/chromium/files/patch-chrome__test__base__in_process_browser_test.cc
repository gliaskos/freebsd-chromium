--- ./chrome/test/base/in_process_browser_test.cc.orig	2014-03-26 21:15:37.000000000 +0100
+++ ./chrome/test/base/in_process_browser_test.cc	2014-03-28 10:57:59.000000000 +0100
@@ -72,6 +72,10 @@
 
 namespace {
 
+#if defined(OS_FREEBSD)
+#include <signal.h>
+#endif
+
 // Passed as value of kTestType.
 const char kBrowserTestType[] = "browser";
 
