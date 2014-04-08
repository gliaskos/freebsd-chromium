--- ./third_party/ffmpeg/libavutil/mem.c.orig	2014-04-02 21:05:14.000000000 +0200
+++ ./third_party/ffmpeg/libavutil/mem.c	2014-04-04 01:39:19.000000000 +0200
@@ -32,7 +32,7 @@
 #include <stdint.h>
 #include <stdlib.h>
 #include <string.h>
-#if HAVE_MALLOC_H
+#if HAVE_MALLOC_H && !defined(__FreeBSD__)
 #include <malloc.h>
 #endif
 
