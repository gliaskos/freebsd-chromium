--- net/base/network_change_notifier.cc.orig	2014-09-04 00:04:17 UTC
+++ net/base/network_change_notifier.cc
@@ -521,7 +521,6 @@
 #elif defined(OS_MACOSX)
   return new NetworkChangeNotifierMac();
 #else
-  NOTIMPLEMENTED();
   return NULL;
 #endif
 }
