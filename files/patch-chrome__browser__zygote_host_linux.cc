--- chrome/browser/zygote_host_linux.cc.orig	2011-03-20 22:02:04.291167311 +0200
+++ chrome/browser/zygote_host_linux.cc	2011-03-20 22:02:04.451737160 +0200
@@ -61,8 +61,16 @@
 }
 
 ZygoteHost::~ZygoteHost() {
-  if (init_)
+#if defined(OS_FREEBSD)
+  Pickle pickle;
+#endif
+  if (init_) {
+#if defined(OS_FREEBSD)
+    pickle.WriteInt(kCmdEnd);
+    HANDLE_EINTR(write(control_fd_, pickle.data(), pickle.size()));
+#endif
     close(control_fd_);
+  }
 }
 
 // static
@@ -81,7 +89,12 @@
   cmd_line.AppendSwitchASCII(switches::kProcessType, switches::kZygoteProcess);
 
   int fds[2];
+#if defined(OS_FREEBSD)
+  if (socketpair(PF_UNIX, SOCK_SEQPACKET, 0, fds) != 0)
+    CHECK(socketpair(PF_UNIX, SOCK_DGRAM, 0, fds) == 0);
+#else
   CHECK(socketpair(PF_UNIX, SOCK_SEQPACKET, 0, fds) == 0);
+#endif
   base::file_handle_mapping_vector fds_to_map;
   fds_to_map.push_back(std::make_pair(fds[1], 3));
 
@@ -149,6 +162,7 @@
     // We need to look for it.
     // But first, wait for the zygote to tell us it's running.
     // The sending code is in chrome/browser/zygote_main_linux.cc.
+#if defined(OS_LINUX)
     std::vector<int> fds_vec;
     const int kExpectedLength = sizeof(kZygoteMagic);
     char buf[kExpectedLength];
@@ -179,6 +193,7 @@
       // Reap the sandbox.
       ProcessWatcher::EnsureProcessGetsReaped(process);
     }
+#endif // defined(OS_LINUX)
   } else {
     // Not using the SUID sandbox.
     pid_ = process;
@@ -285,6 +300,7 @@
     selinux_valid = true;
   }
 
+#if defined(OS_LINUX)
   if (using_suid_sandbox_ && !selinux) {
     base::ProcessHandle sandbox_helper_process;
     std::vector<std::string> adj_oom_score_cmdline;
@@ -302,6 +318,7 @@
     if (!base::AdjustOOMScore(pid, score))
       PLOG(ERROR) << "Failed to adjust OOM score of renderer with pid " << pid;
   }
+#endif // defined(OS_LINUX)
 }
 
 void ZygoteHost::EnsureProcessTerminated(pid_t process) {
