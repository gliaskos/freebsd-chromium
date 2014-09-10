--- media/filters/decrypting_audio_decoder.cc.orig	2014-09-04 00:04:17 UTC
+++ media/filters/decrypting_audio_decoder.cc
@@ -30,7 +30,7 @@
   // Out of sync of 100ms would be pretty noticeable and we should keep any
   // drift below that.
   const int64 kOutOfSyncThresholdInMilliseconds = 100;
-  return std::abs(timestamp_1.InMilliseconds() - timestamp_2.InMilliseconds()) >
+  return std::labs(timestamp_1.InMilliseconds() - timestamp_2.InMilliseconds()) >
          kOutOfSyncThresholdInMilliseconds;
 }
 
