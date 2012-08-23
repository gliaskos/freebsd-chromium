--- ./chrome/browser/gpu_blacklist_unittest.cc.orig	2012-08-17 03:02:07.000000000 +0200
+++ ./chrome/browser/gpu_blacklist_unittest.cc	2012-08-23 22:31:43.000000000 +0200
@@ -194,7 +194,7 @@
       GpuBlacklist::kOsLinux, os_version.get(), gpu_info());
   EXPECT_EQ(type, content::GPU_FEATURE_TYPE_WEBGL);
 #if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_MACOSX) || \
-    defined(OS_OPENBSD)
+    defined(OS_BSD)
   // Blacklist entries will be filtered to the current OS only upon loading.
   EXPECT_TRUE(blacklist->LoadGpuBlacklist(
       vendor_json, GpuBlacklist::kCurrentOsOnly));
