--- ./media/filters/ffmpeg_glue.cc.orig	2011-01-05 19:25:21.000000000 -0500
+++ ./media/filters/ffmpeg_glue.cc	2011-01-05 19:26:26.000000000 -0500
@@ -134,7 +134,7 @@
 
   // Register our protocol glue code with FFmpeg.
   avcodec_init();
-  av_register_protocol2(&kFFmpegURLProtocol, sizeof(kFFmpegURLProtocol));
+  av_register_protocol(&kFFmpegURLProtocol);
   av_lockmgr_register(&LockManagerOperation);
 
   // Now register the rest of FFmpeg.
