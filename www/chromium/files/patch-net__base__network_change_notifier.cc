--- ./net/base/network_change_notifier.cc.orig	2014-03-19 20:01:37.000000000 +0100
+++ ./net/base/network_change_notifier.cc	2014-03-21 00:27:13.000000000 +0100
@@ -470,7 +470,6 @@
 #elif defined(OS_MACOSX)
   return new NetworkChangeNotifierMac();
 #else
-  NOTIMPLEMENTED();
   return NULL;
 #endif
 }
