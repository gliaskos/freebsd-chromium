--- third_party/webrtc/voice_engine/voice_engine_defines.h.orig	2017-03-09 20:05:29 UTC
+++ third_party/webrtc/voice_engine/voice_engine_defines.h
@@ -210,7 +210,7 @@ inline int VoEChannelId(int moduleId) {
 #include <pthread.h>
 #include <sys/socket.h>
 #include <sys/types.h>
-#ifndef QNX
+#if !defined(QNX) && !defined(WEBRTC_BSD)
 #include <linux/net.h>
 #ifndef ANDROID
 #include <sys/soundcard.h>
