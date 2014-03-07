--- ./v8/src/checks.cc.orig	2014-03-05 22:26:46.000000000 +0100
+++ ./v8/src/checks.cc	2014-03-07 23:57:27.000000000 +0100
@@ -34,6 +34,7 @@
 # include <backtrace.h>
 #endif  // V8_LIBC_GLIBC || V8_OS_BSD
 #include <stdio.h>
+#include <unistd.h> // size_t
 
 #include "platform.h"
 #include "v8.h"
