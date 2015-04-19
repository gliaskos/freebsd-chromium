--- ui/views/controls/combobox/combobox.cc.orig	Sat Dec 27 12:54:25 2014
+++ ui/views/controls/combobox/combobox.cc	Sat Dec 27 12:56:07 2014
@@ -848,7 +848,7 @@
 }
 
 gfx::Size Combobox::ArrowSize() const {
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_BSD) || defined(OS_LINUX)) && !defined(OS_CHROMEOS)
   // TODO(estade): hack alert! This should always use GetNativeTheme(). For now
   // STYLE_ACTION isn't properly themed so we have to override the NativeTheme
   // behavior. See crbug.com/384071
