--- ./net/base/network_change_notifier.cc.orig	2012-08-17 03:01:32.000000000 +0200
+++ ./net/base/network_change_notifier.cc	2012-08-23 22:31:44.000000000 +0200
@@ -71,7 +71,6 @@
 #elif defined(OS_MACOSX)
   return new NetworkChangeNotifierMac();
 #else
-  NOTIMPLEMENTED();
   return NULL;
 #endif
 }
