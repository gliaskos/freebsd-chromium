--- ./content/public/common/sandbox_init.h.orig	2012-08-17 03:01:29.000000000 +0200
+++ ./content/public/common/sandbox_init.h	2012-08-23 22:31:44.000000000 +0200
@@ -76,7 +76,7 @@
 CONTENT_EXPORT bool InitializeSandbox(int sandbox_type,
                                       const FilePath& allowed_path);
 
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_BSD)
 
 CONTENT_EXPORT void InitializeSandbox();
 
