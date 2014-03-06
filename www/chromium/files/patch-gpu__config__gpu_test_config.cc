--- ./gpu/config/gpu_test_config.cc.orig	2014-02-20 21:28:10.000000000 +0100
+++ ./gpu/config/gpu_test_config.cc	2014-02-24 17:23:45.000000000 +0100
@@ -21,8 +21,6 @@
 GPUTestConfig::OS GetCurrentOS() {
 #if defined(OS_CHROMEOS)
   return GPUTestConfig::kOsChromeOS;
-#elif defined(OS_LINUX) || defined(OS_OPENBSD)
-  return GPUTestConfig::kOsLinux;
 #elif defined(OS_WIN)
   int32 major_version = 0;
   int32 minor_version = 0;
@@ -57,6 +55,8 @@
   }
 #elif defined(OS_ANDROID)
   return GPUTestConfig::kOsAndroid;
+#elif defined(OS_POSIX)
+  return GPUTestConfig::kOsLinux;
 #endif
   return GPUTestConfig::kOsUnknown;
 }
