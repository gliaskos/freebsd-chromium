--- media/ffmpeg/ffmpeg_common.h.orig	2011-03-15 05:51:16.000000000 +0200
+++ media/ffmpeg/ffmpeg_common.h	2011-03-15 05:51:30.000000000 +0200
@@ -17,7 +17,9 @@
 // TODO(scherkus): fix and upstream the compiler warnings.
 MSVC_PUSH_DISABLE_WARNING(4244);
 #include <libavcodec/avcodec.h>
+#if LIBAVCORE_VERSION_MINOR > 11
 #include <libavcore/samplefmt.h>
+#endif
 #include <libavformat/avformat.h>
 #include <libavformat/avio.h>
 #include <libavutil/avutil.h>
@@ -25,6 +27,16 @@
 MSVC_POP_WARNING();
 }  // extern "C"
 
+#if LIBAVFORMAT_VERSION_MINOR < 69
+// FFmpeg commit : 9b07a2dc02e9b14e5b18485e7b16333a520b5dbb
+#define av_register_protocol2(a, b);    av_register_protocol(a);
+#endif
+
+#if LIBAVCORE_VERSION_MINOR < 12
+// FFmpeg commit : 6f84cd127947394e53a6621e9ed077517df5a6d2
+#define av_get_bits_per_sample_fmt      av_get_bits_per_sample_format
+#endif
+
 namespace media {
 
 // Wraps FFmpeg's av_free() in a class that can be passed as a template argument
