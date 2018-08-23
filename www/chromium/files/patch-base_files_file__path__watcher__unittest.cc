--- base/files/file_path_watcher_unittest.cc.orig	2018-08-23 12:42:09.649843000 +0200
+++ base/files/file_path_watcher_unittest.cc	2018-08-23 12:44:40.549411000 +0200
@@ -419,6 +419,7 @@
   ASSERT_TRUE(WaitForEvents());
 }
 
+#if !defined(OS_BSD)
 TEST_F(FilePathWatcherTest, WatchDirectory) {
   FilePathWatcher watcher;
   FilePath dir(temp_dir_.GetPath().AppendASCII("dir"));
@@ -450,6 +451,7 @@
   VLOG(1) << "Waiting for file2 creation";
   ASSERT_TRUE(WaitForEvents());
 }
+#endif
 
 TEST_F(FilePathWatcherTest, MoveParent) {
   FilePathWatcher file_watcher;
