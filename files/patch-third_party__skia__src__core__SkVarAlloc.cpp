--- third_party/skia/src/core/SkVarAlloc.cpp.orig	Wed Mar 11 08:55:27 2015
+++ third_party/skia/src/core/SkVarAlloc.cpp	Wed Mar 11 09:23:37 2015
@@ -4,8 +4,10 @@
 #if defined(SK_BUILD_FOR_MAC)
     #include <malloc/malloc.h>
 #elif defined(SK_BUILD_FOR_UNIX) || defined(SK_BUILD_FOR_WIN32)
+#if !defined(__FreeBSD__)
     #include <malloc.h>
 #endif
+#endif
 
 struct SkVarAlloc::Block {
     Block* prev;
@@ -56,7 +58,7 @@ void SkVarAlloc::makeSpace(size_t bytes, unsigned flag
 static size_t heap_size(void* p) {
 #if defined(SK_BUILD_FOR_MAC)
     return malloc_size(p);
-#elif defined(SK_BUILD_FOR_UNIX)
+#elif defined(SK_BUILD_FOR_UNIX) && !defined(__FreeBSD__)
     return malloc_usable_size(p);
 #elif defined(SK_BUILD_FOR_WIN32)
     return _msize(p);

