--- ./third_party/ffmpeg/libavutil/mem.c.orig	2014-03-26 21:16:20.000000000 +0100
+++ ./third_party/ffmpeg/libavutil/mem.c	2014-03-28 10:57:59.000000000 +0100
@@ -32,7 +32,7 @@
 #include <stdint.h>
 #include <stdlib.h>
 #include <string.h>
-#if HAVE_MALLOC_H
+#if HAVE_MALLOC_H && !defined(__FreeBSD__)
 #include <malloc.h>
 #endif
 
