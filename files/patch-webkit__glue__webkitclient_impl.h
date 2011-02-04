--- webkit/glue/webkitclient_impl.h.orig	2011-01-29 10:48:43.000000000 +0100
+++ webkit/glue/webkitclient_impl.h	2011-02-04 21:07:29.000000000 +0100
@@ -10,7 +10,7 @@
 #include "third_party/WebKit/WebKit/chromium/public/WebKitClient.h"
 #if defined(OS_WIN)
 #include "webkit/glue/webthemeengine_impl_win.h"
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_OPENBSD) || defined(OS_FREEBSD)
 #include "webkit/glue/webthemeengine_impl_linux.h"
 #endif
 
@@ -83,7 +83,7 @@
   double shared_timer_fire_time_;
   int shared_timer_suspended_;  // counter
 
-#if defined(OS_WIN) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_OPENBSD) || defined(OS_FREEBSD)
   WebThemeEngineImpl theme_engine_;
 #endif
 };
