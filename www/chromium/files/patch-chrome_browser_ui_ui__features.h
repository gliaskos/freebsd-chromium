--- chrome/browser/ui/ui_features.h.orig	2019-09-16 07:24:27 UTC
+++ chrome/browser/ui/ui_features.h
@@ -35,7 +35,7 @@ extern const char kTabHoverCardsFeatureParameterName[]
 
 extern const base::Feature kTabHoverCardImages;
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 extern const base::Feature kEnableDbusAndX11StatusIcons;
 #endif
 
