--- third_party/WebKit/Source/platform/fonts/Character.h.orig	2016-05-20 14:24:35.907081000 -0400
+++ third_party/WebKit/Source/platform/fonts/Character.h	2016-05-20 14:24:52.547475000 -0400
@@ -137,9 +137,6 @@
     static String normalizeSpaces(const UChar*, unsigned length);
 
     static bool isCommonOrInheritedScript(UChar32);
-
-private:
-    static bool hasProperty(UChar32, CharacterProperty);
 };
 
 } // namespace blink
