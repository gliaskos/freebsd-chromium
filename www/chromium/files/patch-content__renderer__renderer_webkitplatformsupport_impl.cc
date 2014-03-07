--- ./content/renderer/renderer_webkitplatformsupport_impl.cc.orig	2014-03-05 22:24:03.000000000 +0100
+++ ./content/renderer/renderer_webkitplatformsupport_impl.cc	2014-03-07 23:57:26.000000000 +0100
@@ -86,7 +86,7 @@
 #include "third_party/WebKit/public/platform/mac/WebSandboxSupport.h"
 #endif
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID) && !defined(OS_BSD)
 #include <map>
 #include <string>
 
@@ -162,7 +162,7 @@
   scoped_refptr<ThreadSafeSender> thread_safe_sender_;
 };
 
-#if defined(OS_ANDROID)
+#if defined(OS_ANDROID) || defined(OS_BSD)
 // WebKit doesn't use WebSandboxSupport on android so we don't need to
 // implement anything here.
 class RendererWebKitPlatformSupportImpl::SandboxSupport {
@@ -254,7 +254,7 @@
 }
 
 blink::WebSandboxSupport* RendererWebKitPlatformSupportImpl::sandboxSupport() {
-#if defined(OS_ANDROID)
+#if defined(OS_ANDROID) || defined(OS_BSD)
   // WebKit doesn't use WebSandboxSupport on android.
   return NULL;
 #else
@@ -539,7 +539,7 @@
   return FontLoader::CGFontRefFromBuffer(font_data, font_data_size, out);
 }
 
-#elif defined(OS_ANDROID)
+#elif defined(OS_ANDROID) || defined(OS_BSD)
 
 // WebKit doesn't use WebSandboxSupport on android so we don't need to
 // implement anything here. This is cleaner to support than excluding the
