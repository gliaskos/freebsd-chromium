--- ./content/common/plugin_messages.h.orig	2012-08-17 03:01:27.000000000 +0200
+++ ./content/common/plugin_messages.h	2012-08-23 22:31:44.000000000 +0200
@@ -111,7 +111,7 @@
                            gfx::PluginWindowHandle /* output: X window id */)
 #endif
 
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD)
 // On Mac OS X, we need the browser to keep track of plugin windows so
 // that it can add and remove them from stacking groups, hide and show the
 // menu bar, etc.  We pass the window rect for convenience so that the
@@ -217,7 +217,7 @@
                     string16 /* text */)
 #endif
 
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD)
 IPC_MESSAGE_ROUTED1(PluginMsg_SetWindowFocus,
                     bool /* has_focus */)
 
@@ -287,7 +287,7 @@
 IPC_MESSAGE_CONTROL1(PluginMsg_ResetModalDialogEvent,
                      gfx::NativeViewId /* containing_window */)
 
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD)
 // This message, used only on 10.6 and later, transmits the "fake"
 // window handle allocated by the browser on behalf of the renderer
 // to the GPU plugin.
@@ -378,7 +378,7 @@
 
 IPC_MESSAGE_CONTROL0(PluginHostMsg_PluginShuttingDown)
 
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD)
 IPC_MESSAGE_ROUTED1(PluginHostMsg_FocusChanged,
                     bool /* focused */)
 
