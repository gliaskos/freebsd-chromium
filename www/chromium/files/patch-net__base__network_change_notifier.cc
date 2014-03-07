--- ./net/base/network_change_notifier.cc.orig	2014-03-04 03:16:05.000000000 +0100
+++ ./net/base/network_change_notifier.cc	2014-03-07 14:10:34.000000000 +0100
@@ -470,7 +470,6 @@
 #elif defined(OS_MACOSX)
   return new NetworkChangeNotifierMac();
 #else
-  NOTIMPLEMENTED();
   return NULL;
 #endif
 }
