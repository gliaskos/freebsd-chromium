--- ./components/policy/tools/generate_policy_source.py.orig	2014-03-19 20:03:04.000000000 +0100
+++ ./components/policy/tools/generate_policy_source.py	2014-03-21 00:27:12.000000000 +0100
@@ -64,7 +64,7 @@
       if platform.startswith('chrome.'):
         platform_sub = platform[7:]
         if platform_sub == '*':
-          self.platforms.extend(['win', 'mac', 'linux'])
+          self.platforms.extend(['win', 'mac', 'linux', 'freebsd'])
         else:
           self.platforms.append(platform_sub)
       else:
