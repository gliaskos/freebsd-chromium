--- ./chrome/browser/plugins/plugins_resource_service.cc.orig	2014-03-05 22:24:40.000000000 +0100
+++ ./chrome/browser/plugins/plugins_resource_service.cc	2014-03-07 23:57:26.000000000 +0100
@@ -33,7 +33,7 @@
   std::string filename;
 #if defined(OS_WIN)
   filename = "plugins_win.json";
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_BSD)
   filename = "plugins_linux.json";
 #elif defined(OS_MACOSX)
   filename = "plugins_mac.json";
