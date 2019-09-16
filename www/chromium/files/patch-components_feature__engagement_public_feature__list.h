--- components/feature_engagement/public/feature_list.h.orig	2019-09-16 08:12:14 UTC
+++ components/feature_engagement/public/feature_list.h
@@ -107,7 +107,7 @@ DEFINE_VARIATION_PARAM(kIPHBadgedTranslateManualTrigge
                        "IPH_BadgedTranslateManualTrigger");
 #endif  // defined(OS_IOS)
 
-#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || \
+#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD) || \
     defined(OS_CHROMEOS)
 DEFINE_VARIATION_PARAM(kIPHReopenTabFeature, "IPH_ReopenTab");
 DEFINE_VARIATION_PARAM(kIPHFocusModeFeature, "IPH_FocusMode");
@@ -116,7 +116,7 @@ DEFINE_VARIATION_PARAM(kIPHBookmarkFeature, "IPH_Bookm
 DEFINE_VARIATION_PARAM(kIPHIncognitoWindowFeature, "IPH_IncognitoWindow");
 DEFINE_VARIATION_PARAM(kIPHNewTabFeature, "IPH_NewTab");
 #endif  // BUILDFLAG(ENABLE_LEGACY_DESKTOP_IN_PRODUCT_HELP)
-#endif  // defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) ||
+#endif  // defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD) ||
         // defined(OS_CHROMEOS)
 
 }  // namespace
@@ -165,7 +165,7 @@ constexpr flags_ui::FeatureEntry::FeatureVariation
         VARIATION_ENTRY(kIPHNewIncognitoTabTipFeature),
         VARIATION_ENTRY(kIPHBadgedReadingListFeature),
         VARIATION_ENTRY(kIPHBadgedTranslateManualTriggerFeature),
-#elif defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || \
+#elif defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD) || \
     defined(OS_CHROMEOS)
         VARIATION_ENTRY(kIPHReopenTabFeature),
         VARIATION_ENTRY(kIPHFocusModeFeature),
@@ -174,7 +174,7 @@ constexpr flags_ui::FeatureEntry::FeatureVariation
         VARIATION_ENTRY(kIPHIncognitoWindowFeature),
         VARIATION_ENTRY(kIPHNewTabFeature),
 #endif  // BUILDFLAG(ENABLE_LEGACY_DESKTOP_IN_PRODUCT_HELP)
-#endif  // defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) ||
+#endif  // defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD) ||
         // defined(OS_CHROMEOS)
 };
 
