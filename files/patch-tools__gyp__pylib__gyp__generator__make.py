--- ./tools/gyp/pylib/gyp/generator/make.py.orig	2010-12-13 12:49:17.000000000 +0100
+++ ./tools/gyp/pylib/gyp/generator/make.py	2011-01-07 14:17:11.000000000 +0100
@@ -34,7 +34,7 @@
 generator_default_variables = {
   'EXECUTABLE_PREFIX': '',
   'EXECUTABLE_SUFFIX': '',
-  'OS': 'linux',
+  'OS': 'freebsd',
   'STATIC_LIB_PREFIX': 'lib',
   'SHARED_LIB_PREFIX': 'lib',
   'STATIC_LIB_SUFFIX': '.a',
@@ -106,7 +106,7 @@
 #   export LINK="$(CXX)"
 #
 # This will allow make to invoke N linker processes as specified in -jN.
-LINK ?= flock $(builddir)/linker.lock $(CXX)
+LINK ?= $(CXX)
 
 # We want to use GNU ar's T option if available because it's much faster.
 # We try to archive and link a file to see ar and ld support this feature.
@@ -147,13 +147,13 @@
   ARFLAGS.target := $(call detect_arflags,target)
 endif
 
-CC.host ?= gcc
-CFLAGS.host ?=
-CXX.host ?= g++
-CXXFLAGS.host ?=
-LINK.host ?= g++
-LDFLAGS.host ?=
-AR.host ?= ar
+CC.host ?= $(CC)
+CFLAGS.host ?= $(CFLAGS)
+CXX.host ?= $(CXX)
+CXXFLAGS.host ?= $(CXXFLAGS)
+LINK.host ?= $(LINK)
+LDFLAGS.host ?= $(LDFLAGS)
+AR.host ?= $(AR)
 # See the description for ARFLAGS.target.
 -include $(obj).host/arflags/arflags.mk
 # Temporarily disabled -- see ARFLAGS.target.
