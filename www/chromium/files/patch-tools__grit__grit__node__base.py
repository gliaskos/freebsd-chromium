--- ./tools/grit/grit/node/base.py.orig	2014-02-20 21:29:33.000000000 +0100
+++ ./tools/grit/grit/node/base.py	2014-02-24 17:23:45.000000000 +0100
@@ -460,6 +460,7 @@
         'is_win': target_platform in ('cygwin', 'win32'),
         'is_android': target_platform == 'android',
         'is_ios': target_platform == 'ios',
+        'is_bsd': 'bsd' in target_platform,
         'is_posix': (target_platform in ('darwin', 'linux2', 'linux3', 'sunos5',
                                          'android', 'ios')
                     or 'bsd' in target_platform),
