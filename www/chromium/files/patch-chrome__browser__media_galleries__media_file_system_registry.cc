--- ./chrome/browser/media_galleries/media_file_system_registry.cc.orig	2014-03-19 20:02:45.000000000 +0100
+++ ./chrome/browser/media_galleries/media_file_system_registry.cc	2014-03-21 00:27:12.000000000 +0100
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
