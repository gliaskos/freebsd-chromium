--- ./net/base/network_change_notifier.cc.orig	2014-04-02 21:03:39.000000000 +0200
+++ ./net/base/network_change_notifier.cc	2014-04-04 01:39:18.000000000 +0200
@@ -470,7 +470,6 @@
 #elif defined(OS_MACOSX)
   return new NetworkChangeNotifierMac();
 #else
-  NOTIMPLEMENTED();
   return NULL;
 #endif
 }
