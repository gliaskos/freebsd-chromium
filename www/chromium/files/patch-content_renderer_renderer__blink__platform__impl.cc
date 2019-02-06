--- content/renderer/renderer_blink_platform_impl.cc.orig	2019-01-30 02:18:00.000000000 +0100
+++ content/renderer/renderer_blink_platform_impl.cc	2019-02-01 07:43:16.289170000 +0100
@@ -116,7 +116,7 @@
 
 #if defined(OS_POSIX)
 #include "base/file_descriptor_posix.h"
-#if !defined(OS_MACOSX) && !defined(OS_ANDROID)
+#if !defined(OS_MACOSX) && !defined(OS_ANDROID) && !defined(OS_BSD)
 #include <map>
 #include <string>
 
@@ -247,7 +247,7 @@
                      ->Clone();
     thread_safe_sender_ = RenderThreadImpl::current()->thread_safe_sender();
     blob_registry_.reset(new WebBlobRegistryImpl(thread_safe_sender_.get()));
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
     font_loader_ = sk_make_sp<font_service::FontLoader>(connector_.get());
     SkFontConfigInterface::SetGlobal(font_loader_);
 #endif
