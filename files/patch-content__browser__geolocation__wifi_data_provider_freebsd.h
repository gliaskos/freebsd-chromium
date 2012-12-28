--- content/browser/geolocation/wifi_data_provider_freebsd.h.orig	2012-12-06 11:09:56.178148204 -0500
+++ content/browser/geolocation/wifi_data_provider_freebsd.h	2012-12-06 11:09:56.178148204 -0500
@@ -0,0 +1,25 @@
+// Copyright (c) 2012 The Chromium Authors. All rights reserved.
+// Use of this source code is governed by a BSD-style license that can be
+// found in the LICENSE file.
+
+#ifndef CONTENT_BROWSER_GEOLOCATION_WIFI_DATA_PROVIDER_FREEBSD_H_
+#define CONTENT_BROWSER_GEOLOCATION_WIFI_DATA_PROVIDER_FREEBSD_H_
+
+#include "content/browser/geolocation/wifi_data_provider_common.h"
+
+// Implementation of the wifi data provider for FreeBSD.
+class FreeBSDWifiDataProvider : public WifiDataProviderCommon {
+public:
+	FreeBSDWifiDataProvider();
+
+private:
+	virtual ~FreeBSDWifiDataProvider();
+
+	// WifiDataProviderCommon
+	virtual WlanApiInterface* NewWlanApi() OVERRIDE;
+	virtual PollingPolicyInterface* NewPollingPolicy() OVERRIDE;
+
+	DISALLOW_COPY_AND_ASSIGN(FreeBSDWifiDataProvider);
+};
+
+#endif  // CONTENT_BROWSER_GEOLOCATION_WIFI_DATA_PROVIDER_FREEBSD_H_
