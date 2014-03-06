--- ./net/base/network_change_notifier.cc.orig	2014-02-20 21:28:31.000000000 +0100
+++ ./net/base/network_change_notifier.cc	2014-02-24 17:23:45.000000000 +0100
@@ -470,7 +470,6 @@
 #elif defined(OS_MACOSX)
   return new NetworkChangeNotifierMac();
 #else
-  NOTIMPLEMENTED();
   return NULL;
 #endif
 }
