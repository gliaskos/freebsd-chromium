--- ui/gfx/mojo/buffer_types_struct_traits.h.orig	2019-09-09 21:55:46 UTC
+++ ui/gfx/mojo/buffer_types_struct_traits.h
@@ -193,7 +193,7 @@ struct StructTraits<gfx::mojom::GpuMemoryBufferIdDataV
   }
 };
 
-#if defined(OS_LINUX) || defined(USE_OZONE)
+#if defined(OS_LINUX) || defined(USE_OZONE) || defined(OS_BSD)
 template <>
 struct StructTraits<gfx::mojom::NativePixmapPlaneDataView,
                     gfx::NativePixmapPlane> {
@@ -237,7 +237,7 @@ struct StructTraits<gfx::mojom::NativePixmapHandleData
   static bool Read(gfx::mojom::NativePixmapHandleDataView data,
                    gfx::NativePixmapHandle* out);
 };
-#endif  // defined(OS_LINUX) || defined(USE_OZONE)
+#endif  // defined(OS_LINUX) || defined(USE_OZONE) || defined(OS_BSD)
 
 template <>
 struct StructTraits<gfx::mojom::GpuMemoryBufferHandleDataView,
