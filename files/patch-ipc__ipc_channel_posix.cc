--- ./ipc/ipc_channel_posix.cc.orig	2012-08-17 03:01:51.000000000 +0200
+++ ./ipc/ipc_channel_posix.cc	2012-08-23 22:31:44.000000000 +0200
@@ -674,7 +674,7 @@
 
 bool Channel::ChannelImpl::GetClientEuid(uid_t* client_euid) const {
   DCHECK(HasAcceptedConnection());
-#if defined(OS_MACOSX) || defined(OS_OPENBSD)
+#if defined(OS_MACOSX) || defined(OS_BSD)
   uid_t peer_euid;
   gid_t peer_gid;
   if (getpeereid(pipe_, &peer_euid, &peer_gid) != 0) {
