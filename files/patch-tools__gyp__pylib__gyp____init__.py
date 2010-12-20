--- ./tools/gyp/pylib/gyp/__init__.py.orig	2010-12-13 12:49:17.000000000 +0100
+++ ./tools/gyp/pylib/gyp/__init__.py	2010-12-20 20:41:38.000000000 +0100
@@ -315,6 +315,7 @@
                            'cygwin':   'msvs',
                            'freebsd7': 'make',
                            'freebsd8': 'make',
+                           'freebsd9': 'make',
                            'linux2':   'make',
                            'openbsd4': 'make',
                            'sunos5':   'make',}[sys.platform] ]
