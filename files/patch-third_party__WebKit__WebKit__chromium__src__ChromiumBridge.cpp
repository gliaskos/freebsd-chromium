--- ./third_party/WebKit/WebKit/chromium/src/ChromiumBridge.cpp.orig	2010-12-13 12:09:02.000000000 +0100
+++ ./third_party/WebKit/WebKit/chromium/src/ChromiumBridge.cpp	2011-01-07 12:45:25.000000000 +0100
@@ -784,7 +784,7 @@
         gc->platformContext()->canvas(), barRect, valueRect, determinate, animatedSeconds);
 }
 
-#elif OS(LINUX)
+#elif OS(LINUX) || OS(FREEBSD)
 
 static WebThemeEngine::Part WebThemePart(ChromiumBridge::ThemePart part)
 {
