--- ./base/test/expectations/expectation.cc.orig	2014-02-20 21:28:46.000000000 +0100
+++ ./base/test/expectations/expectation.cc	2014-02-24 17:23:44.000000000 +0100
@@ -59,6 +59,7 @@
         variant != "64") {
       return false;
     }
+  } else if (name == "FreeBSD") {
   } else if (name == "ChromeOS") {
     // TODO(rsesek): Figure out what ChromeOS needs.
   } else if (name == "iOS") {
@@ -122,6 +123,8 @@
     platform.variant = "32";
   else if (arch == "x86_64")
     platform.variant = "64";
+#elif defined(OS_FREEBSD)
+  platform.name = "FreeBSD";
 #else
   NOTREACHED();
 #endif
