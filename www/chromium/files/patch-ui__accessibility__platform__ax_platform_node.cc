--- ui/accessibility/platform/ax_platform_node.cc.orig	2016-02-06 12:31:09 UTC
+++ ui/accessibility/platform/ax_platform_node.cc
@@ -9,7 +9,7 @@
 
 namespace ui {
 
-#if !defined(OS_MACOSX) && !defined(OS_WIN) && !(defined(OS_LINUX) && !defined(OS_CHROMEOS))
+#if !defined(OS_MACOSX) && !defined(OS_WIN) && !(defined(OS_LINUX) && !defined(OS_CHROMEOS)) && !defined(OS_BSD)
 // static
 AXPlatformNode* AXPlatformNode::Create(AXPlatformNodeDelegate* delegate) {
   return nullptr;
