--- ./media/ffmpeg/ffmpeg_unittest.cc.orig	2011-01-05 14:52:34.000000000 -0500
+++ ./media/ffmpeg/ffmpeg_unittest.cc	2011-01-05 14:52:50.000000000 -0500
@@ -272,7 +272,7 @@
       if (result > 0) {
         // TODO(scherkus): move this to ffmpeg_util.h and dedup.
         int64 denominator = av_audio_context()->channels *
-            av_get_bits_per_sample_fmt(av_audio_context()->sample_fmt) / 8 *
+            av_get_bits_per_sample_format(av_audio_context()->sample_fmt) / 8 *
             av_audio_context()->sample_rate;
         double microseconds = size_out /
             (denominator /
