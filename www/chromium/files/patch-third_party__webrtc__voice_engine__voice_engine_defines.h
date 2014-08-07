--- ./third_party/webrtc/voice_engine/voice_engine_defines.h.orig	2014-07-15 21:05:15.000000000 +0200
+++ ./third_party/webrtc/voice_engine/voice_engine_defines.h	2014-07-20 18:13:09.000000000 +0200
@@ -237,7 +237,7 @@
 #include <pthread.h>
 #include <sys/socket.h>
 #include <sys/types.h>
-#ifndef QNX
+#if !defined(QNX) && !defined(WEBRTC_BSD)
   #include <linux/net.h>
 #ifndef ANDROID
   #include <sys/soundcard.h>
