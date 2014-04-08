--- ./chrome/browser/plugins/plugins_resource_service.cc.orig	2014-04-02 21:04:21.000000000 +0200
+++ ./chrome/browser/plugins/plugins_resource_service.cc	2014-04-04 01:39:18.000000000 +0200
@@ -33,7 +33,7 @@
   std::string filename;
 #if defined(OS_WIN)
   filename = "plugins_win.json";
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_BSD)
   filename = "plugins_linux.json";
 #elif defined(OS_MACOSX)
   filename = "plugins_mac.json";
