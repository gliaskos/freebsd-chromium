--- ./chrome/browser/ui/webui/certificate_viewer_webui.cc.orig	2014-03-05 22:24:45.000000000 +0100
+++ ./chrome/browser/ui/webui/certificate_viewer_webui.cc	2014-03-07 23:57:26.000000000 +0100
@@ -229,7 +229,7 @@
   if (cert_index < 0)
     return;
 
-  NativeWebContentsModalDialog window =
+  _GtkWindow* window =
       platform_util::GetTopLevel(dialog_->dialog()->GetNativeDialog());
   ShowCertExportDialog(web_ui()->GetWebContents(),
                        window,
