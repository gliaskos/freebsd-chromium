--- ./chrome/browser/ui/webui/certificate_viewer_webui.cc.orig	2014-03-04 03:17:09.000000000 +0100
+++ ./chrome/browser/ui/webui/certificate_viewer_webui.cc	2014-03-07 14:10:32.000000000 +0100
@@ -228,7 +228,7 @@
   if (cert_index < 0)
     return;
 
-  NativeWebContentsModalDialog window =
+  _GtkWindow* window =
       platform_util::GetTopLevel(dialog_->dialog()->GetNativeDialog());
   ShowCertExportDialog(web_ui()->GetWebContents(),
                        window,
