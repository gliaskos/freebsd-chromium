--- components/omnibox/omnibox_field_trial.cc.orig	Sat May 23 00:59:48 2015
+++ components/omnibox/omnibox_field_trial.cc	Sat May 23 01:09:33 2015
@@ -155,7 +155,7 @@ bool OmniboxFieldTrial::InZeroSuggestFieldTrial() {
           kBundledExperimentFieldTrialName, kZeroSuggestRule) == "false")
     return false;
 #if defined(OS_WIN) || defined(OS_CHROMEOS) || defined(OS_LINUX) || \
-    (defined(OS_MACOSX) && !defined(OS_IOS))
+    (defined(OS_MACOSX) && !defined(OS_IOS)) || defined(OS_BSD)
   return true;
 #else
   return false;
