--- ui/views/examples/widget_example.cc.orig	2015-04-28 07:53:23.339391000 -0400
+++ ui/views/examples/widget_example.cc	2015-04-28 07:53:42.657943000 -0400
@@ -70,7 +70,7 @@
   container->SetLayoutManager(new BoxLayout(BoxLayout::kHorizontal, 0, 0, 10));
   BuildButton(container, "Popup widget", POPUP);
   BuildButton(container, "Dialog widget", DIALOG);
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   // Windows does not support TYPE_CONTROL top-level widgets.
   BuildButton(container, "Child widget", CHILD);
 #endif
