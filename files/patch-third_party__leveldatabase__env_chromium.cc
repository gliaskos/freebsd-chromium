--- ./third_party/leveldatabase/env_chromium.cc.orig	2012-08-17 03:01:48.000000000 +0200
+++ ./third_party/leveldatabase/env_chromium.cc	2012-08-23 22:31:45.000000000 +0200
@@ -32,7 +32,7 @@
 namespace {
 
 #if defined(OS_MACOSX) || defined(OS_WIN) || defined(OS_ANDROID) || \
-    defined(OS_OPENBSD)
+    defined(OS_BSD)
 // The following are glibc-specific
 
 size_t fread_unlocked(void *ptr, size_t size, size_t n, FILE *file) {
