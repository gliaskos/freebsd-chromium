--- ./media/filters/decrypting_audio_decoder.cc.orig	2014-03-04 03:17:23.000000000 +0100
+++ ./media/filters/decrypting_audio_decoder.cc	2014-03-07 14:10:34.000000000 +0100
@@ -30,7 +30,7 @@
   // Out of sync of 100ms would be pretty noticeable and we should keep any
   // drift below that.
   const int64 kOutOfSyncThresholdInMilliseconds = 100;
-  return std::abs(timestamp_1.InMilliseconds() - timestamp_2.InMilliseconds()) >
+  return std::labs(timestamp_1.InMilliseconds() - timestamp_2.InMilliseconds()) >
          kOutOfSyncThresholdInMilliseconds;
 }
 
