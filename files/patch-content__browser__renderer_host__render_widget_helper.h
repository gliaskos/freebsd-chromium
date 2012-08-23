--- ./content/browser/renderer_host/render_widget_helper.h.orig	2012-08-17 03:01:27.000000000 +0200
+++ ./content/browser/renderer_host/render_widget_helper.h	2012-08-23 22:31:44.000000000 +0200
@@ -134,7 +134,7 @@
                               const base::TimeDelta& max_delay,
                               IPC::Message* msg);
 
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD)
   // Given the id of a transport DIB, return a mapping to it or NULL on error.
   TransportDIB* MapTransportDIB(TransportDIB::Id dib_id);
 #endif
@@ -157,7 +157,7 @@
                        int* surface_id);
   void CreateNewFullscreenWidget(int opener_id, int* route_id, int* surface_id);
 
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD)
   // Called on the IO thread to handle the allocation of a TransportDIB.  If
   // |cache_in_browser| is |true|, then a copy of the shmem is kept by the
   // browser, and it is the caller's repsonsibility to call
@@ -217,7 +217,7 @@
   // Called on the IO thread to resume a cross-site response.
   void OnCrossSiteSwapOutACK(const ViewMsg_SwapOut_Params& params);
 
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD)
   // Called on destruction to release all allocated transport DIBs
   void ClearAllocatedDIBs();
 
