--- content/public/common/content_switches.cc.orig	2014-09-12 15:01:18.000000000 +0200
+++ content/public/common/content_switches.cc	2014-09-12 15:00:43.000000000 +0200
@@ -916,7 +916,7 @@
     "disable-vaapi-accelerated-video-encode";
 #endif
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_FREEBSD)
 // Allows sending text-to-speech requests to speech-dispatcher, a common
 // Linux speech service. Because it's buggy, the user must explicitly
 // enable it so that visiting a random webpage can't cause instability.
