--- ./base/base.gypi.orig	2014-02-20 21:28:47.000000000 +0100
+++ ./base/base.gypi	2014-02-24 17:23:45.000000000 +0100
@@ -917,11 +917,15 @@
               'process/memory_stubs.cc',
             ],
             'sources/': [
+              ['exclude', '^debug/proc_maps_linux\\.cc$'],
               ['exclude', '^files/file_path_watcher_linux\\.cc$'],
               ['exclude', '^files/file_path_watcher_stub\\.cc$'],
               ['exclude', '^file_util_linux\\.cc$'],
+              ['exclude', '^process/memory_linux\\.cc$'],
               ['exclude', '^process/process_linux\\.cc$'],
               ['exclude', '^sys_info_linux\\.cc$'],
+              ['exclude', '^process/process_iterator_linux\\.cc$'],
+              ['exclude', '^process/process_metrics_linux\\.cc$'],
             ],
           }],
           ['<(chromeos)!=1 or >(nacl_untrusted_build)==1', {
