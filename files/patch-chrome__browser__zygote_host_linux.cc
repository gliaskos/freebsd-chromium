--- ./chrome/browser/zygote_host_linux.cc.orig	2010-12-16 02:11:58.000000000 +0100
+++ ./chrome/browser/zygote_host_linux.cc	2010-12-20 20:15:08.000000000 +0100
@@ -63,8 +63,16 @@
 }
 
 ZygoteHost::~ZygoteHost() {
-  if (init_)
+#if defined(OS_FREEBSD)
+  Pickle pickle;
+#endif
+  if (init_) {
+#if defined(OS_FREEBSD)
+    pickle.writeInt(kCmdEnd);
+    HANDLE_EINTR(write(control_fd_, pickle.data(), pickle.size()));
+#endif
     close(control_fd_);
+  }
 }
 
 // static
@@ -83,7 +91,12 @@
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
 
@@ -151,6 +164,7 @@
     // We need to look for it.
     // But first, wait for the zygote to tell us it's running.
     // The sending code is in chrome/browser/zygote_main_linux.cc.
+#if defined(OS_LINUX)
     std::vector<int> fds_vec;
     const int kExpectedLength = sizeof(kZygoteMagic);
     char buf[kExpectedLength];
@@ -180,6 +194,7 @@
       // Reap the sandbox.
       ProcessWatcher::EnsureProcessGetsReaped(process);
     }
+#endif // defined(OS_LINUX)
   } else {
     // Not using the SUID sandbox.
     pid_ = process;
@@ -284,6 +299,7 @@
     selinux_valid = true;
   }
 
+#if defined(OS_LINUX)
   if (using_suid_sandbox_ && !selinux) {
     base::ProcessHandle sandbox_helper_process;
     std::vector<std::string> adj_oom_score_cmdline;
@@ -301,6 +317,7 @@
     if (!base::AdjustOOMScore(pid, score))
       PLOG(ERROR) << "Failed to adjust OOM score of renderer with pid " << pid;
   }
+#endif // defined(OS_LINUX)
 }
 
 void ZygoteHost::EnsureProcessTerminated(pid_t process) {
