--- ./testing/gtest/include/gtest/internal/gtest-port.h.orig	2012-08-17 03:02:52.000000000 +0200
+++ ./testing/gtest/include/gtest/internal/gtest-port.h	2012-08-23 22:31:45.000000000 +0200
@@ -234,6 +234,9 @@
 # ifdef ANDROID
 #  define GTEST_OS_LINUX_ANDROID 1
 # endif  // ANDROID
+#elif defined __FreeBSD__
+# define GTEST_OS_LINUX 1
+# define GTEST_OS_FREEBSD 1
 #elif defined __MVS__
 # define GTEST_OS_ZOS 1
 #elif defined(__sun) && defined(__SVR4)
@@ -522,7 +525,7 @@
 #ifndef GTEST_HAS_CLONE
 // The user didn't tell us, so we need to figure it out.
 
-# if GTEST_OS_LINUX && !defined(__ia64__)
+# if GTEST_OS_LINUX && !GTEST_OS_FREEBSD && !defined(__ia64__)
 #  define GTEST_HAS_CLONE 1
 # else
 #  define GTEST_HAS_CLONE 0
