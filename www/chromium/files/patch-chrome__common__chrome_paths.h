--- ./chrome/common/chrome_paths.h.orig	2014-03-26 21:15:15.000000000 +0100
+++ ./chrome/common/chrome_paths.h	2014-03-28 10:57:59.000000000 +0100
@@ -109,7 +109,7 @@
                                    // files to be installed when managed user
                                    // session starts.
 
-#if defined(OS_LINUX) || (defined(OS_MACOSX) && !defined(OS_IOS))
+#if defined(OS_LINUX) || defined(OS_FREEBSD) || (defined(OS_MACOSX) && !defined(OS_IOS))
   DIR_NATIVE_MESSAGING,         // System directory where native messaging host
                                 // manifest files are stored.
   DIR_USER_NATIVE_MESSAGING,    // Directory with Native Messaging Hosts
