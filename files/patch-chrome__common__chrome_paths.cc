--- chrome/common/chrome_paths.cc.orig	2012-05-19 23:49:01.042717907 +0300
+++ chrome/common/chrome_paths.cc	2012-05-19 23:50:34.411106139 +0300
@@ -334,7 +334,7 @@
       if (!file_util::PathExists(cur))  // We don't want to create this
         return false;
       break;
-#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_OPENBSD)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_BSD)
     case chrome::DIR_POLICY_FILES: {
 #if defined(GOOGLE_CHROME_BUILD)
       cur = FilePath(FILE_PATH_LITERAL("/etc/opt/chrome/policies"));
