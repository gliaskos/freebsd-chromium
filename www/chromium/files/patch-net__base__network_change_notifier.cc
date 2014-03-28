--- ./net/base/network_change_notifier.cc.orig	2014-03-26 21:14:36.000000000 +0100
+++ ./net/base/network_change_notifier.cc	2014-03-28 10:57:59.000000000 +0100
@@ -470,7 +470,6 @@
 #elif defined(OS_MACOSX)
   return new NetworkChangeNotifierMac();
 #else
-  NOTIMPLEMENTED();
   return NULL;
 #endif
 }
