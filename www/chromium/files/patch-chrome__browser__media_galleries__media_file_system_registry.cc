--- ./chrome/browser/media_galleries/media_file_system_registry.cc.orig	2014-06-30 21:02:20.000000000 +0200
+++ ./chrome/browser/media_galleries/media_file_system_registry.cc	2014-07-07 14:02:53.000000000 +0200
@@ -724,7 +724,10 @@
 // Constructor in 'private' section because depends on private class definition.
 MediaFileSystemRegistry::MediaFileSystemRegistry()
     : file_system_context_(new MediaFileSystemContextImpl) {
-  StorageMonitor::GetInstance()->AddObserver(this);
+  // This conditional is needed for shutdown.  Destructors
+  // try to get the media file system registry.
+  if (StorageMonitor::GetInstance())
+    StorageMonitor::GetInstance()->AddObserver(this);
 }
 
 MediaFileSystemRegistry::~MediaFileSystemRegistry() {
