--- ./tools/gyp/pylib/gyp/common.py.orig	2012-08-17 03:04:26.000000000 +0200
+++ ./tools/gyp/pylib/gyp/common.py	2012-08-23 22:31:45.000000000 +0200
@@ -356,6 +356,7 @@
     'freebsd7': 'freebsd',
     'freebsd8': 'freebsd',
     'freebsd9': 'freebsd',
+    'freebsd10': 'freebsd',
   }
   flavor = flavors.get(sys.platform, 'linux')
   return params.get('flavor', flavor)
