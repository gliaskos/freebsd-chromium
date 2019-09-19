--- content/browser/builtin_service_manifests.cc.orig	2019-09-09 21:55:16 UTC
+++ content/browser/builtin_service_manifests.cc
@@ -32,7 +32,7 @@
 #include "services/tracing/manifest.h"
 #include "services/video_capture/public/cpp/manifest.h"
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
 #include "components/services/font/public/cpp/manifest.h"  // nogncheck
 #endif
 
@@ -97,7 +97,7 @@ const std::vector<service_manager::Manifest>& GetBuilt
                         kOutOfProcessBuiltin
                   : service_manager::Manifest::ExecutionMode::
                         kInProcessBuiltin),
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
           font_service::GetManifest(),
 #endif
 #if defined(OS_CHROMEOS)
