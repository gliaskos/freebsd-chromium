--- chrome/browser/sync/profile_sync_components_factory_impl.cc.orig.port	Tue Mar 10 23:41:40 2015
+++ chrome/browser/sync/profile_sync_components_factory_impl.cc	Wed Mar 11 07:22:50 2015
@@ -382,7 +382,7 @@
   }
 #endif
 
-#if defined(OS_LINUX) || defined(OS_WIN) || defined(OS_CHROMEOS)
+#if defined(OS_LINUX) || defined(OS_WIN) || defined(OS_CHROMEOS) || defined(OS_BSD)
   // Dictionary sync is enabled by default.
   if (!disabled_types.Has(syncer::DICTIONARY)) {
     pss->RegisterDataTypeController(
