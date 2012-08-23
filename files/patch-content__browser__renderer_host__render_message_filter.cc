--- ./content/browser/renderer_host/render_message_filter.cc.orig	2012-08-17 03:01:27.000000000 +0200
+++ ./content/browser/renderer_host/render_message_filter.cc	2012-08-23 22:31:44.000000000 +0200
@@ -373,7 +373,7 @@
                         OnCheckNotificationPermission)
     IPC_MESSAGE_HANDLER(ChildProcessHostMsg_SyncAllocateSharedMemory,
                         OnAllocateSharedMemory)
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD)
     IPC_MESSAGE_HANDLER(ViewHostMsg_AllocTransportDIB, OnAllocTransportDIB)
     IPC_MESSAGE_HANDLER(ViewHostMsg_FreeTransportDIB, OnFreeTransportDIB)
 #endif
@@ -761,7 +761,7 @@
   return context;
 }
 
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD)
 void RenderMessageFilter::OnAllocTransportDIB(
     size_t size, bool cache_in_browser, TransportDIB::Handle* handle) {
   render_widget_helper_->AllocTransportDIB(size, cache_in_browser, handle);
