--- third_party/usrsctp/usrsctp.gyp.orig	2016-05-27 14:17:05.187924000 -0400
+++ third_party/usrsctp/usrsctp.gyp	2016-05-27 14:18:21.671492000 -0400
@@ -111,6 +111,11 @@
           'cflags!': [ '-Werror', '-Wall' ],
           'cflags': [ '-w' ],
         }],
+        ['os_bsd==1', {
+          'defines': [
+            '__Userspace_os_FreeBSD',
+          ],
+        }],
         ['OS=="mac" or OS=="ios"', {
           'defines': [
             'HAVE_SA_LEN',
