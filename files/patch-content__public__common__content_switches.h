--- content/public/common/content_switches.h.orig	2014-10-10 09:15:31 UTC
+++ content/public/common/content_switches.h
@@ -269,7 +269,7 @@
 CONTENT_EXPORT extern const char kDisableVaapiAcceleratedVideoEncode[];
 #endif
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS))
 CONTENT_EXPORT extern const char kEnableSpeechDispatcher[];
 #endif
 
