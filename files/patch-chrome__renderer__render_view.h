--- ./chrome/renderer/render_view.h.orig	2010-12-13 12:04:31.000000000 +0100
+++ ./chrome/renderer/render_view.h	2010-12-20 20:41:37.000000000 +0100
@@ -1100,7 +1100,7 @@
   // periodic timer so we don't send too many messages.
   void SyncNavigationState();
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
   void UpdateFontRenderingFromRendererPrefs();
 #else
   void UpdateFontRenderingFromRendererPrefs() {}
