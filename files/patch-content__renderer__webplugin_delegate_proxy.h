--- ./content/renderer/webplugin_delegate_proxy.h.orig	2012-08-17 03:01:28.000000000 +0200
+++ ./content/renderer/webplugin_delegate_proxy.h	2012-08-23 22:31:44.000000000 +0200
@@ -22,7 +22,7 @@
 #include "webkit/plugins/npapi/webplugin_delegate.h"
 #include "webkit/plugins/webplugininfo.h"
 
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD)
 #include "base/hash_tables.h"
 #include "base/memory/linked_ptr.h"
 #endif
@@ -261,7 +261,7 @@
   // point the window has already been destroyed).
   void WillDestroyWindow();
 
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD)
   // Synthesize a fake window handle for the plug-in to identify the instance
   // to the browser, allowing mapping to a surface for hardware acceleration
   // of plug-in content. The browser generates the handle which is then set on
