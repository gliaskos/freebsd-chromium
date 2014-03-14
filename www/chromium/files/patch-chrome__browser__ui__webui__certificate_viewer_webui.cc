--- ./chrome/browser/ui/webui/certificate_viewer_webui.cc.orig	2014-03-12 20:22:00.000000000 +0100
+++ ./chrome/browser/ui/webui/certificate_viewer_webui.cc	2014-03-14 09:23:25.000000000 +0100
@@ -229,7 +229,7 @@
   if (cert_index < 0)
     return;
 
-  NativeWebContentsModalDialog window =
+  _GtkWindow* window =
       platform_util::GetTopLevel(dialog_->dialog()->GetNativeDialog());
   ShowCertExportDialog(web_ui()->GetWebContents(),
                        window,
