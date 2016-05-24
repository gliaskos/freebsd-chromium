--- third_party/WebKit/Source/platform/fonts/Character.h.orig	2016-05-20 18:24:35 UTC
+++ third_party/WebKit/Source/platform/fonts/Character.h
@@ -137,9 +137,6 @@ public:
     static String normalizeSpaces(const UChar*, unsigned length);
 
     static bool isCommonOrInheritedScript(UChar32);
-
-private:
-    static bool hasProperty(UChar32, CharacterProperty);
 };
 
 } // namespace blink
