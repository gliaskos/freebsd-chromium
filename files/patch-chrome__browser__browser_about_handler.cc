--- ./chrome/browser/browser_about_handler.cc.orig	2010-12-13 12:04:29.000000000 +0100
+++ ./chrome/browser/browser_about_handler.cc	2010-12-20 20:41:37.000000000 +0100
@@ -74,7 +74,7 @@
 #include "chrome/browser/zygote_host_linux.h"
 #elif defined(OS_MACOSX)
 #include "chrome/browser/cocoa/about_ipc_dialog.h"
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_FREEBSD)
 #include "chrome/browser/zygote_host_linux.h"
 #endif
 
@@ -122,7 +122,7 @@
 const char kNetInternalsPath[] = "net-internals";
 const char kPluginsPath[] = "plugins";
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 const char kLinuxProxyConfigPath[] = "linux-proxy-config";
 const char kSandboxPath[] = "sandbox";
 #endif
@@ -154,7 +154,7 @@
   kTcmallocPath,
   kTermsPath,
   kVersionPath,
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
   kLinuxProxyConfigPath,
   kSandboxPath,
 #endif
@@ -544,7 +544,7 @@
   return data;
 }
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 std::string AboutLinuxProxyConfig() {
   std::string data;
   data.append("<!DOCTYPE HTML>\n");
@@ -895,7 +895,7 @@
   } else if (path == kTermsPath) {
     response = ResourceBundle::GetSharedInstance().GetRawDataResource(
         IDR_TERMS_HTML).as_string();
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
   } else if (path == kLinuxProxyConfigPath) {
     response = AboutLinuxProxyConfig();
   } else if (path == kSandboxPath) {
