--- device/media_transfer_protocol/media_transfer_protocol_daemon_client.h.orig	2017-03-09 20:04:33 UTC
+++ device/media_transfer_protocol/media_transfer_protocol_daemon_client.h
@@ -19,7 +19,7 @@
 #include "base/macros.h"
 #include "build/build_config.h"
 
-#if !defined(OS_LINUX)
+#if !defined(OS_LINUX) && !defined(OS_BSD)
 #error "Only used on Linux and ChromeOS"
 #endif
 
