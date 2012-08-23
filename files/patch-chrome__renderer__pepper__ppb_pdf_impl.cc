--- ./chrome/renderer/pepper/ppb_pdf_impl.cc.orig	2012-08-17 03:02:07.000000000 +0200
+++ ./chrome/renderer/pepper/ppb_pdf_impl.cc	2012-08-23 22:31:43.000000000 +0200
@@ -43,7 +43,7 @@
 
 namespace {
 
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
 class PrivateFontFile : public ppapi::Resource {
  public:
   PrivateFontFile(PP_Instance instance, int fd)
@@ -193,7 +193,7 @@
     PP_Instance instance_id,
     const PP_FontDescription_Dev* description,
     PP_PrivateFontCharset charset) {
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
   // Validate the instance before using it below.
   if (!content::GetHostGlobals()->GetInstance(instance_id))
     return 0;
@@ -225,7 +225,7 @@
                                     uint32_t table,
                                     void* output,
                                     uint32_t* output_length) {
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
   ppapi::Resource* resource =
       PpapiGlobals::Get()->GetResourceTracker()->GetResource(font_file);
   if (!resource)
