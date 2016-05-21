--- cc/layers/layer_impl.cc.orig	2016-02-06 12:30:54 UTC
+++ cc/layers/layer_impl.cc
@@ -1549,13 +1549,15 @@ gfx::ScrollOffset LayerImpl::MaxScrollOf
   scaled_scroll_bounds.SetSize(std::floor(scaled_scroll_bounds.width()),
                                std::floor(scaled_scroll_bounds.height()));
 
-  gfx::ScrollOffset max_offset(
+  // (rene) prevent name collision with /usr/include/vm/vm_map.h on FreeBSD
+  // which also defines max_offset
+  gfx::ScrollOffset _max_offset(
       scaled_scroll_bounds.width() - scroll_clip_layer->bounds().width(),
       scaled_scroll_bounds.height() - scroll_clip_layer->bounds().height());
   // We need the final scroll offset to be in CSS coords.
-  max_offset.Scale(1 / scale_factor);
-  max_offset.SetToMax(gfx::ScrollOffset());
-  return max_offset;
+  _max_offset.Scale(1 / scale_factor);
+  _max_offset.SetToMax(gfx::ScrollOffset());
+  return _max_offset;
 }
 
 gfx::ScrollOffset LayerImpl::ClampScrollOffsetToLimits(
