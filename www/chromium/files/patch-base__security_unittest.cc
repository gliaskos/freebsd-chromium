--- ./base/security_unittest.cc.orig	2014-03-26 21:14:53.000000000 +0100
+++ ./base/security_unittest.cc	2014-03-28 10:57:59.000000000 +0100
@@ -159,7 +159,7 @@
 // FAILS_ is too clunky.
 void OverflowTestsSoftExpectTrue(bool overflow_detected) {
   if (!overflow_detected) {
-#if defined(OS_LINUX) || defined(OS_ANDROID) || defined(OS_MACOSX)
+#if defined(OS_POSIX) && !defined(OS_NACL)
     // Sadly, on Linux, Android, and OSX we don't have a good story yet. Don't
     // fail the test, but report.
     printf("Platform has overflow: %s\n",
