--- content/browser/renderer_host/render_widget_host_view_aura.cc.orig	2015-01-21 20:28:16 UTC
+++ content/browser/renderer_host/render_widget_host_view_aura.cc
@@ -90,7 +90,7 @@
 #include "ui/gfx/win/dpi.h"
 #endif
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if defined(OS_LINUX) && !defined(OS_CHROMEOS) || defined(OS_BSD)
 #include "content/common/input_messages.h"
 #include "ui/events/linux/text_edit_command_auralinux.h"
 #include "ui/events/linux/text_edit_key_bindings_delegate_auralinux.h"
@@ -662,7 +662,7 @@
   if (host)
     return reinterpret_cast<gfx::NativeViewId>(host->GetAcceleratedWidget());
 #endif
-  return static_cast<gfx::NativeViewId>(NULL);
+  return static_cast<gfx::NativeViewId>(0);
 }
 
 gfx::NativeViewAccessible RenderWidgetHostViewAura::GetNativeViewAccessible() {
@@ -2339,7 +2339,7 @@
 }
 
 bool RenderWidgetHostViewAura::NeedsMouseCapture() {
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_BSD) || defined(OS_LINUX)) && !defined(OS_CHROMEOS)
   return NeedsInputGrab();
 #endif
   return false;
@@ -2555,7 +2555,7 @@
 
 void RenderWidgetHostViewAura::ForwardKeyboardEvent(
     const NativeWebKeyboardEvent& event) {
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if defined(OS_LINUX) && !defined(OS_CHROMEOS) || defined(OS_BSD)
   ui::TextEditKeyBindingsDelegateAuraLinux* keybinding_delegate =
       ui::GetTextEditKeyBindingsDelegate();
   std::vector<ui::TextEditCommandAuraLinux> commands;
