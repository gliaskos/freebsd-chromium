--- ui/base/webui/web_ui_util.cc.orig.port	Tue Mar 10 23:41:42 2015
+++ ui/base/webui/web_ui_util.cc	Wed Mar 11 07:22:50 2015
@@ -143,7 +143,7 @@
 
 // TODO(dnicoara) Remove Ozone check when PlatformFont support is introduced
 // into Ozone: crbug.com/320050
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS) && !defined(USE_OZONE)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS) && !defined(USE_OZONE)
   font_family = ui::ResourceBundle::GetSharedInstance().GetFont(
       ui::ResourceBundle::BaseFont).GetFontName() + ", " + font_family;
 #endif
