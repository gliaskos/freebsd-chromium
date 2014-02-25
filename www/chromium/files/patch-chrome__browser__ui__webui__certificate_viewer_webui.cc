--- ./chrome/browser/ui/webui/certificate_viewer_webui.cc.orig	2014-02-20 21:27:34.000000000 +0100
+++ ./chrome/browser/ui/webui/certificate_viewer_webui.cc	2014-02-24 17:23:44.000000000 +0100
@@ -228,7 +228,7 @@
   if (cert_index < 0)
     return;
 
-  NativeWebContentsModalDialog window =
+  _GtkWindow* window =
       platform_util::GetTopLevel(dialog_->dialog()->GetNativeDialog());
   ShowCertExportDialog(web_ui()->GetWebContents(),
                        window,
