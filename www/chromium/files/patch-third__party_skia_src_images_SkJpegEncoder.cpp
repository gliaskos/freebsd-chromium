--- third_party/skia/src/images/SkJpegEncoder.cpp.orig	2017-10-14 03:28:12.050097000 +0200
+++ third_party/skia/src/images/SkJpegEncoder.cpp	2017-10-14 03:33:14.017961000 +0200
@@ -86,6 +86,7 @@
         }
     };
 
+#ifdef JCS_EXTENSIONS
     J_COLOR_SPACE jpegColorType = JCS_EXT_RGBA;
     int numComponents = 0;
     switch (srcInfo.colorType()) {
@@ -134,6 +135,7 @@
             jpegColorType = JCS_EXT_RGBA;
             numComponents = 4;
             break;
+#endif
         default:
             return false;
     }
