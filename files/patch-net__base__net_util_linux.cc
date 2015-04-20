--- net/base/net_util_linux.cc.orig	2015-04-14 18:18:56.000000000 -0400
+++ net/base/net_util_linux.cc	2015-04-19 10:57:54.379445000 -0400
@@ -4,12 +4,14 @@
 
 #include "net/base/net_util_linux.h"
 
+#if !defined(OS_BSD)
 #if !defined(OS_ANDROID)
 #include <linux/ethtool.h>
 #endif  // !defined(OS_ANDROID)
 #include <linux/if.h>
 #include <linux/sockios.h>
 #include <linux/wireless.h>
+#endif // !defined(OS_BSD)
 #include <set>
 #include <sys/ioctl.h>
 #include <sys/types.h>
@@ -39,6 +41,7 @@
 // application layer.
 bool TryConvertNativeToNetIPAttributes(int native_attributes,
                                        int* net_attributes) {
+#if !defined(OS_BSD)
   // For Linux/ChromeOS/Android, we disallow addresses with attributes
   // IFA_F_OPTIMISTIC, IFA_F_DADFAILED, and IFA_F_TENTATIVE as these
   // are still progressing through duplicated address detection (DAD)
@@ -61,6 +64,9 @@
   }
 
   return true;
+#else
+  return false;
+#endif
 }
 
 }  // namespace
@@ -83,6 +89,7 @@
   if (!s.is_valid())
     return NetworkChangeNotifier::CONNECTION_UNKNOWN;
 
+#if !defined(OS_BSD)
   // Test wireless extensions for CONNECTION_WIFI
   struct iwreq pwrq = {};
   strncpy(pwrq.ifr_name, ifname.c_str(), IFNAMSIZ - 1);
@@ -100,9 +107,11 @@
     return NetworkChangeNotifier::CONNECTION_ETHERNET;
 #endif  // !defined(OS_ANDROID)
 
+#endif // !defined(OS_BSD)
   return NetworkChangeNotifier::CONNECTION_UNKNOWN;
 }
 
+#if !defined(OS_BSD)
 std::string GetInterfaceSSID(const std::string& ifname) {
   base::ScopedFD ioctl_socket(socket(AF_INET, SOCK_DGRAM, 0));
   if (!ioctl_socket.is_valid())
@@ -203,6 +212,7 @@
   }
   return connected_ssid;
 }
+#endif
 
 }  // namespace internal
 
@@ -210,14 +220,19 @@
   if (networks == NULL)
     return false;
 
+#if !defined(OS_BSD)
   internal::AddressTrackerLinux tracker;
   tracker.Init();
 
   return internal::GetNetworkListImpl(
       networks, policy, tracker.GetOnlineLinks(), tracker.GetAddressMap(),
       &internal::AddressTrackerLinux::GetInterfaceName);
+#else
+  return false;
+#endif
 }
 
+#if !defined(OS_BSD)
 std::string GetWifiSSID() {
   NetworkInterfaceList networks;
   if (GetNetworkList(&networks, net::INCLUDE_HOST_SCOPE_VIRTUAL_INTERFACES)) {
@@ -226,5 +241,6 @@
   }
   return "";
 }
+#endif
 
 }  // namespace net
