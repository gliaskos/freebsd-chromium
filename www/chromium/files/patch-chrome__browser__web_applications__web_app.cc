--- ./chrome/browser/web_applications/web_app.cc.orig	2014-07-15 21:01:17.000000000 +0200
+++ ./chrome/browser/web_applications/web_app.cc	2014-07-20 18:13:08.000000000 +0200
@@ -472,7 +472,7 @@
 }
 #endif
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 std::string GetWMClassFromAppName(std::string app_name) {
   file_util::ReplaceIllegalCharactersInPath(&app_name, '_');
   base::TrimString(app_name, "_", &app_name);
