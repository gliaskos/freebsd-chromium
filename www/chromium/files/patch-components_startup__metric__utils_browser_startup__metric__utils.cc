--- components/startup_metric_utils/browser/startup_metric_utils.cc.orig	2019-09-09 21:55:15 UTC
+++ components/startup_metric_utils/browser/startup_metric_utils.cc
@@ -444,7 +444,7 @@ void AddStartupEventsForTelemetry()
 // RecordBrowserMainMessageLoopStart, the time since last startup is also logged
 // to a histogram suffixed with the startup temperature.
 void RecordTimeSinceLastStartup(PrefService* pref_service) {
-#if defined(OS_MACOSX) || defined(OS_WIN) || defined(OS_LINUX)
+#if defined(OS_MACOSX) || defined(OS_WIN) || defined(OS_LINUX) || defined(OS_BSD)
   DCHECK(pref_service);
 
   // Get the timestamp of the current startup.
@@ -473,7 +473,7 @@ void RecordTimeSinceLastStartup(PrefService* pref_serv
   // Write the timestamp of the current startup in |pref_service|.
   pref_service->SetInt64(prefs::kLastStartupTimestamp,
                          process_start_time.ToInternalValue());
-#endif  // defined(OS_MACOSX) || defined(OS_WIN) || defined(OS_LINUX)
+#endif  // defined(OS_MACOSX) || defined(OS_WIN) || defined(OS_LINUX) || defined(OS_BSD)
 }
 
 // Logs the Startup.SameVersionStartupCount histogram. Relies on |pref_service|
