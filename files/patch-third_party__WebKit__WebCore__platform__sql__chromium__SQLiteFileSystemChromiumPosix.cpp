--- ./third_party/WebKit/WebCore/platform/sql/chromium/SQLiteFileSystemChromiumPosix.cpp.orig	2010-12-13 12:10:33.000000000 +0100
+++ ./third_party/WebKit/WebCore/platform/sql/chromium/SQLiteFileSystemChromiumPosix.cpp	2011-01-07 14:17:11.000000000 +0100
@@ -755,6 +755,8 @@
     if (!success)
         success = !fsync(fd);
     return success;
+#elif OS(FREEBSD)
+    return !fsync(fd);
 #else
     return !fdatasync(fd);
 #endif
