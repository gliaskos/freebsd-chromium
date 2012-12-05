--- content/app/content_main_runner.cc.orig	2012-11-28 04:01:23.000000000 +0200
+++ content/app/content_main_runner.cc	2012-12-04 23:40:45.000000000 +0200
@@ -91,7 +91,7 @@
 extern int RendererMain(const content::MainFunctionParams&);
 extern int WorkerMain(const content::MainFunctionParams&);
 extern int UtilityMain(const content::MainFunctionParams&);
-#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID) && !defined(OS_BSD)
 namespace content {
 extern int ZygoteMain(const MainFunctionParams&,
                       ZygoteForkDelegate* forkdelegate);
@@ -333,7 +333,7 @@
   int (*function)(const MainFunctionParams&);
 };
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID) && !defined(OS_BSD)
 // On platforms that use the zygote, we have a special subset of
 // subprocesses that are launched via the zygote.  This function
 // fills in some process-launching bits around ZygoteMain().
@@ -438,7 +438,7 @@
     }
   }
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID) && !defined(OS_BSD)
   // Zygote startup is special -- see RunZygote comments above
   // for why we don't use ZygoteMain directly.
   if (process_type == switches::kZygoteProcess)
