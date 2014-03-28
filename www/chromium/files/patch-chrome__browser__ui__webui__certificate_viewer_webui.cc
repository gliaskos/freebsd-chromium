--- ./chrome/browser/ui/webui/certificate_viewer_webui.cc.orig	2014-03-26 21:15:43.000000000 +0100
+++ ./chrome/browser/ui/webui/certificate_viewer_webui.cc	2014-03-28 10:57:59.000000000 +0100
@@ -229,7 +229,7 @@
   if (cert_index < 0)
     return;
 
-  NativeWebContentsModalDialog window =
+  _GtkWindow* window =
       platform_util::GetTopLevel(dialog_->dialog()->GetNativeDialog());
   ShowCertExportDialog(web_ui()->GetWebContents(),
                        window,
