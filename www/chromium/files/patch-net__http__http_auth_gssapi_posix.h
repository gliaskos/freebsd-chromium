--- net/http/http_auth_gssapi_posix.h.orig	2014-09-25 04:01:58.000000000 +0200
+++ net/http/http_auth_gssapi_posix.h	2014-09-30 11:40:04.000000000 +0200
@@ -16,6 +16,9 @@
     MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_9
 // Including gssapi.h directly is deprecated in the 10.9 SDK.
 #include <GSS/gssapi.h>
+#elif defined(OS_FREEBSD)
+// Including gssapi.h is deprecated since at least FreeBSD 9
+#include <gssapi/gssapi.h>
 #else
 #include <gssapi.h>
 #endif
