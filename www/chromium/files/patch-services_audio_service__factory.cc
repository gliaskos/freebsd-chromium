--- services/audio/service_factory.cc.orig	2019-09-16 10:02:13 UTC
+++ services/audio/service_factory.cc
@@ -52,7 +52,7 @@ base::Optional<base::TimeDelta> GetQuitTimeout() {
   if (auto timeout = GetExperimentalQuitTimeout())
     return *timeout >= base::TimeDelta() ? timeout : base::nullopt;
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
   // On platforms where the audio service have launched, use default timeout
   // instead of no lifetime management.
   return base::TimeDelta::FromMinutes(15);
