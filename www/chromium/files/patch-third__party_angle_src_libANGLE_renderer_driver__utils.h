--- third_party/angle/src/libANGLE/renderer/driver_utils.h.orig	2019-09-09 21:56:55 UTC
+++ third_party/angle/src/libANGLE/renderer/driver_utils.h
@@ -113,7 +113,7 @@ inline bool IsWindows()
 
 inline bool IsLinux()
 {
-#if defined(ANGLE_PLATFORM_LINUX)
+#if defined(ANGLE_PLATFORM_POSIX)
     return true;
 #else
     return false;
