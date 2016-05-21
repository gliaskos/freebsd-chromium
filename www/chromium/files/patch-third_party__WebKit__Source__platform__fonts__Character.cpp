--- third_party/WebKit/Source/platform/fonts/Character.cpp.orig	2016-05-20 14:25:40.682112000 -0400
+++ third_party/WebKit/Source/platform/fonts/Character.cpp	2016-05-20 15:02:23.306019000 -0400
@@ -35,14 +35,45 @@
 #include <algorithm>
 #include <unicode/uobject.h>
 #include <unicode/uscript.h>
+
+#if defined(__FreeBSD__)
+#include "CharacterData.h"
+#include <unicode/uniset.h>
+#else
 #define MUTEX_H // Prevent compile failure of utrie2.h on Windows
 #include <utrie2.h>
+#endif
 
 using namespace WTF;
 using namespace Unicode;
 
 namespace blink {
 
+#if defined(__FreeBSD__)
+static icu::UnicodeSet* createUnicodeSet(
+    const UChar32* characters, size_t charactersCount,
+    const UChar32* ranges, size_t rangesCount)
+{
+    icu::UnicodeSet* unicodeSet = new icu::UnicodeSet();
+    for (size_t i = 0; i < charactersCount; i++)
+        unicodeSet->add(characters[i]);
+    for (size_t i = 0; i < rangesCount; i += 2)
+        unicodeSet->add(ranges[i], ranges[i + 1]);
+    unicodeSet->freeze();
+    return unicodeSet;
+}
+
+#define CREATE_UNICODE_SET(name) \
+    createUnicodeSet( \
+        name##Array, WTF_ARRAY_LENGTH(name##Array), \
+        name##Ranges, WTF_ARRAY_LENGTH(name##Ranges))
+
+#define RETURN_HAS_PROPERTY(c, name) \
+    static icu::UnicodeSet* unicodeSet = nullptr; \
+    if (!unicodeSet) \
+        unicodeSet = CREATE_UNICODE_SET(name); \
+    return unicodeSet->contains(c);
+#else
 // Freezed trie tree, see CharacterDataGenerator.cpp.
 extern int32_t serializedCharacterDataSize;
 extern uint8_t serializedCharacterData[];
@@ -59,7 +90,7 @@
     return trie;
 }
 
-bool Character::hasProperty(UChar32 c, CharacterProperty property)
+static bool hasProperty(UChar32 c, CharacterProperty property)
 {
     static UTrie2* trie = nullptr;
     if (!trie)
@@ -68,6 +99,10 @@
         & static_cast<CharacterPropertyType>(property);
 }
 
+#define RETURN_HAS_PROPERTY(c, name) \
+    return hasProperty(c, CharacterProperty::name);
+#endif
+
 // Takes a flattened list of closed intervals
 template <class T, size_t size>
 bool valueInIntervalList(const T (&intervalList)[size], const T& value)
@@ -184,7 +219,7 @@
 
 bool Character::isUprightInMixedVertical(UChar32 character)
 {
-    return hasProperty(character, CharacterProperty::isUprightInMixedVertical);
+    RETURN_HAS_PROPERTY(character, isUprightInMixedVertical)
 }
 
 bool Character::isCJKIdeographOrSymbol(UChar32 c)
@@ -193,7 +228,7 @@
     if (c < 0x2C7)
         return false;
 
-    return hasProperty(c, CharacterProperty::isCJKIdeographOrSymbol);
+    RETURN_HAS_PROPERTY(c, isCJKIdeographOrSymbol)
 }
 
 unsigned Character::expansionOpportunityCount(const LChar* characters, size_t length, TextDirection direction, bool& isAfterExpansion, const TextJustify textJustify)
