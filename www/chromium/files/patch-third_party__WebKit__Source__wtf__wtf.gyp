--- ./third_party/WebKit/Source/wtf/wtf.gyp.orig	2014-07-15 21:07:07.000000000 +0200
+++ ./third_party/WebKit/Source/wtf/wtf.gyp	2014-07-29 12:06:14.000000000 +0200
@@ -70,7 +70,7 @@
       'target_name': 'wtf',
       'type': '<(component)',
       'include_dirs': [
-        '..',
+        '..', '<(prefix_dir)/include',
       ],
       'dependencies': [
           'wtf_config',
