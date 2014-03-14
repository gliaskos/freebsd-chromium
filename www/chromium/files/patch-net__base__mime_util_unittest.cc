--- ./net/base/mime_util_unittest.cc.orig	2014-03-12 20:21:27.000000000 +0100
+++ ./net/base/mime_util_unittest.cc	2014-03-14 09:23:25.000000000 +0100
@@ -260,7 +260,7 @@
     { "MeSsAge/*",  1, "eml" },
     { "image/bmp",  1, "bmp" },
     { "video/*",    6, "mp4" },
-#if defined(OS_LINUX) || defined(OS_ANDROID) || defined(OS_IOS)
+#if (defined(OS_POSIX) && !defined(OS_MACOSX)) || defined(OS_IOS)
     { "video/*",    6, "mpg" },
 #else
     { "video/*",    6, "mpeg" },
