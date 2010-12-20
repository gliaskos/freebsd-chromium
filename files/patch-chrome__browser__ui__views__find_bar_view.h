--- ./chrome/browser/ui/views/find_bar_view.h.orig	2010-12-13 12:04:28.000000000 +0100
+++ ./chrome/browser/ui/views/find_bar_view.h	2010-12-20 20:41:37.000000000 +0100
@@ -103,7 +103,7 @@
   // between us and the TabContentsView.
   FindBarHost* find_bar_host() const;
 
-#if defined(OS_LINUX)
+#if defined(TOOLKIT_USES_GTK)
   // In gtk we get changed signals if we programatically set the text. If we
   // don't ignore them we run into problems. For example, switching tabs back
   // to one with the find bar visible will cause a search to the next found
