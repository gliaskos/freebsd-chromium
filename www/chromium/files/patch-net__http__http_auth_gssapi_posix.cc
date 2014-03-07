--- ./net/http/http_auth_gssapi_posix.cc.orig	2014-03-05 22:24:13.000000000 +0100
+++ ./net/http/http_auth_gssapi_posix.cc	2014-03-07 23:57:26.000000000 +0100
@@ -430,8 +430,8 @@
     static const char* const kDefaultLibraryNames[] = {
 #if defined(OS_MACOSX)
       "libgssapi_krb5.dylib"  // MIT Kerberos
-#elif defined(OS_OPENBSD)
-      "libgssapi.so"          // Heimdal - OpenBSD
+#elif defined(OS_BSD)
+      "libgssapi.so"          // Heimdal - OpenBSD / FreeBSD
 #else
       "libgssapi_krb5.so.2",  // MIT Kerberos - FC, Suse10, Debian
       "libgssapi.so.4",       // Heimdal - Suse10, MDK
