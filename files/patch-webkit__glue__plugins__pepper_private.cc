--- ./webkit/glue/plugins/pepper_private.cc.orig	2010-12-13 12:03:08.000000000 +0100
+++ ./webkit/glue/plugins/pepper_private.cc	2010-12-20 20:41:38.000000000 +0100
@@ -27,7 +27,7 @@
 
 namespace pepper {
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 class PrivateFontFile : public Resource {
  public:
   PrivateFontFile(PluginModule* module, int fd)
@@ -144,7 +144,7 @@
     PP_Module module_id,
     const PP_FontDescription_Dev* description,
     PP_PrivateFontCharset charset) {
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
   PluginModule* module = ResourceTracker::Get()->GetModule(module_id);
   if (!module)
     return 0;
@@ -175,7 +175,7 @@
                                     uint32_t table,
                                     void* output,
                                     uint32_t* output_length) {
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
   scoped_refptr<PrivateFontFile> font(
       Resource::GetAs<PrivateFontFile>(font_file));
   if (!font.get())
@@ -287,7 +287,7 @@
   return &ppb_private;
 }
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 bool PrivateFontFile::GetFontTable(uint32_t table,
                                    void* output,
                                    uint32_t* output_length) {
