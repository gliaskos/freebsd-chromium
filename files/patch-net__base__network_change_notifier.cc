--- ./net/base/network_change_notifier.cc.orig	2010-12-13 12:03:19.000000000 +0100
+++ ./net/base/network_change_notifier.cc	2010-12-20 20:41:37.000000000 +0100
@@ -42,7 +42,6 @@
 #elif defined(OS_MACOSX)
   return new NetworkChangeNotifierMac();
 #else
-  NOTIMPLEMENTED();
   return NULL;
 #endif
 }
