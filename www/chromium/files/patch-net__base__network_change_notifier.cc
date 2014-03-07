--- ./net/base/network_change_notifier.cc.orig	2014-03-05 22:24:13.000000000 +0100
+++ ./net/base/network_change_notifier.cc	2014-03-07 23:57:26.000000000 +0100
@@ -470,7 +470,6 @@
 #elif defined(OS_MACOSX)
   return new NetworkChangeNotifierMac();
 #else
-  NOTIMPLEMENTED();
   return NULL;
 #endif
 }
