--- ./chrome/common/plugin_messages.h.orig	2010-12-13 12:04:46.000000000 +0100
+++ ./chrome/common/plugin_messages.h	2010-12-20 20:41:37.000000000 +0100
@@ -116,7 +116,7 @@
   TransportDIB::Handle windowless_buffer;
   TransportDIB::Handle background_buffer;
 
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD)
   // This field contains a key that the plug-in process is expected to return
   // to the renderer in its ACK message, unless the value is -1, in which case
   // no ACK message is required.  Other than the special -1 value, the values
