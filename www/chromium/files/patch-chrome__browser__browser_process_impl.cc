--- ./chrome/browser/browser_process_impl.cc.orig	2014-03-04 03:17:18.000000000 +0100
+++ ./chrome/browser/browser_process_impl.cc	2014-03-07 14:10:32.000000000 +0100
@@ -258,7 +258,7 @@
 
   ExtensionRendererState::GetInstance()->Shutdown();
 
-#if !defined(OS_ANDROID) && !defined(OS_IOS)
+#if !defined(OS_ANDROID) && !defined(OS_IOS) && !defined(OS_BSD)
   media_file_system_registry_.reset();
   // Delete |storage_monitor_| now. Otherwise the FILE thread would be gone
   // when we try to release it in the dtor and Valgrind would report a
@@ -642,7 +642,7 @@
 }
 
 StorageMonitor* BrowserProcessImpl::storage_monitor() {
-#if defined(OS_ANDROID) || defined(OS_IOS)
+#if defined(OS_ANDROID) || defined(OS_IOS) || defined(OS_BSD)
   return NULL;
 #else
   return storage_monitor_.get();
@@ -651,7 +651,7 @@
 
 void BrowserProcessImpl::set_storage_monitor_for_test(
     scoped_ptr<StorageMonitor> monitor) {
-#if !defined(OS_ANDROID) && !defined(OS_IOS)
+#if !defined(OS_ANDROID) && !defined(OS_IOS) && !defined(OS_BSD)
   storage_monitor_ = monitor.Pass();
 #endif
 }
@@ -962,7 +962,7 @@
   }
 #endif
 
-#if !defined(OS_ANDROID) && !defined(OS_IOS)
+#if !defined(OS_ANDROID) && !defined(OS_IOS) && !defined(OS_BSD)
   storage_monitor_.reset(StorageMonitor::Create());
 #endif
 
