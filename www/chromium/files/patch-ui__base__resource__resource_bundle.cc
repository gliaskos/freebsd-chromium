--- ui/base/resource/resource_bundle.cc.orig	2015-04-14 18:18:59.000000000 -0400
+++ ui/base/resource/resource_bundle.cc	2015-04-28 08:51:21.756989000 -0400
@@ -612,7 +612,7 @@
 }
 
 ScaleFactor ResourceBundle::GetMaxScaleFactor() const {
-#if defined(OS_CHROMEOS) || defined(OS_WIN) || defined(OS_LINUX)
+#if defined(OS_CHROMEOS) || defined(OS_WIN) || defined(OS_LINUX) || defined(OS_BSD)
   return max_scale_factor_;
 #else
   return GetSupportedScaleFactors().back();
@@ -674,7 +674,7 @@ void ResourceBundle::InitSharedInstance(Delegate* dele
 #elif defined(OS_MACOSX)
   if (base::mac::IsOSLionOrLater())
     supported_scale_factors.push_back(SCALE_FACTOR_200P);
-#elif defined(OS_CHROMEOS) || defined(OS_LINUX) || defined(OS_WIN)
+#elif defined(OS_CHROMEOS) || defined(OS_LINUX) || defined(OS_WIN) || defined(OS_BSD)
   supported_scale_factors.push_back(SCALE_FACTOR_200P);
 #endif
   ui::SetSupportedScaleFactors(supported_scale_factors);
