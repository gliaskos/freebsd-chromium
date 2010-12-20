--- ./chrome/browser/ui/views/dropdown_bar_host.cc.orig	2010-12-13 12:04:28.000000000 +0100
+++ ./chrome/browser/ui/views/dropdown_bar_host.cc	2010-12-20 20:41:37.000000000 +0100
@@ -20,7 +20,7 @@
 #include "views/focus/view_storage.h"
 #include "views/widget/widget.h"
 
-#if defined(OS_LINUX)
+#if defined(TOOLKIT_GTK)
 #include "app/scoped_handle_gtk.h"
 #endif
 
