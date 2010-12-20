--- ./chrome/test/url_fetch_test/url_fetch_test.cc.orig	2010-12-13 12:04:45.000000000 +0100
+++ ./chrome/test/url_fetch_test/url_fetch_test.cc	2010-12-20 20:41:37.000000000 +0100
@@ -35,7 +35,7 @@
       dir = dir.AppendASCII("reference_build");
 #if defined(OS_WIN)
       dir = dir.AppendASCII("chrome");
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_FREEBSD)
       dir = dir.AppendASCII("chrome_linux");
 #elif defined(OS_MACOSX)
       dir = dir.AppendASCII("chrome_mac");
