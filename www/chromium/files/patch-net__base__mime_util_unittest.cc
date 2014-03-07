--- ./net/base/mime_util_unittest.cc.orig	2014-03-04 03:16:06.000000000 +0100
+++ ./net/base/mime_util_unittest.cc	2014-03-07 14:10:34.000000000 +0100
@@ -247,7 +247,7 @@
     { "MeSsAge/*",  1, "eml" },
     { "image/bmp",  1, "bmp" },
     { "video/*",    6, "mp4" },
-#if defined(OS_LINUX) || defined(OS_ANDROID) || defined(OS_IOS)
+#if (defined(OS_POSIX) && !defined(OS_MACOSX)) || defined(OS_IOS)
     { "video/*",    6, "mpg" },
 #else
     { "video/*",    6, "mpeg" },
