--- ./chrome/browser/renderer_host/resource_message_filter.cc.orig	2010-12-13 12:04:26.000000000 +0100
+++ ./chrome/browser/renderer_host/resource_message_filter.cc	2010-12-20 20:41:37.000000000 +0100
@@ -515,7 +515,7 @@
 #if defined(OS_WIN)
       IPC_MESSAGE_HANDLER(ViewHostMsg_DuplicateSection, OnDuplicateSection)
 #endif
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD)
       IPC_MESSAGE_HANDLER(ViewHostMsg_AllocatePDFTransport,
                           OnAllocateSharedMemoryBuffer)
 #endif
@@ -537,7 +537,7 @@
                                       OnGetDefaultPrintSettings)
       IPC_MESSAGE_HANDLER_DELAY_REPLY(ViewHostMsg_ScriptedPrint,
                                       OnScriptedPrint)
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD)
       IPC_MESSAGE_HANDLER(ViewHostMsg_AllocTransportDIB,
                           OnAllocTransportDIB)
       IPC_MESSAGE_HANDLER(ViewHostMsg_FreeTransportDIB,
@@ -1407,7 +1407,7 @@
   HistogramSynchronizer::DeserializeHistogramList(sequence_number, histograms);
 }
 
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD)
 void ResourceMessageFilter::OnAllocTransportDIB(
     size_t size, bool cache_in_browser, TransportDIB::Handle* handle) {
   render_widget_helper_->AllocTransportDIB(size, cache_in_browser, handle);
