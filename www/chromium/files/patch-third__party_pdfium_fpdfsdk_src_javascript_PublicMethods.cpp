--- third_party/pdfium/fpdfsdk/src/javascript/PublicMethods.cpp.orig	2016-05-11 19:03:45 UTC
+++ third_party/pdfium/fpdfsdk/src/javascript/PublicMethods.cpp
@@ -763,7 +763,7 @@ FX_BOOL CJS_PublicMethods::AFNumber_Form
                                            const std::vector<CJS_Value>& params,
                                            CJS_Value& vRet,
                                            CFX_WideString& sError) {
-#if _FX_OS_ != _FX_ANDROID_
+#if _FX_OS_ != _FX_ANDROID_ && _FX_OS_ != _FX_LINUX_DESKTOP_
   CJS_Context* pContext = (CJS_Context*)cc;
   if (params.size() != 6) {
     sError = JSGetStringFromID(pContext, IDS_STRING_JSPARAMERROR);
@@ -1061,7 +1061,7 @@ FX_BOOL CJS_PublicMethods::AFPercent_For
     const std::vector<CJS_Value>& params,
     CJS_Value& vRet,
     CFX_WideString& sError) {
-#if _FX_OS_ != _FX_ANDROID_
+#if _FX_OS_ != _FX_ANDROID_ && _FX_OS_ != _FX_LINUX_DESKTOP_
   CJS_Context* pContext = (CJS_Context*)cc;
   CJS_EventHandler* pEvent = pContext->GetEventHandler();
 
