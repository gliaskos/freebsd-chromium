--- ./chrome/browser/ui/gtk/accelerators_gtk.h.orig	2014-03-04 03:17:08.000000000 +0100
+++ ./chrome/browser/ui/gtk/accelerators_gtk.h	2014-03-07 14:10:32.000000000 +0100
@@ -10,6 +10,8 @@
 #include "base/containers/hash_tables.h"
 #include "ui/base/accelerators/accelerator.h"
 
+#include <vector>
+
 template <typename T> struct DefaultSingletonTraits;
 
 class AcceleratorsGtk {
