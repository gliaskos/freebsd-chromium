--- third_party/WebKit/Source/platform/fonts/FontPlatformData.cpp.orig	2015-10-14 22:17:57.580250000 +0200
+++ third_party/WebKit/Source/platform/fonts/FontPlatformData.cpp	2015-10-14 22:18:13.766229000 +0200
@@ -358,7 +358,7 @@
 {
     RefPtr<SharedBuffer> buffer;
 
-    SkFontTableTag tag = WTF::bswap32(table);
+    SkFontTableTag tag = bswap32(table);
     const size_t tableSize = m_typeface->getTableSize(tag);
     if (tableSize) {
         Vector<char> tableBuffer(tableSize);
