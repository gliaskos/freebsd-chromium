--- ./media/ffmpeg/ffmpeg_common.h.orig	2011-01-05 14:51:04.000000000 -0500
+++ ./media/ffmpeg/ffmpeg_common.h	2011-01-05 14:51:59.000000000 -0500
@@ -16,12 +16,11 @@
 // Temporarily disable possible loss of data warning.
 // TODO(scherkus): fix and upstream the compiler warnings.
 MSVC_PUSH_DISABLE_WARNING(4244);
-#include <libavcodec/avcodec.h>
-#include <libavcore/samplefmt.h>
-#include <libavformat/avformat.h>
-#include <libavformat/avio.h>
-#include <libavutil/avutil.h>
-#include <libavutil/log.h>
+#include <ffmpeg/avcodec.h>
+#include <ffmpeg/avformat.h>
+#include <ffmpeg/avio.h>
+#include <ffmpeg/avutil.h>
+#include <ffmpeg/log.h>
 MSVC_POP_WARNING();
 }  // extern "C"
 
