--- media/audio/audio_manager.h.orig	2017-06-05 19:03:08 UTC
+++ media/audio/audio_manager.h
@@ -81,7 +81,7 @@ class MEDIA_EXPORT AudioManager {
   static void StartHangMonitorIfNeeded(
       scoped_refptr<base::SingleThreadTaskRunner> task_runner);
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
   // Sets the name of the audio source as seen by external apps. Only actually
   // used with PulseAudio as of this writing.
   static void SetGlobalAppName(const std::string& app_name);
