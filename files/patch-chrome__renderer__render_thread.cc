--- ./chrome/renderer/render_thread.cc.orig	2010-12-13 12:04:31.000000000 +0100
+++ ./chrome/renderer/render_thread.cc	2010-12-20 20:41:37.000000000 +0100
@@ -963,7 +963,7 @@
 }
 
 void RenderThread::IdleHandler() {
-#if (defined(OS_WIN) || defined(OS_LINUX)) && defined(USE_TCMALLOC)
+#if !defined(OS_MACOSX) && defined(USE_TCMALLOC)
   MallocExtension::instance()->ReleaseFreeMemory();
 #endif
 
@@ -1039,7 +1039,7 @@
   while (!v8::V8::IdleNotification()) {
   }
 
-#if (defined(OS_WIN) || defined(OS_LINUX)) && defined(USE_TCMALLOC)
+#if !defined(OS_MACOSX) && defined(USE_TCMALLOC)
   // Tell tcmalloc to release any free pages it's still holding.
   MallocExtension::instance()->ReleaseFreeMemory();
 #endif
