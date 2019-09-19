--- net/base/network_change_notifier.cc.orig	2019-09-09 21:55:21 UTC
+++ net/base/network_change_notifier.cc
@@ -286,7 +286,6 @@ std::unique_ptr<NetworkChangeNotifier> NetworkChangeNo
   return std::make_unique<NetworkChangeNotifierFuchsia>(
       0 /* required_features */);
 #else
-  NOTIMPLEMENTED();
   return NULL;
 #endif
 }
