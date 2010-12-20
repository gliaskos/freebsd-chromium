--- ./gpu/demos/framework/main_exe.cc.orig	2010-12-13 12:03:08.000000000 +0100
+++ ./gpu/demos/framework/main_exe.cc	2010-12-20 20:41:37.000000000 +0100
@@ -8,9 +8,9 @@
 #include "base/logging.h"
 #include "gpu/demos/framework/window.h"
 
-#if defined(OS_LINUX)
+#if defined(TOOLKIT_USES_GTK)
 #include <gtk/gtk.h>
-#endif  // OS_LINUX
+#endif  // TOOLKIT_USES_GTK
 
 namespace {
 static const int kWindowWidth = 512;
@@ -18,9 +18,9 @@
 }  // namespace.
 
 int main(int argc, char** argv) {
-#if defined(OS_LINUX)
+#if defined(TOOLKIT_USES_GTK)
   gtk_init(&argc, &argv);
-#endif  // OS_LINUX
+#endif  // TOOLKIT_USES_GTK
 
   // AtExitManager is used by singleton classes to delete themselves when
   // the program terminates.
