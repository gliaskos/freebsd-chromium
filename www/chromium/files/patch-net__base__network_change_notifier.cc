--- ./net/base/network_change_notifier.cc.orig	2014-07-15 21:02:58.000000000 +0200
+++ ./net/base/network_change_notifier.cc	2014-07-20 18:13:09.000000000 +0200
@@ -508,7 +508,6 @@
 #elif defined(OS_MACOSX)
   return new NetworkChangeNotifierMac();
 #else
-  NOTIMPLEMENTED();
   return NULL;
 #endif
 }
