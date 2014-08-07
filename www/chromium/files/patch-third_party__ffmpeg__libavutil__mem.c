--- ./third_party/ffmpeg/libavutil/mem.c.orig	2014-07-15 21:03:39.000000000 +0200
+++ ./third_party/ffmpeg/libavutil/mem.c	2014-07-20 18:13:09.000000000 +0200
@@ -32,7 +32,7 @@
 #include <stdint.h>
 #include <stdlib.h>
 #include <string.h>
-#if HAVE_MALLOC_H
+#if HAVE_MALLOC_H && !defined(__FreeBSD__)
 #include <malloc.h>
 #endif
 
