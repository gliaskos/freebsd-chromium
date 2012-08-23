--- ./content/browser/browser_main_loop.cc.orig	2012-08-17 03:01:27.000000000 +0200
+++ ./content/browser/browser_main_loop.cc	2012-08-23 22:31:44.000000000 +0200
@@ -57,7 +57,7 @@
 #include "net/base/winsock_init.h"
 #endif
 
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
 #include <glib-object.h>
 #endif
 
@@ -116,7 +116,7 @@
 }
 #endif
 
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
 static void GLibLogHandler(const gchar* log_domain,
                            GLogLevelFlags log_level,
                            const gchar* message,
@@ -599,7 +599,7 @@
   // are no #else branches on any #ifs.
   // TODO(stevenjb): Move platform specific code into platform specific Parts
   // (Need to add InitializeToolkit stage to BrowserParts).
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
   // Glib type system initialization. Needed at least for gconf,
   // used in net/proxy/proxy_config_service_linux.cc. Most likely
   // this is superfluous as gtk_init() ought to do this. It's
