--- ./app/gfx/gl/gl_context_egl.cc.orig	2010-12-13 12:03:02.000000000 +0100
+++ ./app/gfx/gl/gl_context_egl.cc	2010-12-20 20:41:37.000000000 +0100
@@ -5,7 +5,7 @@
 #include <EGL/egl.h>
 
 #include "build/build_config.h"
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 #include "app/x11_util.h"
 #define EGL_HAS_PBUFFERS 1
 #endif
@@ -63,7 +63,7 @@
   if (initialized)
     return true;
 
-#ifdef OS_LINUX
+#ifdef OS_LINUX || defined(OS_FREEBSD)
   EGLNativeDisplayType native_display = x11_util::GetXDisplay();
 #else
   EGLNativeDisplayType native_display = EGL_DEFAULT_DISPLAY;
