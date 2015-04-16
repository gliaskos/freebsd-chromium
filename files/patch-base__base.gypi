--- base/base.gypi.orig	2015-04-15 16:31:58.033792000 -0400
+++ base/base.gypi	2015-04-15 16:33:35.751246000 -0400
@@ -973,10 +973,14 @@
             ],
             'sources/': [
               ['exclude', '^files/file_path_watcher_linux\\.cc$'],
-              ['exclude', '^files/file_path_watcher_stub\\.cc$'],
               ['exclude', '^files/file_util_linux\\.cc$'],
+              ['exclude', '^process/memory_linux\\.cc$'],
               ['exclude', '^process/process_linux\\.cc$'],
               ['exclude', '^sys_info_linux\\.cc$'],
+              ['exclude', '^process/process_iterator_linux\\.cc$'],
+              ['exclude', '^process/process_metrics_linux\\.cc$'],
+              ['exclude', '^files/file_path_watcher_fsevents\\.cc$'],
+              ['exclude', '^files/file_path_watcher_fsevents\\.h$'],
             ],
           }],
           # Remove all unnecessary files for build_nexe.py to avoid exceeding
