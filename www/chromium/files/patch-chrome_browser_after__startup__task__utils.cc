--- chrome/browser/after_startup_task_utils.cc.orig	2019-03-11 22:00:53 UTC
+++ chrome/browser/after_startup_task_utils.cc
@@ -115,7 +115,7 @@ void QueueTask(std::unique_ptr<AfterStartupTask> queue
 
 void SetBrowserStartupIsComplete() {
   DCHECK_CURRENTLY_ON(BrowserThread::UI);
-#if defined(OS_MACOSX) || defined(OS_WIN) || defined(OS_LINUX)
+#if defined(OS_MACOSX) || defined(OS_WIN) || defined(OS_LINUX) || defined(OS_BSD)
   // Process::Current().CreationTime() is not available on all platforms.
   const base::Time process_creation_time =
       base::Process::Current().CreationTime();
@@ -123,7 +123,7 @@ void SetBrowserStartupIsComplete() {
     UMA_HISTOGRAM_LONG_TIMES("Startup.AfterStartupTaskDelayedUntilTime",
                              base::Time::Now() - process_creation_time);
   }
-#endif  // defined(OS_MACOSX) || defined(OS_WIN) || defined(OS_LINUX)
+#endif  // defined(OS_MACOSX) || defined(OS_WIN) || defined(OS_LINUX) || defined(OS_BSD)
   UMA_HISTOGRAM_COUNTS_10000("Startup.AfterStartupTaskCount",
                              g_after_startup_tasks.Get().size());
   g_startup_complete_flag.Get().Set();
