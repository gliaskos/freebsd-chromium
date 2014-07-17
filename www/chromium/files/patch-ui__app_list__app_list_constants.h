--- ./ui/app_list/app_list_constants.h.orig	2014-06-30 21:02:39.000000000 +0200
+++ ./ui/app_list/app_list_constants.h	2014-07-17 20:18:56.000000000 +0200
@@ -57,8 +57,8 @@
 
 APP_LIST_EXPORT extern const ui::ResourceBundle::FontStyle kItemTextFontStyle;
 
-#if defined(OS_LINUX)
-// The WM_CLASS name for the app launcher window on Linux.
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
+// The WM_CLASS name for the app launcher window on Linux/FreeBSD.
 APP_LIST_EXPORT extern const char kAppListWMClass[];
 #endif
 
