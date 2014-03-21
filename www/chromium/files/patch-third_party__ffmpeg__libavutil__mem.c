--- ./third_party/ffmpeg/libavutil/mem.c.orig	2014-03-19 20:03:37.000000000 +0100
+++ ./third_party/ffmpeg/libavutil/mem.c	2014-03-21 00:27:13.000000000 +0100
@@ -32,7 +32,7 @@
 #include <stdint.h>
 #include <stdlib.h>
 #include <string.h>
-#if HAVE_MALLOC_H
+#if HAVE_MALLOC_H && !defined(__FreeBSD__)
 #include <malloc.h>
 #endif
 
