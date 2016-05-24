--- third_party/WebKit/Source/platform/fonts/skia/FontCacheSkia.cpp.orig	2016-05-21 01:26:09 UTC
+++ third_party/WebKit/Source/platform/fonts/skia/FontCacheSkia.cpp
@@ -65,7 +65,7 @@ const char* kColorEmojiFonts[] = { "56##
 const char* kTextEmojiFonts[] = { "Droid Sans Fallback" };
 const char* kSymbolsFonts[] = { "Droid Sans Fallback" };
 const char* kMathFonts[] = { "Droid Sans Fallback" };
-#elif OS(LINUX)
+#elif OS(LINUX) || OS(FREEBSD) || OS(OPENBSD)
 const char* kColorEmojiFonts[] = { "Noto Color Emoji", "Noto Sans Symbols", "Symbola", "DejaVu Sans" };
 const char* kTextEmojiFonts[] = { "Noto Sans Symbols", "Symbola", "Droid Sans Fallback", "DejaVu Sans" };
 const char* kSymbolsFonts[] = { "FreeSerif", "FreeMono", "Droid Sans Fallback", "DejaVu Sans" };
