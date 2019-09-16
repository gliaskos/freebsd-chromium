--- components/feature_engagement/public/feature_constants.h.orig	2019-09-16 07:58:20 UTC
+++ components/feature_engagement/public/feature_constants.h
@@ -17,7 +17,7 @@ extern const base::Feature kIPHDemoMode;
 // A feature to ensure all arrays can contain at least one feature.
 extern const base::Feature kIPHDummyFeature;
 
-#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || \
+#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD) || \
     defined(OS_CHROMEOS)
 extern const base::Feature kIPHReopenTabFeature;
 extern const base::Feature kIPHFocusModeFeature;
@@ -27,7 +27,7 @@ extern const base::Feature kIPHBookmarkFeature;
 extern const base::Feature kIPHIncognitoWindowFeature;
 extern const base::Feature kIPHNewTabFeature;
 #endif  // BUILDFLAG(ENABLE_LEGACY_DESKTOP_IPH)
-#endif  // defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) ||
+#endif  // defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD) ||
         // defined(OS_CHROMEOS)
 
 // All the features declared for Android below that are also used in Java,
