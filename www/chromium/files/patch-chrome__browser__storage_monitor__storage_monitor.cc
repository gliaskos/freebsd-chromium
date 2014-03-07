--- ./chrome/browser/storage_monitor/storage_monitor.cc.orig	2014-03-04 03:17:01.000000000 +0100
+++ ./chrome/browser/storage_monitor/storage_monitor.cc	2014-03-07 14:10:32.000000000 +0100
@@ -63,6 +63,7 @@
 
 void StorageMonitor::EnsureInitialized(base::Closure callback) {
   DCHECK(thread_checker_.CalledOnValidThread());
+#if !defined(OS_BSD)
   if (initialized_) {
     if (!callback.is_null())
       callback.Run();
@@ -78,6 +79,7 @@
 
   initializing_ = true;
   Init();
+#endif
 }
 
 bool StorageMonitor::IsInitialized() const {
