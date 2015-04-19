--- ui/views/examples/widget_example.cc.orig	Sat Dec 27 12:54:25 2014
+++ ui/views/examples/widget_example.cc	Sat Dec 27 12:56:24 2014
@@ -70,7 +70,7 @@
   container->SetLayoutManager(new BoxLayout(BoxLayout::kHorizontal, 0, 0, 10));
   BuildButton(container, "Popup widget", POPUP);
   BuildButton(container, "Dialog widget", DIALOG);
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   // Windows does not support TYPE_CONTROL top-level widgets.
   BuildButton(container, "Child widget", CHILD);
 #endif
