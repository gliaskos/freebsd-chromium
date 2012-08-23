--- ./third_party/ffmpeg/libavutil/mem.c.orig	2012-08-17 03:03:11.000000000 +0200
+++ ./third_party/ffmpeg/libavutil/mem.c	2012-08-23 22:31:45.000000000 +0200
@@ -31,7 +31,7 @@
 #include <limits.h>
 #include <stdlib.h>
 #include <string.h>
-#if HAVE_MALLOC_H
+#if HAVE_MALLOC_H && !defined(__FreeBSD__)
 #include <malloc.h>
 #endif
 
