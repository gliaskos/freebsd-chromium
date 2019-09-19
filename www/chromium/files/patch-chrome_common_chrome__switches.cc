--- chrome/common/chrome_switches.cc.orig	2019-09-09 21:55:11 UTC
+++ chrome/common/chrome_switches.cc
@@ -860,7 +860,7 @@ const char kAllowNaClFileHandleAPI[]        = "allow-n
 const char kAllowNaClSocketAPI[]            = "allow-nacl-socket-api";
 #endif
 
-#if defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_WIN)
+#if defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_WIN) || defined(OS_BSD)
 const char kEnableNewAppMenuIcon[] = "enable-new-app-menu-icon";
 
 // Causes the browser to launch directly in guest mode.
