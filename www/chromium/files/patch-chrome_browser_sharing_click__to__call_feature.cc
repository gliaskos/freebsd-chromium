--- chrome/browser/sharing/click_to_call/feature.cc.orig	2019-09-16 07:22:21 UTC
+++ chrome/browser/sharing/click_to_call/feature.cc
@@ -9,7 +9,7 @@ const base::Feature kClickToCallReceiver{"ClickToCallR
                                          base::FEATURE_ENABLED_BY_DEFAULT};
 #endif  // defined(OS_ANDROID)
 
-#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD)
 const base::Feature kClickToCallUI{"ClickToCallUI",
                                    base::FEATURE_DISABLED_BY_DEFAULT};
-#endif  // defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX)
+#endif  // defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD)
