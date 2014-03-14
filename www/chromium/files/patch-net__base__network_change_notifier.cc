--- ./net/base/network_change_notifier.cc.orig	2014-03-12 20:21:27.000000000 +0100
+++ ./net/base/network_change_notifier.cc	2014-03-14 09:23:25.000000000 +0100
@@ -470,7 +470,6 @@
 #elif defined(OS_MACOSX)
   return new NetworkChangeNotifierMac();
 #else
-  NOTIMPLEMENTED();
   return NULL;
 #endif
 }
