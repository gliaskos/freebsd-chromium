--- ui/views/accessibility/native_view_accessibility.cc.orig	2016-02-06 12:31:10 UTC
+++ ui/views/accessibility/native_view_accessibility.cc
@@ -13,7 +13,8 @@
 
 namespace views {
 
-#if !defined(OS_WIN) && !(defined(OS_LINUX) && !defined(OS_CHROMEOS))
+#if !defined(OS_WIN) && !(defined(OS_LINUX) && !defined(OS_CHROMEOS)) \
+ && !defined(OS_BSD)
 // static
 NativeViewAccessibility* NativeViewAccessibility::Create(View* view) {
   return new NativeViewAccessibility(view);
