--- extensions/browser/api/messaging/message_service.cc.orig	2019-03-11 22:00:58 UTC
+++ extensions/browser/api/messaging/message_service.cc
@@ -58,7 +58,7 @@ namespace {
 
 const char kReceivingEndDoesntExistError[] =
     "Could not establish connection. Receiving end does not exist.";
-#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD)
 const char kMissingPermissionError[] =
     "Access to native messaging requires nativeMessaging permission.";
 const char kProhibitedByPoliciesError[] =
@@ -318,7 +318,7 @@ void MessageService::OpenChannelToNativeApp(
   if (!source)
     return;
 
-#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD)
   content::WebContents* web_contents =
       content::WebContents::FromRenderFrameHost(source);
   ExtensionWebContentsObserver* extension_web_contents_observer =
