--- ./components/storage_monitor/storage_monitor.cc.orig	2014-07-15 21:02:29.000000000 +0200
+++ ./components/storage_monitor/storage_monitor.cc	2014-07-20 18:13:08.000000000 +0200
@@ -85,6 +85,7 @@
 
 void StorageMonitor::EnsureInitialized(base::Closure callback) {
   DCHECK(thread_checker_.CalledOnValidThread());
+//#if !defined(OS_BSD) //XXX(rene) why disabled?
   if (initialized_) {
     if (!callback.is_null())
       callback.Run();
@@ -100,6 +101,7 @@
 
   initializing_ = true;
   Init();
+//#endif
 }
 
 bool StorageMonitor::IsInitialized() const {
