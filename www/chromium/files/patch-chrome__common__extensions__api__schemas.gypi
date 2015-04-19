--- chrome/common/extensions/api/schemas.gypi.orig.port	Tue Mar 10 23:41:40 2015
+++ chrome/common/extensions/api/schemas.gypi	Wed Mar 11 07:22:50 2015
@@ -168,6 +168,11 @@
           '<@(webrtc_schema_files)',
         ],
       }],
+      ['enable_webrtc==0', {
+        'schema_files': [
+          'webrtc_logging_private.idl',
+        ],
+      }],
     ],
     'cc_dir': 'chrome/common/extensions/api',
     'root_namespace': 'extensions::api::%(namespace)s',
