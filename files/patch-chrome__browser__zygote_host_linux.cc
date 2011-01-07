--- ./chrome/browser/zygote_host_linux.cc.orig	2010-12-13 12:04:29.000000000 +0100
+++ ./chrome/browser/zygote_host_linux.cc	2011-01-07 14:17:10.000000000 +0100
@@ -62,7 +62,12 @@
 }
 
 ZygoteHost::~ZygoteHost() {
+    Pickle pickle;
   if (init_)
+#if defined(OS_FREEBSD)
+    pickle.WriteInt(kCmdEnd);
+    HANDLE_EINTR(write(control_fd_, pickle.data(), pickle.size()));
+#endif
     close(control_fd_);
 }
 
@@ -77,7 +82,12 @@
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
 
@@ -148,6 +158,7 @@
     // We need to look for it.
     // But first, wait for the zygote to tell us it's running.
     // The sending code is in chrome/browser/zygote_main_linux.cc.
+#if defined(OS_LINUX)
     std::vector<int> fds_vec;
     const int kExpectedLength = sizeof(kZygoteMagic);
     char buf[kExpectedLength];
@@ -177,6 +188,7 @@
       // Reap the sandbox.
       ProcessWatcher::EnsureProcessGetsReaped(process);
     }
+#endif // defined(OS_LINUX)
   } else {
     // Not using the SUID sandbox.
     pid_ = process;
@@ -242,12 +254,15 @@
       return base::kNullProcessHandle;
   }
 
+#if defined(OS_LINUX)
   const int kRendererScore = 5;
   AdjustRendererOOMScore(pid, kRendererScore);
+#endif
 
   return pid;
 }
 
+#if defined(OS_LINUX)
 void ZygoteHost::AdjustRendererOOMScore(base::ProcessHandle pid, int score) {
   // 1) You can't change the oom_adj of a non-dumpable process (EPERM) unless
   //    you're root. Because of this, we can't set the oom_adj from the browser
@@ -299,6 +314,7 @@
       PLOG(ERROR) << "Failed to adjust OOM score of renderer with pid " << pid;
   }
 }
+#endif  // defined(OS_LINUX)
 
 void ZygoteHost::EnsureProcessTerminated(pid_t process) {
   DCHECK(init_);
