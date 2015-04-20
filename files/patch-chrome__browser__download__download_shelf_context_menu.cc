--- chrome/browser/download/download_shelf_context_menu.cc.orig	2015-01-24 21:45:08 UTC
+++ chrome/browser/download/download_shelf_context_menu.cc
@@ -122,7 +122,7 @@
       return download_item_->GetOpenWhenComplete() ||
           download_crx_util::IsExtensionDownload(*download_item_);
     case ALWAYS_OPEN_TYPE:
-#if defined(OS_WIN) || defined(OS_LINUX) || \
+#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_BSD) || \
     (defined(OS_MACOSX) && !defined(OS_IOS))
       if (CanOpenPdfInSystemViewer()) {
         DownloadPrefs* prefs = DownloadPrefs::FromBrowserContext(
@@ -162,7 +162,7 @@
       bool is_checked = IsCommandIdChecked(ALWAYS_OPEN_TYPE);
       DownloadPrefs* prefs = DownloadPrefs::FromBrowserContext(
           download_item_->GetBrowserContext());
-#if defined(OS_WIN) || defined(OS_LINUX) || \
+#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_BSD) || \
     (defined(OS_MACOSX) && !defined(OS_IOS))
       if (CanOpenPdfInSystemViewer()) {
         prefs->SetShouldOpenPdfInSystemReader(!is_checked);
@@ -392,14 +392,14 @@
     return IsAdobeReaderDefaultPDFViewer()
                ? IDS_DOWNLOAD_MENU_ALWAYS_OPEN_PDF_IN_READER
                : IDS_DOWNLOAD_MENU_PLATFORM_OPEN_ALWAYS;
-#elif defined(OS_MACOSX) || defined(OS_LINUX)
+#elif defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD)
   if (CanOpenPdfInSystemViewer())
     return IDS_DOWNLOAD_MENU_PLATFORM_OPEN_ALWAYS;
 #endif
   return IDS_DOWNLOAD_MENU_ALWAYS_OPEN_TYPE;
 }
 
-#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD)
 bool DownloadShelfContextMenu::IsDownloadPdf() const {
   base::FilePath path = download_item_->GetTargetFilePath();
   return path.MatchesExtension(FILE_PATH_LITERAL(".pdf"));
@@ -411,7 +411,7 @@
   return IsDownloadPdf() &&
          (IsAdobeReaderDefaultPDFViewer() ? is_adobe_pdf_reader_up_to_date_ :
                                             true);
-#elif defined(OS_MACOSX) || defined(OS_LINUX)
+#elif defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD)
   return IsDownloadPdf();
 #endif
 }
