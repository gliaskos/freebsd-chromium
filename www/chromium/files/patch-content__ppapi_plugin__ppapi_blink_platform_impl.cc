--- content/ppapi_plugin/ppapi_blink_platform_impl.cc.orig	2015-05-26 14:15:10.633923000 -0400
+++ content/ppapi_plugin/ppapi_blink_platform_impl.cc	2015-05-26 14:17:51.584547000 -0400
@@ -18,7 +18,7 @@
 
 #if defined(OS_MACOSX)
 #include "third_party/WebKit/public/platform/mac/WebSandboxSupport.h"
-#elif defined(OS_POSIX) && !defined(OS_ANDROID)
+#elif defined(OS_POSIX) && !defined(OS_ANDROID) && !defined(OS_BSD)
 #include "content/common/child_process_sandbox_support_impl_linux.h"
 #include "third_party/WebKit/public/platform/linux/WebFallbackFont.h"
 #include "third_party/WebKit/public/platform/linux/WebSandboxSupport.h"
@@ -34,7 +34,7 @@
 
 namespace content {
 
-#if !defined(OS_ANDROID) && !defined(OS_WIN)
+#if !defined(OS_ANDROID) && !defined(OS_WIN) && !defined(OS_BSD)
 
 class PpapiBlinkPlatformImpl::SandboxSupport : public WebSandboxSupport {
  public:
@@ -115,7 +115,7 @@
 #endif  // !defined(OS_ANDROID) && !defined(OS_WIN)
 
 PpapiBlinkPlatformImpl::PpapiBlinkPlatformImpl() {
-#if !defined(OS_ANDROID) && !defined(OS_WIN)
+#if !defined(OS_ANDROID) && !defined(OS_WIN) && !defined(OS_BSD)
   sandbox_support_.reset(new PpapiBlinkPlatformImpl::SandboxSupport);
 #endif
 }
@@ -124,7 +124,7 @@
 }
 
 void PpapiBlinkPlatformImpl::Shutdown() {
-#if !defined(OS_ANDROID) && !defined(OS_WIN)
+#if !defined(OS_ANDROID) && !defined(OS_WIN) && !defined(OS_BSD)
   // SandboxSupport contains a map of WebFontFamily objects, which hold
   // WebCStrings, which become invalidated when blink is shut down. Hence, we
   // need to clear that map now, just before blink::shutdown() is called.
@@ -148,7 +148,7 @@
 }
 
 blink::WebSandboxSupport* PpapiBlinkPlatformImpl::sandboxSupport() {
-#if !defined(OS_ANDROID) && !defined(OS_WIN)
+#if !defined(OS_ANDROID) && !defined(OS_WIN) && !defined(OS_BSD)
   return sandbox_support_.get();
 #else
   return nullptr;
