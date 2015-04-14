--- chrome/browser/ui/webui/options/browser_options_handler.h.orig	2015-01-21 20:28:16 UTC
+++ chrome/browser/ui/webui/options/browser_options_handler.h
@@ -210,7 +210,8 @@
 
   void ObserveThemeChanged();
   void ThemesReset(const base::ListValue* args);
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if defined(OS_POSIX) && !defined(OS_CHROMEOS) && !defined(OS_MACOSX) && \
+    !defined(OS_ANDROID)
   void ThemesSetNative(const base::ListValue* args);
 #endif
 
