--- third_party/pdfium/fpdfsdk/src/javascript/JS_Value.cpp.orig	2016-05-11 19:03:45 UTC
+++ third_party/pdfium/fpdfsdk/src/javascript/JS_Value.cpp
@@ -596,11 +596,12 @@ CFX_WideString CJS_Date::ToString() cons
 }
 
 double _getLocalTZA() {
+  struct tm *lt;
   if (!FSDK_IsSandBoxPolicyEnabled(FPDF_POLICY_MACHINETIME_ACCESS))
     return 0;
   time_t t = 0;
   time(&t);
-  localtime(&t);
+  lt = localtime(&t);
 #if _MSC_VER >= 1900
   // In gcc and in Visual Studio prior to VS 2015 'timezone' is a global
   // variable declared in time.h. That variable was deprecated and in VS 2015
@@ -608,7 +609,11 @@ double _getLocalTZA() {
   long timezone = 0;
   _get_timezone(&timezone);
 #endif
+#ifdef __FreeBSD__
+  return (double)(-(lt->tm_gmtoff * 1000));
+#else
   return (double)(-(timezone * 1000));
+#endif
 }
 
 int _getDaylightSavingTA(double d) {
