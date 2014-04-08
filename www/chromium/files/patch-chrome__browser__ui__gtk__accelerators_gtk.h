--- ./chrome/browser/ui/gtk/accelerators_gtk.h.orig	2014-04-02 21:04:25.000000000 +0200
+++ ./chrome/browser/ui/gtk/accelerators_gtk.h	2014-04-04 01:39:18.000000000 +0200
@@ -10,6 +10,8 @@
 #include "base/containers/hash_tables.h"
 #include "ui/base/accelerators/accelerator.h"
 
+#include <vector>
+
 template <typename T> struct DefaultSingletonTraits;
 
 class AcceleratorsGtk {
