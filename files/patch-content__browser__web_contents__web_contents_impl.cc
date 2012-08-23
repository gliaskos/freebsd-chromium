--- ./content/browser/web_contents/web_contents_impl.cc.orig	2012-08-17 03:01:26.000000000 +0200
+++ ./content/browser/web_contents/web_contents_impl.cc	2012-08-23 22:31:44.000000000 +0200
@@ -3014,7 +3014,7 @@
     return false;
   }
 
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
   // Force a ViewMsg_Resize to be sent, needed to make plugins show up on
   // linux. See crbug.com/83941.
   if (rwh_view) {
