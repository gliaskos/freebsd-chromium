--- content/renderer/media/webrtc_audio_capturer.cc.orig	2014-09-11 08:58:47.000000000 +0200
+++ content/renderer/media/webrtc_audio_capturer.cc	2014-09-11 12:00:46.000000000 +0200
@@ -430,8 +430,8 @@
 // CaptureCallback.
 #if defined(OS_WIN) || defined(OS_MACOSX)
   DCHECK_LE(volume, 1.0);
-#elif (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_OPENBSD)
-  // We have a special situation on Linux where the microphone volume can be
+#elif defined(OS_POSIX) && !defined(OS_CHROMEOS) && !defined(OS_ANDROID)
+  // We have a special situation on POSIX where the microphone volume can be
   // "higher than maximum". The input volume slider in the sound preference
   // allows the user to set a scaling that is higher than 100%. It means that
   // even if the reported maximum levels is N, the actual microphone level can
