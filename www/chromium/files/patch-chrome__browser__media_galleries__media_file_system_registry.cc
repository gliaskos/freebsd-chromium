--- ./chrome/browser/media_galleries/media_file_system_registry.cc.orig	2014-04-02 21:04:22.000000000 +0200
+++ ./chrome/browser/media_galleries/media_file_system_registry.cc	2014-04-04 01:39:18.000000000 +0200
@@ -631,7 +631,10 @@
 // Constructor in 'private' section because depends on private class definition.
 MediaFileSystemRegistry::MediaFileSystemRegistry()
     : file_system_context_(new MediaFileSystemContextImpl(this)) {
-  StorageMonitor::GetInstance()->AddObserver(this);
+  /* This conditional is needed for shutdown.  Destructors
+     try to get the media file system registry. */
+  if (StorageMonitor::GetInstance())
+    StorageMonitor::GetInstance()->AddObserver(this);
 }
 
 MediaFileSystemRegistry::~MediaFileSystemRegistry() {
