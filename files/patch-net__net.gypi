--- net/net.gypi.orig	2014-10-10 09:15:31 UTC
+++ net/net.gypi
@@ -188,8 +188,8 @@
       'android/network_change_notifier_factory_android.h',
       'android/network_library.cc',
       'android/network_library.h',
-      'base/address_tracker_linux.cc',
-      'base/address_tracker_linux.h',
+      #'base/address_tracker_linux.cc',
+      #'base/address_tracker_linux.h',
       'base/backoff_entry.cc',
       'base/backoff_entry.h',
       'base/bandwidth_metrics.cc',
@@ -1267,7 +1267,7 @@
       'android/keystore_unittest.cc',
       'android/network_change_notifier_android_unittest.cc',
       'base/address_list_unittest.cc',
-      'base/address_tracker_linux_unittest.cc',
+      #'base/address_tracker_linux_unittest.cc',
       'base/backoff_entry_unittest.cc',
       'base/chunked_upload_data_stream_unittest.cc',
       'base/data_url_unittest.cc',
