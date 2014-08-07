--- ./net/base/mime_util_unittest.cc.orig	2014-07-15 21:02:58.000000000 +0200
+++ ./net/base/mime_util_unittest.cc	2014-07-20 18:13:09.000000000 +0200
@@ -291,7 +291,7 @@
     { "MeSsAge/*",  1, "eml" },
     { "image/bmp",  1, "bmp" },
     { "video/*",    6, "mp4" },
-#if defined(OS_LINUX) || defined(OS_ANDROID) || defined(OS_IOS)
+#if (defined(OS_POSIX) && !defined(OS_MACOSX)) || defined(OS_IOS)
     { "video/*",    6, "mpg" },
 #else
     { "video/*",    6, "mpeg" },
