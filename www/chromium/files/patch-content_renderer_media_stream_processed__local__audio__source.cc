--- content/renderer/media/stream/processed_local_audio_source.cc.orig	2019-09-09 21:55:17 UTC
+++ content/renderer/media/stream/processed_local_audio_source.cc
@@ -82,7 +82,7 @@ void LogAudioProcesingProperties(
 }  // namespace
 
 bool IsApmInAudioServiceEnabled() {
-#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD)
   return base::FeatureList::IsEnabled(features::kWebRtcApmInAudioService);
 #else
   return false;
@@ -407,7 +407,7 @@ void ProcessedLocalAudioSource::CaptureUsingProcessor(
     bool key_pressed) {
 #if defined(OS_WIN) || defined(OS_MACOSX)
   DCHECK_LE(volume, 1.0);
-#elif (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_OPENBSD)
+#elif (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
   // We have a special situation on Linux where the microphone volume can be
   // "higher than maximum". The input volume slider in the sound preference
   // allows the user to set a scaling that is higher than 100%. It means that
