--- ./webkit/glue/plugins/pepper_private2.h.orig	2010-12-13 12:03:08.000000000 +0100
+++ ./webkit/glue/plugins/pepper_private2.h	2010-12-20 20:41:38.000000000 +0100
@@ -30,7 +30,7 @@
                          uint32_t glyph_count,
                          uint16_t glyph_indices[],
                          PP_Point glyph_advances[])
-#if defined(OS_LINUX)
+#if defined(OS_LINUX)  || defined(OS_FREEBSD)
       ;
 #else
       { return false; }
