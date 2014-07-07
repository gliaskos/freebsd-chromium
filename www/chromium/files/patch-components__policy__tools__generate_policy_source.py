--- ./components/policy/tools/generate_policy_source.py.orig	2014-06-30 21:02:46.000000000 +0200
+++ ./components/policy/tools/generate_policy_source.py	2014-07-07 15:12:47.000000000 +0200
@@ -66,7 +66,7 @@
       if platform.startswith('chrome.'):
         platform_sub = platform[7:]
         if platform_sub == '*':
-          self.platforms.extend(['win', 'mac', 'linux'])
+          self.platforms.extend(['win', 'mac', 'linux', 'freebsd'])
         else:
           self.platforms.append(platform_sub)
       else:
