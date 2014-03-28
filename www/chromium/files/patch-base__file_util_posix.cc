--- ./base/file_util_posix.cc.orig	2014-03-26 21:14:53.000000000 +0100
+++ ./base/file_util_posix.cc	2014-03-28 10:57:58.000000000 +0100
@@ -672,7 +672,7 @@
 #endif  // defined(OS_ANDROID)
   results->is_directory = S_ISDIR(file_info.st_mode);
   results->size = file_info.st_size;
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || (defined(OS_FREEBSD) && __FreeBSD_version < 900000)
   results->last_modified = Time::FromTimeSpec(file_info.st_mtimespec);
   results->last_accessed = Time::FromTimeSpec(file_info.st_atimespec);
   results->creation_time = Time::FromTimeSpec(file_info.st_ctimespec);
