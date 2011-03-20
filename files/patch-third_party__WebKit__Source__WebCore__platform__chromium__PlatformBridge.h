--- ./third_party/WebKit/Source/WebCore/platform/chromium/PlatformBridge.h	2011-03-17 11:42:26.000000000 +0300
+++ ./third_party/WebKit/Source/WebCore/platform/chromium/PlatformBridge.h	2011-03-20 01:30:56.000000000 +0300
@@ -264,7 +264,7 @@
         GraphicsContext*, int part, int state, int classicState, const IntRect&);
     static void paintProgressBar(
         GraphicsContext*, const IntRect& barRect, const IntRect& valueRect, bool determinate, double animatedSeconds);
-#elif OS(LINUX)
+#elif OS(LINUX) || OS(FREEBSD)
     // The UI part which is being accessed.
     enum ThemePart {
         // ScrollbarTheme parts
