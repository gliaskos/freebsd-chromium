--- chrome/browser/media_galleries/media_folder_finder.cc.orig	2016-05-11 19:02:14 UTC
+++ chrome/browser/media_galleries/media_folder_finder.cc
@@ -55,10 +55,10 @@ const int kPrunedPaths[] = {
   chrome::DIR_USER_APPLICATIONS,
   chrome::DIR_USER_LIBRARY,
 #endif
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   base::DIR_CACHE,
 #endif
-#if defined(OS_WIN) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_BSD)
   base::DIR_TEMP,
 #endif
 };
