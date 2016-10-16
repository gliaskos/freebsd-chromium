--- /net/mbsd/media/chromium-52.0.2743.82/tools/gn/bootstrap/bootstrap.py	2016-07-20 22:03:45.000000000 +0300
+++ tools/gn/bootstrap/bootstrap.py	2016-08-14 19:34:02.001442000 +0300
@@ -23,6 +23,7 @@
 import shutil
 import subprocess
 import sys
+import platform
 import tempfile

 BOOTSTRAP_DIR = os.path.dirname(os.path.abspath(__file__))
@@ -30,8 +31,9 @@
 SRC_ROOT = os.path.dirname(os.path.dirname(GN_ROOT))

 is_linux = sys.platform.startswith('linux')
+is_bsd = platform.system().lower().endswith('bsd')
 is_mac = sys.platform.startswith('darwin')
-is_posix = is_linux or is_mac
+is_posix = is_linux or is_mac or is_bsd

 def check_call(cmd, **kwargs):
   logging.debug('Running: %s', ' '.join(cmd))
@@ -363,26 +365,27 @@
         'base/time/time_posix.cc',
         'base/trace_event/heap_profiler_allocation_register_posix.cc',
     ])
-    static_libraries['libevent'] = {
-        'sources': [
-            'base/third_party/libevent/buffer.c',
-            'base/third_party/libevent/evbuffer.c',
-            'base/third_party/libevent/evdns.c',
-            'base/third_party/libevent/event.c',
-            'base/third_party/libevent/event_tagging.c',
-            'base/third_party/libevent/evrpc.c',
-            'base/third_party/libevent/evutil.c',
-            'base/third_party/libevent/http.c',
-            'base/third_party/libevent/log.c',
-            'base/third_party/libevent/poll.c',
-            'base/third_party/libevent/select.c',
-            'base/third_party/libevent/signal.c',
-            'base/third_party/libevent/strlcpy.c',
-        ],
-        'tool': 'cc',
-        'include_dirs': [],
-        'cflags': cflags + ['-DHAVE_CONFIG_H'],
-    }
+    if not is_bsd:
+      static_libraries['libevent'] = {
+          'sources': [
+              'base/third_party/libevent/buffer.c',
+              'base/third_party/libevent/evbuffer.c',
+              'base/third_party/libevent/evdns.c',
+              'base/third_party/libevent/event.c',
+              'base/third_party/libevent/event_tagging.c',
+              'base/third_party/libevent/evrpc.c',
+              'base/third_party/libevent/evutil.c',
+              'base/third_party/libevent/http.c',
+              'base/third_party/libevent/log.c',
+              'base/third_party/libevent/poll.c',
+              'base/third_party/libevent/select.c',
+              'base/third_party/libevent/signal.c',
+              'base/third_party/libevent/strlcpy.c',
+          ],
+          'tool': 'cc',
+          'include_dirs': [],
+          'cflags': cflags + ['-DHAVE_CONFIG_H'],
+      }


   if is_linux:
@@ -417,6 +420,32 @@
         'base/third_party/libevent/epoll.c',
     ])

+  if is_bsd:
+    libs.extend(['-L/usr/local/lib', '-levent', '-lexecinfo', '-lkvm'])
+    ldflags.extend(['-pthread'])
+
+    static_libraries['xdg_user_dirs'] = {
+        'sources': [
+            'base/third_party/xdg_user_dirs/xdg_user_dir_lookup.cc',
+        ],
+        'tool': 'cxx',
+    }
+    static_libraries['base']['sources'].extend([
+        # 'base/allocator/allocator_shim.cc',
+        # 'base/allocator/allocator_shim_default_dispatch_to_glibc.cc',
+        'base/memory/shared_memory_posix.cc',
+        'base/nix/xdg_util.cc',
+        #'base/process/internal_linux.cc',
+        'base/process/process_handle_' + platform.system().lower() + '.cc',
+        'base/process/process_iterator_' + platform.system().lower() + '.cc',
+        # 'base/process/process_linux.cc',
+        'base/process/process_metrics_'+ platform.system().lower() + '.cc',
+        'base/strings/sys_string_conversions_posix.cc',
+        'base/sys_info_' + platform.system().lower() + '.cc',
+        'base/threading/platform_thread_' + platform.system().lower() + '.cc',
+        # 'base/trace_event/malloc_dump_provider.cc',
+    ])
+

   if is_mac:
     static_libraries['base']['sources'].extend([
