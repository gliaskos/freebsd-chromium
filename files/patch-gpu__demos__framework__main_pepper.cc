--- ./gpu/demos/framework/main_pepper.cc.orig	2010-12-13 12:03:08.000000000 +0100
+++ ./gpu/demos/framework/main_pepper.cc	2010-12-20 20:41:37.000000000 +0100
@@ -106,7 +106,7 @@
   NPError err = NPERR_NO_ERROR;
 
   switch (variable) {
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
     case NPPVpluginNameString:
       *(static_cast<const char**>(value)) = "Pepper GPU Demo";
       break;
@@ -163,17 +163,17 @@
 }
 
 EXPORT NPError API_CALL NP_Initialize(NPNetscapeFuncs* browser_funcs
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
                                      , NPPluginFuncs* plugin_funcs
-#endif  // OS_LINUX
+#endif  // OS_LINUX || OS_FREEBSD
                                      ) {
   g_at_exit_manager = new base::AtExitManager();
   gpu::demos::g_browser = browser_funcs;
   pglInitialize();
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
   NP_GetEntryPoints(plugin_funcs);
-#endif  // OS_LINUX
+#endif  // OS_LINUX || OS_FREEBSD
   return NPERR_NO_ERROR;
 }
 
@@ -182,7 +182,7 @@
   delete g_at_exit_manager;
 }
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 EXPORT NPError API_CALL NP_GetValue(NPP instance, NPPVariable variable,
                                     void* value) {
   return gpu::demos::NPP_GetValue(instance, variable, value);
@@ -191,5 +191,5 @@
 EXPORT const char* API_CALL NP_GetMIMEDescription() {
   return "pepper-application/x-gpu-demo::Pepper GPU Demo";
 }
-#endif  // OS_LINUX
+#endif  // OS_LINUX || OS_FREEBSD
 }  // extern "C"
