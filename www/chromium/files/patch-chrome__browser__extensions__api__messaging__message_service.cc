--- chrome/browser/extensions/api/messaging/message_service.cc.orig	Sat May 23 00:59:48 2015
+++ chrome/browser/extensions/api/messaging/message_service.cc	Sat May 23 01:03:20 2015
@@ -108,7 +108,7 @@ MessageService::PolicyPermission MessageService::IsNat
 
 const char kReceivingEndDoesntExistError[] =
     "Could not establish connection. Receiving end does not exist.";
-#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD)
 const char kMissingPermissionError[] =
     "Access to native messaging requires nativeMessaging permission.";
 const char kProhibitedByPoliciesError[] =
@@ -406,7 +406,7 @@ void MessageService::OpenChannelToNativeApp(
   if (!source)
     return;
 
-#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD)
   Profile* profile = Profile::FromBrowserContext(source->GetBrowserContext());
   ExtensionService* extension_service =
       ExtensionSystem::Get(profile)->extension_service();
