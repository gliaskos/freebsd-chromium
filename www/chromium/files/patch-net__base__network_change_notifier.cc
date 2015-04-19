--- net/base/network_change_notifier.cc.orig	2014-10-10 09:15:31 UTC
+++ net/base/network_change_notifier.cc
@@ -523,7 +523,6 @@
 #elif defined(OS_MACOSX)
   return new NetworkChangeNotifierMac();
 #else
-  NOTIMPLEMENTED();
   return NULL;
 #endif
 }
