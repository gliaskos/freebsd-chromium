--- headless/lib/headless_macros.h.orig	2017-06-05 19:03:08 UTC
+++ headless/lib/headless_macros.h
@@ -5,8 +5,8 @@
 #ifndef HEADLESS_LIB_HEADLESS_MACROS_H_
 #define HEADLESS_LIB_HEADLESS_MACROS_H_
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_BSD)
 #define HEADLESS_USE_BREAKPAD
-#endif  // defined(OS_POSIX) && !defined(OS_MACOSX)
+#endif  // defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_BSD)
 
 #endif  // HEADLESS_LIB_HEADLESS_MACROS_H_
