--- chrome/browser/download/download_commands.cc.orig	2016-04-08 12:02:07.000000000 -0400
+++ chrome/browser/download/download_commands.cc	2016-05-19 19:50:26.382747000 -0400
@@ -211,7 +211,7 @@
       return download_item_->GetOpenWhenComplete() ||
              download_crx_util::IsExtensionDownload(*download_item_);
     case ALWAYS_OPEN_TYPE:
-#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_MACOSX)
+#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_BSD)
       if (CanOpenPdfInSystemViewer()) {
         DownloadPrefs* prefs = DownloadPrefs::FromBrowserContext(
             download_item_->GetBrowserContext());
@@ -254,7 +254,7 @@
       bool is_checked = IsCommandChecked(ALWAYS_OPEN_TYPE);
       DownloadPrefs* prefs = DownloadPrefs::FromBrowserContext(
           download_item_->GetBrowserContext());
-#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_MACOSX)
+#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_BSD)
       if (CanOpenPdfInSystemViewer()) {
         prefs->SetShouldOpenPdfInSystemReader(!is_checked);
         DownloadItemModel(download_item_)
@@ -352,7 +352,7 @@
   return browser_displayer.browser();
 }
 
-#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD)
 bool DownloadCommands::IsDownloadPdf() const {
   base::FilePath path = download_item_->GetTargetFilePath();
   return path.MatchesExtension(FILE_PATH_LITERAL(".pdf"));
@@ -369,7 +369,7 @@
   return IsDownloadPdf() &&
          (IsAdobeReaderDefaultPDFViewer() ? is_adobe_pdf_reader_up_to_date
                                           : true);
-#elif defined(OS_MACOSX) || defined(OS_LINUX)
+#elif defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD)
   return IsDownloadPdf();
 #endif
 }
