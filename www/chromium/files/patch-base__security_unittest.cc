--- ./base/security_unittest.cc.orig	2014-06-30 21:01:41.000000000 +0200
+++ ./base/security_unittest.cc	2014-07-01 22:46:25.000000000 +0200
@@ -160,7 +160,7 @@
 // FAILS_ is too clunky.
 void OverflowTestsSoftExpectTrue(bool overflow_detected) {
   if (!overflow_detected) {
-#if defined(OS_LINUX) || defined(OS_ANDROID) || defined(OS_MACOSX)
+#if defined(OS_POSIX) && !defined(OS_NACL)
     // Sadly, on Linux, Android, and OSX we don't have a good story yet. Don't
     // fail the test, but report.
     printf("Platform has overflow: %s\n",
