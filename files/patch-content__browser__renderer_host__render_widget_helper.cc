--- ./content/browser/renderer_host/render_widget_helper.cc.orig	2012-08-17 03:01:27.000000000 +0200
+++ ./content/browser/renderer_host/render_widget_helper.cc	2012-08-23 22:31:44.000000000 +0200
@@ -96,7 +96,7 @@
   // object, so we should not be destroyed unless pending_paints_ is empty!
   DCHECK(pending_paints_.empty());
 
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD)
   ClearAllocatedDIBs();
 #endif
 }
@@ -351,7 +351,7 @@
     host->CreateNewFullscreenWidget(route_id);
 }
 
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD)
 TransportDIB* RenderWidgetHelper::MapTransportDIB(TransportDIB::Id dib_id) {
   base::AutoLock locked(allocated_dibs_lock_);
 
