--- chrome/browser/ui/libgtkui/nav_button_provider_gtk.h.orig	2018-12-04 15:51:51.982625000 +0100
+++ chrome/browser/ui/libgtkui/nav_button_provider_gtk.h	2018-12-04 15:52:30.242388000 +0100
@@ -38,7 +38,7 @@
 
  private:
   std::map<chrome::FrameButtonDisplayType,
-           gfx::ImageSkia[views::Button::STATE_COUNT]>
+           std::array<gfx::ImageSkia, views::Button::STATE_COUNT>>
       button_images_;
   std::map<chrome::FrameButtonDisplayType, gfx::Insets> button_margins_;
   gfx::Insets top_area_spacing_;
