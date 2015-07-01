--- chrome/browser/about_flags.cc.orig	2014-10-10 09:15:30 UTC
+++ chrome/browser/about_flags.cc
@@ -674,7 +674,7 @@
     kOsLinux,
     SINGLE_VALUE_TYPE(switches::kEnableSmoothScrolling)
   },
-#if defined(USE_AURA) || defined(OS_LINUX)
+#if defined(USE_AURA) || defined(OS_LINUX) || defined(OS_BSD)
   {
     "overlay-scrollbars",
     IDS_FLAGS_ENABLE_OVERLAY_SCROLLBARS_NAME,
@@ -1538,7 +1538,7 @@
     SINGLE_VALUE_TYPE(switches::kResetAppListInstallState)
   },
 #if defined(ENABLE_APP_LIST)
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   {
     // This is compiled out on non-Linux platforms because otherwise it would be
     // visible on Win/Mac/CrOS but not on Linux GTK, which would be confusing.
@@ -2673,7 +2673,7 @@
   return kOsWin;
 #elif defined(OS_CHROMEOS)  // Needs to be before the OS_LINUX check.
   return kOsCrOS;
-#elif defined(OS_LINUX) || defined(OS_OPENBSD)
+#elif defined(OS_LINUX) || defined(OS_BSD)
   return kOsLinux;
 #elif defined(OS_ANDROID)
   return kOsAndroid;
