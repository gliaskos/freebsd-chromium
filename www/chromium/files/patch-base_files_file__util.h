--- base/files/file_util.h.orig	2019-04-30 22:22:28 UTC
+++ base/files/file_util.h
@@ -449,11 +449,7 @@ BASE_EXPORT bool VerifyPathControlledByAdmin(const bas
 // the directory |path|, in the number of FilePath::CharType, or -1 on failure.
 BASE_EXPORT int GetMaximumPathComponentLength(const base::FilePath& path);
 
-#if defined(OS_LINUX) || defined(OS_AIX)
-// Broad categories of file systems as returned by statfs() on Linux.
-enum FileSystemType {
-  FILE_SYSTEM_UNKNOWN,  // statfs failed.
-  FILE_SYSTEM_0,        // statfs.f_type == 0 means unknown, may indicate AFS.
+#if defined(OS_LINUX) || defined(OS_AIX) || defined(OS_BSD)
   FILE_SYSTEM_ORDINARY,       // on-disk filesystem like ext2
   FILE_SYSTEM_NFS,
   FILE_SYSTEM_SMB,
