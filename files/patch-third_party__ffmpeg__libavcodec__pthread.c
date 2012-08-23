--- ./third_party/ffmpeg/libavcodec/pthread.c.orig	2012-08-17 03:03:10.000000000 +0200
+++ ./third_party/ffmpeg/libavcodec/pthread.c	2012-08-23 22:31:45.000000000 +0200
@@ -38,7 +38,7 @@
 #if HAVE_GETPROCESSAFFINITYMASK
 #include <windows.h>
 #endif
-#if HAVE_SYSCTL
+#if HAVE_SYSCTL && !defined(__FreeBSD__)
 #if HAVE_SYS_PARAM_H
 #include <sys/param.h>
 #endif
