--- ./media/base/media_switches.cc.orig	2010-12-13 12:03:01.000000000 +0100
+++ ./media/base/media_switches.cc	2010-12-20 20:41:37.000000000 +0100
@@ -6,7 +6,7 @@
 
 namespace switches {
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 // The Alsa device to use when opening an audio stream.
 const char kAlsaOutputDevice[] = "alsa-output-device";
 // The Alsa device to use when opening an audio input stream.
