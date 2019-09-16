--- chrome/browser/sync/chrome_sync_client.cc.orig	2019-09-09 21:55:10 UTC
+++ chrome/browser/sync/chrome_sync_client.cc
@@ -383,7 +383,7 @@ ChromeSyncClient::CreateDataTypeControllers(syncer::Sy
           GetSyncableServiceForType(syncer::APP_LIST), dump_stack));
 #endif  // BUILDFLAG(ENABLE_APP_LIST)
 
-#if defined(OS_LINUX) || defined(OS_WIN)
+#if defined(OS_LINUX) || defined(OS_WIN) || defined(OS_BSD)
   // Dictionary sync is enabled by default.
   if (!disabled_types.Has(syncer::DICTIONARY)) {
     controllers.push_back(
@@ -391,7 +391,7 @@ ChromeSyncClient::CreateDataTypeControllers(syncer::Sy
             syncer::DICTIONARY, GetModelTypeStoreService()->GetStoreFactory(),
             GetSyncableServiceForType(syncer::DICTIONARY), dump_stack));
   }
-#endif  // defined(OS_LINUX) || defined(OS_WIN)
+#endif  // defined(OS_LINUX) || defined(OS_WIN) || defined(OS_BSD)
 
 #if defined(OS_CHROMEOS)
   if (arc::IsArcAllowedForProfile(profile_) &&
