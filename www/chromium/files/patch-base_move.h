--- base/move.h.orig	2016-05-11 19:02:11 UTC
+++ base/move.h
@@ -31,7 +31,7 @@
 // for more details.
 // TODO(crbug.com/566182): Remove this macro and use DISALLOW_COPY_AND_ASSIGN
 // everywhere instead.
-#if defined(OS_ANDROID) || defined(OS_LINUX) || defined(OS_MACOSX)
+#if (defined(OS_ANDROID) || defined(OS_LINUX) || defined(OS_MACOSX)) && !defined(OS_BSD)
 #define DISALLOW_COPY_AND_ASSIGN_WITH_MOVE_FOR_BIND(type)       \
  private:                                                       \
   type(const type&) = delete;                                   \
