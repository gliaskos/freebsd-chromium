--- third_party/WebKit/Source/platform/fonts/FontPlatformData.cpp.orig	2016-02-06 12:31:08 UTC
+++ third_party/WebKit/Source/platform/fonts/FontPlatformData.cpp
@@ -358,7 +358,7 @@ PassRefPtr<SharedBuffer> FontPlatformDat
 {
     RefPtr<SharedBuffer> buffer;
 
-    SkFontTableTag tag = WTF::bswap32(table);
+    SkFontTableTag tag = bswap32(table);
     const size_t tableSize = m_typeface->getTableSize(tag);
     if (tableSize) {
         Vector<char> tableBuffer(tableSize);
