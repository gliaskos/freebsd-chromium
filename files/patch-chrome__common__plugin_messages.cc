--- ./chrome/common/plugin_messages.cc.orig	2010-12-13 12:04:46.000000000 +0100
+++ ./chrome/common/plugin_messages.cc	2010-12-20 20:41:37.000000000 +0100
@@ -59,7 +59,7 @@
 
 PluginMsg_UpdateGeometry_Param::PluginMsg_UpdateGeometry_Param()
     : transparent(false),
-#if !defined(OS_MACOSX)
+#if !defined(OS_MACOSX) && !defined(OS_FREEBSD)
       windowless_buffer(NULL),
       background_buffer(NULL)
 #else
@@ -274,7 +274,7 @@
   WriteParam(m, p.windowless_buffer);
   WriteParam(m, p.background_buffer);
   WriteParam(m, p.transparent);
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD)
   WriteParam(m, p.ack_key);
 #endif
 }
@@ -288,7 +288,7 @@
       ReadParam(m, iter, &r->windowless_buffer) &&
       ReadParam(m, iter, &r->background_buffer) &&
       ReadParam(m, iter, &r->transparent)
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD)
       &&
       ReadParam(m, iter, &r->ack_key)
 #endif
@@ -307,7 +307,7 @@
   LogParam(p.background_buffer, l);
   l->append(", ");
   LogParam(p.transparent, l);
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD)
   l->append(", ");
   LogParam(p.ack_key, l);
 #endif
