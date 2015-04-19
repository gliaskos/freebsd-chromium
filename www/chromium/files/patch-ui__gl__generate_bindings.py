--- ui/gl/generate_bindings.py.orig	Tue Mar 10 23:41:42 2015
+++ ui/gl/generate_bindings.py	Wed Mar 11 07:22:50 2015
@@ -1595,6 +1595,9 @@
   'arguments':
       'Display* dpy, GLXDrawable drawable, int32* numerator, '
       'int32* denominator' },
+{ 'return_type': '__GLXextFuncPtr',
+  'names': ['glXGetProcAddressARB'],
+  'arguments': 'const GLubyte* procName', },
 { 'return_type': 'void',
   'names': ['glXGetSelectedEvent'],
   'arguments': 'Display* dpy, GLXDrawable drawable, unsigned long* mask', },
