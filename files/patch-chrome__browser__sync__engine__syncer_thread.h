--- ./chrome/browser/sync/engine/syncer_thread.h.orig	2010-12-13 12:04:22.000000000 +0100
+++ ./chrome/browser/sync/engine/syncer_thread.h	2010-12-20 20:41:37.000000000 +0100
@@ -21,7 +21,7 @@
 #include "base/thread.h"
 #include "base/time.h"
 #include "base/waitable_event.h"
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 #include "chrome/browser/sync/engine/idle_query_linux.h"
 #endif
 #include "chrome/browser/sync/engine/syncer_types.h"
@@ -338,7 +338,7 @@
       NudgeSource source,
       const syncable::ModelTypeBitSet& model_types);
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
   // On Linux, we need this information in order to query idle time.
   scoped_ptr<IdleQueryLinux> idle_query_;
 #endif
