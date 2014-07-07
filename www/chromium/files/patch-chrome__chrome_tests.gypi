--- ./chrome/chrome_tests.gypi.orig	2014-06-30 21:02:37.000000000 +0200
+++ ./chrome/chrome_tests.gypi	2014-07-07 15:12:47.000000000 +0200
@@ -1548,7 +1548,7 @@
         'test/remoting/remote_desktop_browsertest.h',
         'test/remoting/waiter.cc',
         'test/remoting/waiter.h',
-        'test/security_tests/sandbox_browsertest_linux.cc',
+        #'test/security_tests/sandbox_browsertest_linux.cc',
         'test/security_tests/sandbox_browsertest_win.cc',
         # TODO(craig): Rename this and run from base_unittests when the test
         # is safe to run there. See http://crbug.com/78722 for details.
