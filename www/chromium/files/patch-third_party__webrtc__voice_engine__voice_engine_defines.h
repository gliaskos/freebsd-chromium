--- ./third_party/webrtc/voice_engine/voice_engine_defines.h.orig	2014-02-20 21:29:46.000000000 +0100
+++ ./third_party/webrtc/voice_engine/voice_engine_defines.h	2014-02-24 17:23:45.000000000 +0100
@@ -233,7 +233,7 @@
 #include <pthread.h>
 #include <sys/socket.h>
 #include <sys/types.h>
-#ifndef QNX
+#if !defined(QNX) && !defined(WEBRTC_BSD)
   #include <linux/net.h>
 #ifndef ANDROID
   #include <sys/soundcard.h>
