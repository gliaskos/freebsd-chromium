--- ./chrome/browser/gpu_process_host.cc.orig	2010-12-13 12:04:29.000000000 +0100
+++ ./chrome/browser/gpu_process_host.cc	2010-12-20 20:41:37.000000000 +0100
@@ -23,7 +23,7 @@
 #include "ipc/ipc_switches.h"
 #include "media/base/media_switches.h"
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 #include <gdk/gdkwindow.h>
 #include <gdk/gdkx.h>
 #include "app/x11_util.h"
@@ -176,7 +176,7 @@
   IPC_BEGIN_MESSAGE_MAP(GpuProcessHost, message)
     IPC_MESSAGE_HANDLER(GpuHostMsg_ChannelEstablished, OnChannelEstablished)
     IPC_MESSAGE_HANDLER(GpuHostMsg_SynchronizeReply, OnSynchronizeReply)
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
     IPC_MESSAGE_HANDLER_DELAY_REPLY(GpuHostMsg_GetViewXID, OnGetViewXID)
     IPC_MESSAGE_HANDLER(GpuHostMsg_ReleaseXID, OnReleaseXID)
     IPC_MESSAGE_HANDLER_DELAY_REPLY(GpuHostMsg_ResizeXID, OnResizeXID)
@@ -211,7 +211,7 @@
   queued_synchronization_replies_.pop();
 }
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 
 namespace {
 
