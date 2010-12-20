--- ./chrome/browser/ui/views/accessible_view_helper.cc.orig	2010-12-13 12:04:28.000000000 +0100
+++ ./chrome/browser/ui/views/accessible_view_helper.cc	2010-12-20 20:41:37.000000000 +0100
@@ -21,7 +21,7 @@
   if (!accessibility_event_router_->AddViewTree(view_tree_, profile))
     view_tree_ = NULL;
 
-#if defined(OS_LINUX)
+#if defined(TOOLKIT_USES_GTK)
   GtkWidget* widget = view_tree->GetWidget()->GetNativeView();
   widget_helper_.reset(new AccessibleWidgetHelper(widget, profile));
 #endif
