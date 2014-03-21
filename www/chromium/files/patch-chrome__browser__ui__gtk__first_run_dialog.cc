--- ./chrome/browser/ui/gtk/first_run_dialog.cc.orig	2014-03-19 20:02:50.000000000 +0100
+++ ./chrome/browser/ui/gtk/first_run_dialog.cc	2014-03-21 00:27:12.000000000 +0100
@@ -132,6 +132,7 @@
   if (dialog_)
     gtk_widget_hide_all(dialog_);
 
+#if !defined(OS_BSD)
   // Check if user has opted into reporting.
   if (report_crashes_ &&
       gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(report_crashes_))) {
@@ -140,6 +141,9 @@
   } else {
     GoogleUpdateSettings::SetCollectStatsConsent(false);
   }
+#else
+  GoogleUpdateSettings::SetCollectStatsConsent(false);
+#endif
 
   // If selected set as default browser.
   if (make_default_ &&
