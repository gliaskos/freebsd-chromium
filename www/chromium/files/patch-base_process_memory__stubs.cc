--- base/process/memory_stubs.cc.orig	2017-06-05 21:03:00.000000000 +0200
+++ base/process/memory_stubs.cc	2017-06-12 17:54:06.034577000 +0200
@@ -9,6 +9,8 @@
 
 namespace base {
 
+#if !defined(OS_FREEBSD)
+// Get rid of multiple definition errors
 void EnableTerminationOnOutOfMemory() {
 }
 
@@ -22,6 +24,7 @@
 void TerminateBecauseOutOfMemory(size_t size) {
   abort();
 }
+#endif
 
 // UncheckedMalloc and Calloc exist so that platforms making use of
 // EnableTerminationOnOutOfMemory have a way to allocate memory without
@@ -31,6 +34,8 @@
 // their respective stdlib function since those functions will return null on a
 // failure to allocate.
 
+#if !defined(OS_FREEBSD)
+// FreeBSD brings it's own implementation in memory.cc -- cmt
 bool UncheckedMalloc(size_t size, void** result) {
   *result = malloc(size);
   return *result != nullptr;
@@ -40,5 +45,6 @@
   *result = calloc(num_items, size);
   return *result != nullptr;
 }
+#endif
 
 }  // namespace base
