--- ./chrome/test/chromedriver/chrome/chrome_finder.cc.orig	2014-07-15 21:01:37.000000000 +0200
+++ ./chrome/test/chromedriver/chrome/chrome_finder.cc	2014-07-20 18:13:08.000000000 +0200
@@ -42,7 +42,7 @@
         installation_locations[i].Append(L"Chromium\\Application"));
   }
 }
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_FREEBSD)
 void GetApplicationDirs(std::vector<base::FilePath>* locations) {
   locations->push_back(base::FilePath("/opt/google/chrome"));
   locations->push_back(base::FilePath("/usr/local/bin"));
@@ -91,7 +91,7 @@
       base::FilePath("Google Chrome.app/Contents/MacOS/Google Chrome"),
       base::FilePath("Chromium.app/Contents/MacOS/Chromium")
   };
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_FREEBSD)
   base::FilePath browser_exes_array[] = {
       base::FilePath("google-chrome"),
       base::FilePath("chrome"),
