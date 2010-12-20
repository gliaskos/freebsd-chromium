--- ./app/gfx/gl/gl_bindings.h.orig	2010-12-13 12:03:02.000000000 +0100
+++ ./app/gfx/gl/gl_bindings.h	2010-12-20 20:41:37.000000000 +0100
@@ -22,7 +22,7 @@
 // The standard OpenGL native extension headers are also included.
 #if defined(OS_WIN)
 #include <GL/wglext.h>
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_FREEBSD)
 #include <GL/glx.h>
 #include <GL/glxext.h>
 
@@ -52,7 +52,7 @@
 typedef struct osmesa_context *OSMesaContext;
 typedef void (*OSMESAproc)();
 
-#if defined(OS_WIN) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_FREEBSD)
 
 // Forward declare EGL types.
 typedef unsigned int EGLBoolean;
@@ -75,7 +75,7 @@
 typedef Window   EGLNativeWindowType;
 #endif
 
-#endif  // OS_WIN || OS_LINUX
+#endif  // OS_WIN || OS_LINUX || OS_FREEBSD 
 
 #include "gl_bindings_autogen_gl.h"
 #include "gl_bindings_autogen_osmesa.h"
@@ -83,7 +83,7 @@
 #if defined(OS_WIN)
 #include "gl_bindings_autogen_egl.h"
 #include "gl_bindings_autogen_wgl.h"
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_FREEBSD)
 #include "gl_bindings_autogen_egl.h"
 #include "gl_bindings_autogen_glx.h"
 #endif
