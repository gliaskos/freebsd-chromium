--- ./third_party/WebKit/WebCore/platform/chromium/ChromiumBridge.h.orig	2010-12-13 12:11:24.000000000 +0100
+++ ./third_party/WebKit/WebCore/platform/chromium/ChromiumBridge.h	2011-01-07 14:17:11.000000000 +0100
@@ -268,7 +268,7 @@
             GraphicsContext*, int part, int state, int classicState, const IntRect&);
         static void paintProgressBar(
             GraphicsContext*, const IntRect& barRect, const IntRect& valueRect, bool determinate, double animatedSeconds);
-#elif OS(LINUX)
+#elif OS(LINUX) || OS(FREEBSD)
         // The UI part which is being accessed.
         enum ThemePart {
             PartScrollbarDownArrow,
