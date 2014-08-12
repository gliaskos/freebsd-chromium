--- chrome/browser/ui/views/first_run_dialog.cc.orig	2014-07-15 21:01:25.000000000 +0200
+++ chrome/browser/ui/views/first_run_dialog.cc	2014-08-12 23:59:48.000000000 +0200
@@ -124,12 +124,16 @@
 bool FirstRunDialog::Accept() {
   GetWidget()->Hide();
 
+#if !defined(OS_BSD)
   if (report_crashes_ && report_crashes_->checked()) {
     if (GoogleUpdateSettings::SetCollectStatsConsent(true))
       breakpad::InitCrashReporter(std::string());
-  } else {
+  } else
+#else
+  {
     GoogleUpdateSettings::SetCollectStatsConsent(false);
   }
+#endif
 
   if (make_default_ && make_default_->checked())
     ShellIntegration::SetAsDefaultBrowser();
