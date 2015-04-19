--- third_party/webrtc/base/base.gyp.orig	Tue Mar 10 23:42:52 2015
+++ third_party/webrtc/base/base.gyp	Wed Mar 11 07:22:50 2015
@@ -592,8 +592,6 @@
         ['use_x11 == 1', {
           'link_settings': {
             'libraries': [
-              '-ldl',
-              '-lrt',
               '-lXext',
               '-lX11',
               '-lXcomposite',

