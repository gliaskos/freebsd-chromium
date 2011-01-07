--- ./chrome/renderer/renderer_webkitclient_impl.cc.orig	2010-12-13 12:04:31.000000000 +0100
+++ ./chrome/renderer/renderer_webkitclient_impl.cc	2011-01-07 14:17:11.000000000 +0100
@@ -51,7 +51,7 @@
 #include "third_party/WebKit/WebKit/chromium/public/mac/WebSandboxSupport.h"
 #endif
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 #include <string>
 #include <map>
 
@@ -108,7 +108,7 @@
   virtual bool ensureFontLoaded(HFONT);
 #elif defined(OS_MACOSX)
   virtual bool loadFont(NSFont* srcFont, ATSFontContainerRef* out);
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_FREEBSD)
   virtual WebKit::WebString getFontFamilyForCharacters(
       const WebKit::WebUChar* characters, size_t numCharacters);
   virtual void getRenderStyleForStrike(
@@ -413,7 +413,7 @@
   return RenderThread::current()->Send(new ViewHostMsg_PreCacheFont(logfont));
 }
 
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_FREEBSD)
 
 WebString RendererWebKitClientImpl::SandboxSupport::getFontFamilyForCharacters(
     const WebKit::WebUChar* characters, size_t num_characters) {
