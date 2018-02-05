--- chrome/browser/ui/libgtkui/nav_button_provider_gtk3.h.orig	2018-02-03 11:08:39.008625000 +0100
+++ chrome/browser/ui/libgtkui/nav_button_provider_gtk3.h	2018-02-03 11:09:34.666421000 +0100
@@ -30,9 +30,7 @@
   int GetInterNavButtonSpacing() const override;
 
  private:
-  std::map<chrome::FrameButtonDisplayType,
-           gfx::ImageSkia[views::Button::STATE_COUNT]>
-      button_images_;
+  std::map<chrome::FrameButtonDisplayType, std::vector<gfx::ImageSkia>> button_images_;
   std::map<chrome::FrameButtonDisplayType, gfx::Insets> button_margins_;
   gfx::Insets top_area_spacing_;
   int inter_button_spacing_;
