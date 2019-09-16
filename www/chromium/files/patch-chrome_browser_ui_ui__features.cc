--- chrome/browser/ui/ui_features.cc.orig	2019-09-16 07:24:01 UTC
+++ chrome/browser/ui/ui_features.cc
@@ -50,7 +50,7 @@ const char kTabHoverCardsFeatureParameterName[] = "set
 const base::Feature kTabHoverCardImages{"TabHoverCardImages",
                                         base::FEATURE_DISABLED_BY_DEFAULT};
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 constexpr base::Feature kEnableDbusAndX11StatusIcons{
     "EnableDbusAndX11StatusIcons", base::FEATURE_ENABLED_BY_DEFAULT};
 #endif
