--- chrome/browser/policy/configuration_policy_handler_list_factory.cc.orig	2019-09-09 21:55:10 UTC
+++ chrome/browser/policy/configuration_policy_handler_list_factory.cc
@@ -110,7 +110,7 @@
 #endif
 
 #if defined(OS_WIN) || defined(OS_MACOSX) || \
-    (defined(OS_LINUX) && !defined(OS_CHROMEOS))
+    (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 #include "chrome/browser/browser_switcher/browser_switcher_prefs.h"
 #endif
 
@@ -326,11 +326,11 @@ const PolicyToPreferenceMapEntry kSimplePolicyMap[] = 
     prefs::kSafeBrowsingRealTimeLookupEnabled,
     base::Value::Type::BOOLEAN
   },
-#if defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_CHROMEOS)
+#if defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_CHROMEOS) || defined(OS_BSD)
   { key::kAuthNegotiateDelegateByKdcPolicy,
     prefs::kAuthNegotiateDelegateByKdcPolicy,
     base::Value::Type::BOOLEAN },
-#endif  // defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_CHROMEOS)
+#endif  // defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_CHROMEOS) || defined(OS_BSD)
 #if defined(OS_POSIX)
   { key::kNtlmV2Enabled,
     prefs::kNtlmV2Enabled,
@@ -1032,7 +1032,7 @@ const PolicyToPreferenceMapEntry kSimplePolicyMap[] = 
     base::Value::Type::BOOLEAN },
 
 #if defined(OS_WIN) || defined(OS_MACOSX) || \
-    (defined(OS_LINUX) && !defined(OS_CHROMEOS))
+    (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
   { key::kAlternativeBrowserPath,
     browser_switcher::prefs::kAlternativeBrowserPath,
     base::Value::Type::STRING },
@@ -1072,7 +1072,7 @@ const PolicyToPreferenceMapEntry kSimplePolicyMap[] = 
     browser_switcher::prefs::kChromeParameters,
     base::Value::Type::LIST },
 #endif
-#if defined(OS_LINUX) || defined(OS_WIN) || defined(OS_MACOSX)
+#if defined(OS_LINUX) || defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_BSD)
   { key::kBrowserGuestModeEnforced,
     prefs::kBrowserGuestModeEnforced,
     base::Value::Type::BOOLEAN },
