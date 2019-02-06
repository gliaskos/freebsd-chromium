--- components/policy/tools/generate_policy_source.py.orig	2019-01-30 02:17:55.000000000 +0100
+++ components/policy/tools/generate_policy_source.py	2019-02-01 00:11:10.092144000 +0100
@@ -85,7 +85,7 @@
       if platform not in [
           'chrome_frame', 'chrome_os', 'android', 'webview_android',
           'chrome.win', 'chrome.linux', 'chrome.mac', 'chrome.fuchsia',
-          'chrome.*'
+          'chrome.bsd', 'chrome.*'
       ]:
         raise RuntimeError('Platform "%s" is not supported' % platform)
 
@@ -104,7 +104,7 @@
       if platform.startswith('chrome.'):
         platform_sub = platform[7:]
         if platform_sub == '*':
-          self.platforms.extend(['win', 'mac', 'linux', 'fuchsia'])
+          self.platforms.extend(['win', 'mac', 'linux', 'fuchsia', 'bsd'])
         else:
           self.platforms.append(platform_sub)
       else:
