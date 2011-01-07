--- ./chrome/browser/file_path_watcher_stub.cc.orig	2010-12-13 12:04:29.000000000 +0100
+++ ./chrome/browser/file_path_watcher_stub.cc	2011-01-07 14:17:10.000000000 +0100
@@ -9,7 +9,7 @@
 
 class FilePathWatcherImpl : public FilePathWatcher::PlatformDelegate {
  public:
-  virtual bool Watch(const FilePath& path, FileWatcher::Delegate* delegate) {
+  virtual bool Watch(const FilePath& path, FilePathWatcher::Delegate* delegate) {
     return false;
   }
 };
