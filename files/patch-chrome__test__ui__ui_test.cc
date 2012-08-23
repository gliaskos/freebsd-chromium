--- ./chrome/test/ui/ui_test.cc.orig	2012-08-17 03:02:23.000000000 +0200
+++ ./chrome/test/ui/ui_test.cc	2012-08-23 22:31:43.000000000 +0200
@@ -69,7 +69,7 @@
     L"NOTE: This test is expected to fail if crash_service.exe is not "
     L"running. Start it manually before running this test (see the build "
     L"output directory).";
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_FREEBSD)
     L"NOTE: This test is expected to fail if breakpad is not built in "
     L"or if chromium is not running headless (try CHROME_HEADLESS=1).";
 #else
