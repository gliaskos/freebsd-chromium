--- chrome/browser/browser_process_impl.cc.orig	2019-03-11 22:00:53 UTC
+++ chrome/browser/browser_process_impl.cc
@@ -1469,7 +1469,7 @@ void BrowserProcessImpl::Unpin() {
 }
 
 // Mac is currently not supported.
-#if (defined(OS_WIN) || defined(OS_LINUX)) && !defined(OS_CHROMEOS)
+#if (defined(OS_WIN) || defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
 
 bool BrowserProcessImpl::IsRunningInBackground() const {
   // Check if browser is in the background.
@@ -1539,4 +1539,4 @@ void BrowserProcessImpl::OnPendingRestartResult(
   }
 }
 
-#endif  // (defined(OS_WIN) || defined(OS_LINUX)) && !defined(OS_CHROMEOS)
+#endif  // (defined(OS_WIN) || defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
