--- content/public/common/content_switches.h.orig	2014-09-11 08:58:47.000000000 +0200
+++ content/public/common/content_switches.h	2014-09-12 15:01:30.000000000 +0200
@@ -265,7 +265,7 @@
 CONTENT_EXPORT extern const char kDisableVaapiAcceleratedVideoEncode[];
 #endif
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_FREEBSD)
 CONTENT_EXPORT extern const char kEnableSpeechDispatcher[];
 #endif
 
