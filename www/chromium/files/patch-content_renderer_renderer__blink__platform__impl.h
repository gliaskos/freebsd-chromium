--- content/renderer/renderer_blink_platform_impl.h.orig	2019-02-01 07:44:32.951114000 +0100
+++ content/renderer/renderer_blink_platform_impl.h	2019-02-01 07:45:38.604073000 +0100
@@ -29,7 +29,7 @@
 #include "third_party/blink/public/platform/modules/cache_storage/cache_storage.mojom.h"
 #include "third_party/blink/public/platform/modules/webdatabase/web_database.mojom.h"
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
 #include "components/services/font/public/cpp/font_loader.h"  // nogncheck
 #include "third_party/skia/include/core/SkRefCnt.h"           // nogncheck
 #endif
@@ -299,7 +299,7 @@
   blink::mojom::CodeCacheHostPtrInfo code_cache_host_info_;
   scoped_refptr<blink::mojom::ThreadSafeCodeCacheHostPtr> code_cache_host_;
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   class SandboxSupport;
   sk_sp<font_service::FontLoader> font_loader_;
 #endif
