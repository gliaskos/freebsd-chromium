--- third_party/WebKit/Source/wtf/wtf.gyp.orig	2014-09-04 00:48:11 UTC
+++ third_party/WebKit/Source/wtf/wtf.gyp
@@ -70,7 +70,7 @@
       'target_name': 'wtf',
       'type': '<(component)',
       'include_dirs': [
-        '..',
+        '..', '<(prefix_dir)/include',
       ],
       'dependencies': [
           'wtf_config',
