--- ./components/policy/tools/generate_policy_source.py.orig	2014-03-12 20:22:54.000000000 +0100
+++ ./components/policy/tools/generate_policy_source.py	2014-03-14 09:23:25.000000000 +0100
@@ -64,7 +64,7 @@
       if platform.startswith('chrome.'):
         platform_sub = platform[7:]
         if platform_sub == '*':
-          self.platforms.extend(['win', 'mac', 'linux'])
+          self.platforms.extend(['win', 'mac', 'linux', 'freebsd'])
         else:
           self.platforms.append(platform_sub)
       else:
