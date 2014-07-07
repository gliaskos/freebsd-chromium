--- ./net/base/network_change_notifier.cc.orig	2014-06-30 21:02:51.000000000 +0200
+++ ./net/base/network_change_notifier.cc	2014-07-07 15:12:49.000000000 +0200
@@ -508,7 +508,6 @@
 #elif defined(OS_MACOSX)
   return new NetworkChangeNotifierMac();
 #else
-  NOTIMPLEMENTED();
   return NULL;
 #endif
 }
