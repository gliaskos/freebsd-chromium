--- content/browser/gamepad/gamepad_provider.cc.orig	Sat May 23 00:59:48 2015
+++ content/browser/gamepad/gamepad_provider.cc	Sat May 23 01:10:34 2015
@@ -128,7 +128,7 @@ void GamepadProvider::Initialize(scoped_ptr<GamepadDat
   pad_states_.reset(new PadState[WebGamepads::itemsLengthCap]);
 
   polling_thread_.reset(new base::Thread("Gamepad polling thread"));
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   // On Linux, the data fetcher needs to watch file descriptors, so the message
   // loop needs to be a libevent loop.
   const base::MessageLoop::Type kMessageLoopType = base::MessageLoop::TYPE_IO;
