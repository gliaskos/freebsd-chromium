--- ./media/audio/pulse/pulse_output.h.orig	2012-08-17 03:01:13.000000000 +0200
+++ ./media/audio/pulse/pulse_output.h	2012-08-23 22:31:44.000000000 +0200
@@ -30,7 +30,7 @@
 
 class SeekableBuffer;
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 class AudioManagerLinux;
 typedef AudioManagerLinux AudioManagerPulse;
 #elif defined(OS_OPENBSD)
