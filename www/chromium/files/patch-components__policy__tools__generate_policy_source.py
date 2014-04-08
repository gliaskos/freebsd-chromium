--- ./components/policy/tools/generate_policy_source.py.orig	2014-04-02 21:03:06.000000000 +0200
+++ ./components/policy/tools/generate_policy_source.py	2014-04-04 01:39:18.000000000 +0200
@@ -64,7 +64,7 @@
       if platform.startswith('chrome.'):
         platform_sub = platform[7:]
         if platform_sub == '*':
-          self.platforms.extend(['win', 'mac', 'linux'])
+          self.platforms.extend(['win', 'mac', 'linux', 'freebsd'])
         else:
           self.platforms.append(platform_sub)
       else:
