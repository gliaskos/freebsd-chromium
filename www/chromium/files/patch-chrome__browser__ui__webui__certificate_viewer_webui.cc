--- ./chrome/browser/ui/webui/certificate_viewer_webui.cc.orig	2014-06-30 21:02:13.000000000 +0200
+++ ./chrome/browser/ui/webui/certificate_viewer_webui.cc	2014-07-01 22:46:25.000000000 +0200
@@ -274,7 +274,7 @@
   if (cert_index < 0)
     return;
 
-  NativeWebContentsModalDialog window =
+  _GtkWindow* window =
       platform_util::GetTopLevel(dialog_->GetNativeWebContentsModalDialog());
   ShowCertExportDialog(web_ui()->GetWebContents(),
                        window,
