--- components/policy/tools/generate_policy_source.py.orig	2014-09-04 00:04:15 UTC
+++ components/policy/tools/generate_policy_source.py
@@ -67,7 +67,7 @@
       if platform.startswith('chrome.'):
         platform_sub = platform[7:]
         if platform_sub == '*':
-          self.platforms.extend(['win', 'mac', 'linux'])
+          self.platforms.extend(['win', 'mac', 'linux', 'freebsd'])
         else:
           self.platforms.append(platform_sub)
       else:
