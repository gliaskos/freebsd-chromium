--- components/gcm_driver/gcm_client.h.orig	2017-06-05 19:03:05 UTC
+++ components/gcm_driver/gcm_client.h
@@ -82,6 +82,7 @@ class GCMClient {
     PLATFORM_CROS,
     PLATFORM_IOS,
     PLATFORM_ANDROID,
+    PLATFORM_BSD,
     PLATFORM_UNKNOWN
   };
 
