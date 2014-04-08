--- ./chrome/browser/ui/webui/options/browser_options_handler.h.orig	2014-04-02 21:04:26.000000000 +0200
+++ ./chrome/browser/ui/webui/options/browser_options_handler.h	2014-04-04 01:39:18.000000000 +0200
@@ -168,7 +168,8 @@
 
   void ObserveThemeChanged();
   void ThemesReset(const base::ListValue* args);
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if defined(OS_POSIX) && !defined(OS_CHROMEOS) && !defined(OS_MACOSX) && \
+    !defined(OS_ANDROID)
   void ThemesSetNative(const base::ListValue* args);
 #endif
 
