--- ./third_party/WebKit/Source/platform/fonts/skia/FontCacheSkia.cpp.orig	2016-05-20 21:26:09.360969000 -0400
+++ ./third_party/WebKit/Source/platform/fonts/skia/FontCacheSkia.cpp	2016-05-20 21:27:15.477086000 -0400
@@ -65,7 +65,7 @@
 const char* kTextEmojiFonts[] = { "Droid Sans Fallback" };
 const char* kSymbolsFonts[] = { "Droid Sans Fallback" };
 const char* kMathFonts[] = { "Droid Sans Fallback" };
-#elif OS(LINUX)
+#elif OS(LINUX) || OS(FREEBSD) || OS(OPENBSD)
 const char* kColorEmojiFonts[] = { "Noto Color Emoji", "Noto Sans Symbols", "Symbola", "DejaVu Sans" };
 const char* kTextEmojiFonts[] = { "Noto Sans Symbols", "Symbola", "Droid Sans Fallback", "DejaVu Sans" };
 const char* kSymbolsFonts[] = { "FreeSerif", "FreeMono", "Droid Sans Fallback", "DejaVu Sans" };
