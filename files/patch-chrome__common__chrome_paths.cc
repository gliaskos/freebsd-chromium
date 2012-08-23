--- ./chrome/common/chrome_paths.cc.orig	2012-08-17 03:02:26.000000000 +0200
+++ ./chrome/common/chrome_paths.cc	2012-08-23 22:31:43.000000000 +0200
@@ -358,10 +358,12 @@
       if (!file_util::PathExists(cur))  // We don't want to create this
         return false;
       break;
-#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_OPENBSD)
+#if defined(OS_POSIX) && !defined(OS_MACOSX)
     case chrome::DIR_POLICY_FILES: {
 #if defined(GOOGLE_CHROME_BUILD)
       cur = FilePath(FILE_PATH_LITERAL("/etc/opt/chrome/policies"));
+#elif defined(OS_BSD)
+      cur = FilePath(FILE_PATH_LITERAL("/usr/local/etc/chrome/policies"));
 #else
       cur = FilePath(FILE_PATH_LITERAL("/etc/chromium/policies"));
 #endif
