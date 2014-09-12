--- chrome/renderer/pepper/pepper_flash_font_file_host.h.orig	2014-09-11 08:41:43.000000000 +0200
+++ chrome/renderer/pepper/pepper_flash_font_file_host.h	2014-09-12 12:46:21.000000000 +0200
@@ -10,7 +10,7 @@
 #include "ppapi/c/private/pp_private_font_charset.h"
 #include "ppapi/host/resource_host.h"
 
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
 #include "base/files/scoped_file.h"
 #endif
 
@@ -45,7 +45,7 @@
   // Non-owning pointer.
   content::RendererPpapiHost* renderer_ppapi_host_;
 
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
   base::ScopedFD fd_;
 #endif
 
