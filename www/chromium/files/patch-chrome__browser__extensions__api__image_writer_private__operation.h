--- ./chrome/browser/extensions/api/image_writer_private/operation.h.orig	2014-02-20 21:27:38.000000000 +0100
+++ ./chrome/browser/extensions/api/image_writer_private/operation.h	2014-02-24 17:23:44.000000000 +0100
@@ -114,7 +114,7 @@
   friend class base::RefCountedThreadSafe<Operation>;
 
   // TODO(haven): Clean up these switches. http://crbug.com/292956
-#if defined(OS_LINUX) && !defined(CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_FREEBSD)) && !defined(CHROMEOS)
   void WriteRun();
   void WriteChunk(scoped_ptr<image_writer_utils::ImageReader> reader,
                   scoped_ptr<image_writer_utils::ImageWriter> writer,
