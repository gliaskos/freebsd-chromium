--- ./chrome/common/chrome_constants.cc.orig	2010-12-13 12:04:46.000000000 +0100
+++ ./chrome/common/chrome_constants.cc	2010-12-20 20:41:37.000000000 +0100
@@ -27,7 +27,7 @@
 #if defined(OS_WIN)
 const wchar_t kBrowserProcessExecutableName[] = L"chrome.exe";
 const wchar_t kHelperProcessExecutableName[] = L"chrome.exe";
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_FREEBSD)
 const wchar_t kBrowserProcessExecutableName[] = L"chrome";
 // Helper processes end up with a name of "exe" due to execing via
 // /proc/self/exe.  See bug 22703.
@@ -39,7 +39,7 @@
 #if defined(OS_WIN)
 const wchar_t kBrowserProcessExecutablePath[] = L"chrome.exe";
 const FilePath::CharType kHelperProcessExecutablePath[] = FPL("chrome.exe");
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_FREEBSD)
 const wchar_t kBrowserProcessExecutablePath[] = L"chrome";
 const FilePath::CharType kHelperProcessExecutablePath[] = FPL("chrome");
 #elif defined(OS_MACOSX)
