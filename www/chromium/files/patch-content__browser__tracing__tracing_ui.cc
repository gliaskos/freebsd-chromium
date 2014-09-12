--- content/browser/tracing/tracing_ui.cc.orig	2014-09-11 08:58:47.000000000 +0200
+++ content/browser/tracing/tracing_ui.cc	2014-09-12 01:32:11.000000000 +0200
@@ -358,6 +358,8 @@
   const char product[] = "Chrome_Android";
 #elif defined(OS_CHROMEOS)
   const char product[] = "Chrome_ChromeOS";
+#elif defined(OS_BSD)
+  const char product[] = "Chrome_BSD";
 #else
 #error Platform not supported.
 #endif
